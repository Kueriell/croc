#!/usr/bin/env python3
# Plot power and area for the Croc chip, straight from standard OpenROAD
# report output (croc reports.tcl format). No ex13 helper-script dependency.
#
# Usage:
#   python3 plot_results.py FILE [FILE ...]
#
# Each FILE may contain a report_power block, a "Design Area Summary", and/or
# a hierarchical area table. Stage labels are derived from the filename, so
# files belonging to the same stage are merged. Pass several stages (e.g. the
# placed and routed reports) to get a before/after comparison.
#
# Outputs (PNG + PDF) into ./plots:
#   power_by_category.*   one column per power category (latest stage)
#   power_total.*         total power per stage (before/after, if >1 stage)
#   power_components.*    internal / switching / leakage per stage
#   area_composition.*    die area split: std cell / macro / pad / fill

import argparse
import os
import re
import numpy as np
import matplotlib.pyplot as plt

# IHP sg13g2: gate-equivalent reference cell area (um^2). From the user's lib.
AREA_PER_GE = 5.6448

# --- one cohesive palette, reused across every figure -----------------------
TEAL, GOLD, TERRA, SAGE, SLATE, GREY = (
    "#2A9D8F", "#E9C46A", "#E76F51", "#8AB17D", "#577590", "#D9D9D9")
POWER_PALETTE = {"Sequential": TEAL, "Combinational": GOLD,
                 "Clock": TERRA, "Macro": SAGE, "Pad": SLATE}
AREA_PALETTE = {"Pad": SLATE, "Std cell": TEAL, "Macro": TERRA, "Fill": GREY}
POWER_CATS = list(POWER_PALETTE)

plt.rcParams.update({
    "font.size": 11.5,
    "font.family": "DejaVu Sans",
    "axes.titlesize": 15,
    "axes.titleweight": "bold",
    "axes.edgecolor": "#3a3a3a",
    "axes.linewidth": 0.9,
    "axes.grid": False,
    "figure.dpi": 120,
})

NUM = r"([-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)"


def stage_label(path):
    n = os.path.basename(path)
    n = re.sub(r"\.(rpt|txt|log)$", "", n)
    n = re.sub(r"\.(power|area)$", "", n)
    n = re.sub(r"^\d+(-\d+)?_", "", n)
    n = n.replace("croc.", "").replace("croc_", "").replace("croc", "").strip("._")
    return {"placed": "Placed", "cts": "Post-CTS", "grt": "Global Route",
            "grt_repaired": "Global Route", "routed": "Routed",
            "final": "Final"}.get(n, n or os.path.basename(path))


def parse_power(text):
    row = re.compile(
        r"^\s*(Sequential|Combinational|Clock|Macro|Pad|Total)\s+"
        + NUM + r"\s+" + NUM + r"\s+" + NUM + r"\s+" + NUM, re.MULTILINE)
    out = {}
    for m in row.finditer(text):
        out[m.group(1)] = {"internal": float(m.group(2)),
                           "switching": float(m.group(3)),
                           "leakage": float(m.group(4)),
                           "total": float(m.group(5))}
    return out


def parse_area(text):
    out = {}
    m = re.search(r"Total Area:\s+" + NUM, text)
    if m:
        out["total_area"] = float(m.group(1))
    m = re.search(r"Core Utilization:\s+" + NUM, text)
    if m:
        out["core_util"] = float(m.group(1)) * 100
    m = re.search(r"<top>\s+" + NUM + r"\s+" + NUM + r"\s+" + NUM
                  + r"\s+" + NUM + r"\s+" + NUM, text)
    if m:
        out["total_area"] = float(m.group(1))
        out["Std cell"] = float(m.group(2))
        out["Macro"] = float(m.group(3))
        out["Fill"] = float(m.group(4))
        out["Pad"] = float(m.group(5))
    m = re.search(r"Design area\s+" + NUM + r"\s*u\^?2\s+" + NUM + r"\s*%", text)
    if m:
        out["total_area"] = float(m.group(1))
        out["core_util"] = float(m.group(2))
    return out


def collect(files):
    stages = {}
    for path in files:
        with open(path) as f:
            text = f.read()
        s = stages.setdefault(stage_label(path), {"power": {}, "area": {}})
        s["power"].update(parse_power(text))
        s["area"].update(parse_area(text))
    return stages


def _save(fig, outdir, name):
    for ext in ("png", "pdf"):
        fig.savefig(os.path.join(outdir, f"{name}.{ext}"), dpi=200,
                    bbox_inches="tight", facecolor="white")
    print(f"  wrote plots/{name}.png and plots/{name}.pdf")
    plt.close(fig)


def _bar_value_labels(ax, bars, fmt, pad_frac=0.02):
    ymax = max((b.get_height() for b in bars), default=0)
    for b in bars:
        h = b.get_height()
        ax.text(b.get_x() + b.get_width() / 2, h + ymax * pad_frac,
                fmt(h), ha="center", va="bottom", fontsize=10.5, weight="bold")


def plot_power_by_category(stages, outdir):
    """One column per power category, for the most-final stage."""
    cand = [(l, s) for l, s in stages.items()
            if any(c in s["power"] for c in POWER_CATS)]
    if not cand:
        return
    label, s = cand[-1]
    cats = [c for c in POWER_CATS if c in s["power"]]
    vals = [s["power"][c]["total"] * 1e3 for c in cats]
    total = s["power"].get("Total", {}).get("total", sum(v / 1e3 for v in vals)) * 1e3

    fig, ax = plt.subplots(figsize=(7.2, 4.6))
    bars = ax.bar(cats, vals, color=[POWER_PALETTE[c] for c in cats],
                  width=0.66, edgecolor="white", linewidth=1.2, zorder=3)
    ax.set_ylabel("Power [mW]")
    ax.set_title(f"Power by category  ({label})", pad=14)
    ax.set_ylim(0, max(vals) * 1.18)
    ax.spines[["top", "right"]].set_visible(False)
    ax.yaxis.grid(True, linestyle="--", alpha=0.45, zorder=0)
    ax.set_axisbelow(True)
    _bar_value_labels(
        ax, bars,
        lambda h: f"{h:.1f} mW\n{h/total*100:.1f}%" if total else f"{h:.1f} mW",
        pad_frac=0.015)
    # No legend needed: the x-axis already names every column.
    fig.tight_layout()
    _save(fig, outdir, "power_by_category")


def plot_total_power(stages, outdir):
    labels = [l for l, s in stages.items() if "Total" in s["power"]]
    if len(labels) < 2:
        return  # before/after only meaningful with multiple stages
    vals = [stages[l]["power"]["Total"]["total"] * 1e3 for l in labels]
    fig, ax = plt.subplots(figsize=(6, 4.4))
    bars = ax.bar(labels, vals, color=SLATE, width=0.6,
                  edgecolor="white", linewidth=1.2, zorder=3)
    ax.set_ylabel("Total power [mW]")
    ax.set_title("Total power across flow stages", pad=14)
    ax.set_ylim(0, max(vals) * 1.18)
    ax.spines[["top", "right"]].set_visible(False)
    ax.yaxis.grid(True, linestyle="--", alpha=0.45, zorder=0)
    ax.set_axisbelow(True)
    _bar_value_labels(ax, bars, lambda h: f"{h:.1f}")
    plt.xticks(rotation=12, ha="right")
    fig.tight_layout()
    _save(fig, outdir, "power_total")


def plot_power_components(stages, outdir):
    labels = [l for l, s in stages.items() if "Total" in s["power"]]
    if not labels:
        return
    comps = [("Internal", "internal", TEAL),
             ("Switching", "switching", GOLD),
             ("Leakage", "leakage", TERRA)]
    fig, ax = plt.subplots(figsize=(6.4, 4.4))
    bottoms = [0.0] * len(labels)
    for name, key, color in comps:
        vals = [stages[l]["power"]["Total"][key] * 1e3 for l in labels]
        ax.bar(labels, vals, bottom=bottoms, label=name, color=color,
               width=0.55, edgecolor="white", linewidth=1.0, zorder=3)
        bottoms = [b + v for b, v in zip(bottoms, vals)]
    ax.set_ylabel("Power [mW]")
    ax.set_title("Internal / switching / leakage", pad=14)
    ax.spines[["top", "right"]].set_visible(False)
    ax.yaxis.grid(True, linestyle="--", alpha=0.45, zorder=0)
    ax.set_axisbelow(True)
    ax.legend(frameon=False, fontsize=10, loc="center left",
              bbox_to_anchor=(1.02, 0.5))
    plt.xticks(rotation=12, ha="right")
    fig.tight_layout()
    _save(fig, outdir, "power_components")


def plot_area_composition(stages, outdir):
    cand = [(l, s) for l, s in stages.items()
            if all(k in s["area"] for k in AREA_PALETTE)]
    if not cand:
        return
    label, s = cand[-1]
    parts = ["Pad", "Std cell", "Macro", "Fill"]
    vals = [s["area"][p] for p in parts]
    total = sum(vals)
    logic_kge = s["area"]["Std cell"] / (AREA_PER_GE * 1e3)

    fig, ax = plt.subplots(figsize=(7.4, 6.2))
    wedges, _ = ax.pie(
        vals, startangle=90, counterclock=False,
        colors=[AREA_PALETTE[p] for p in parts],
        wedgeprops=dict(width=0.42, edgecolor="white", linewidth=2.5))

    # Name + percentage together, placed outside with leader lines.
    kw = dict(arrowprops=dict(arrowstyle="-", color="#9a9a9a", lw=1),
              zorder=0, va="center", fontsize=12.5)
    for i, w in enumerate(wedges):
        ang = (w.theta2 - w.theta1) / 2 + w.theta1
        x, y = np.cos(np.deg2rad(ang)), np.sin(np.deg2rad(ang))
        ha = "right" if x < 0 else "left"
        kw["arrowprops"]["connectionstyle"] = f"angle,angleA=0,angleB={ang}"
        ax.annotate(f"{parts[i]}\n{vals[i] / total * 100:.1f}%",
                    xy=(x * 0.95, y * 0.95),
                    xytext=(1.28 * np.sign(x), 1.18 * y),
                    ha=ha, **kw)

    ax.text(0, 0.08, f"{total / 1e6:.2f} mm²", ha="center", va="center",
            fontsize=20, weight="bold", color="#2a2a2a")
    ax.text(0, -0.16, f"logic ≈ {logic_kge:.0f} kGE", ha="center", va="center",
            fontsize=12, color="#6a6a6a")
    ax.set_title(f"Die area composition  ({label})", pad=22)
    fig.tight_layout()
    _save(fig, outdir, "area_composition")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("files", nargs="+")
    ap.add_argument("-o", "--outdir", default="plots")
    args = ap.parse_args()
    os.makedirs(args.outdir, exist_ok=True)
    stages = collect(args.files)

    print("Stages found:")
    for l, s in stages.items():
        tot = s["power"].get("Total", {}).get("total")
        tot = f"{tot * 1e3:.1f} mW" if tot else "no power"
        ar = s["area"].get("total_area")
        ar = f"{ar / 1e6:.2f} mm^2" if ar else "no area"
        print(f"  - {l}: {tot}, {ar}")

    plot_power_by_category(stages, args.outdir)
    plot_total_power(stages, args.outdir)
    plot_power_components(stages, args.outdir)
    plot_area_composition(stages, args.outdir)


if __name__ == "__main__":
    main()