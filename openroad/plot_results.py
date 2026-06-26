#!/usr/bin/env python3
# Plot power (before/after across flow stages) and area for the Croc chip,
# straight from standard OpenROAD report output (croc reports.tcl format).
#
# No dependency on the ex13 helper scripts. Just point it at the .rpt files.
#
# Usage:
#   python3 plot_results.py FILE [FILE ...]
#
# Each FILE may contain a report_power block, a "Design Area Summary", a
# hierarchical area table, or any combination. The stage label is derived from
# the filename, so files belonging to the same stage are merged.
#
# Example (before/after CTS):
#   python3 plot_results.py reports/02_croc.placed.rpt reports/04_croc.routed.rpt
#
# Outputs (PNG + PDF) into ./plots:
#   power_total.*        total power per stage   (before/after headline)
#   power_breakdown.*    stacked power by category per stage
#   power_components.*   internal / switching / leakage per stage
#   area_composition.*   die area split: std cell / macro / pad / fill

import argparse
import os
import re
import matplotlib.pyplot as plt

AREA_PER_GE = 7.25  # IHP sg13g2: 1 GE = 7.25 um^2

CAT_COLORS = {
    "Sequential": "#1f6fb2", "Combinational": "#e08a1e",
    "Clock": "#c0392b", "Macro": "#6c4f9c", "Pad": "#7f8c8d",
}
POWER_CATS = list(CAT_COLORS)
COMP_COLORS = {"Std cell": "#1f6fb2", "Macro": "#6c4f9c",
               "Pad": "#7f8c8d", "Fill": "#bdc3c7"}
SPLIT_COLORS = {"Internal": "#2e7d32", "Switching": "#e08a1e", "Leakage": "#c0392b"}

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
    """group -> {'internal','switching','leakage','total'} in Watts."""
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
    """Return dict with total_area, core_util, and composition (um^2)."""
    out = {}
    m = re.search(r"Total Area:\s+" + NUM, text)
    if m:
        out["total_area"] = float(m.group(1))
    m = re.search(r"Core Utilization:\s+" + NUM, text)
    if m:
        out["core_util"] = float(m.group(1)) * 100
    # Composition from the <top> row: Total StdCell Macro Cover Pad
    m = re.search(r"<top>\s+" + NUM + r"\s+" + NUM + r"\s+" + NUM
                  + r"\s+" + NUM + r"\s+" + NUM, text)
    if m:
        out["total_area"] = float(m.group(1))
        out["Std cell"] = float(m.group(2))
        out["Macro"] = float(m.group(3))
        out["Fill"] = float(m.group(4))
        out["Pad"] = float(m.group(5))
    # Fallback: old "Design area X u^2 Y% utilization" format
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
        s = stages.setdefault(stage_label(path),
                              {"power": {}, "area": {}})
        s["power"].update(parse_power(text))
        s["area"].update(parse_area(text))
    return stages


def _save(fig, outdir, name):
    for ext in ("png", "pdf"):
        fig.savefig(os.path.join(outdir, f"{name}.{ext}"), dpi=200, bbox_inches="tight")
    print(f"  wrote plots/{name}.png and plots/{name}.pdf")
    plt.close(fig)


def plot_total_power(stages, outdir):
    labels = [l for l, s in stages.items() if "Total" in s["power"]]
    if not labels:
        return
    vals = [stages[l]["power"]["Total"]["total"] * 1e3 for l in labels]
    fig, ax = plt.subplots(figsize=(6, 4))
    bars = ax.bar(labels, vals, color="#1f6fb2")
    ax.set_ylabel("Total power [mW]")
    ax.set_title("Total power across flow stages", fontweight="bold")
    ax.spines[["top", "right"]].set_visible(False)
    ax.grid(axis="y", linestyle="--", alpha=0.5)
    for b, v in zip(bars, vals):
        ax.text(b.get_x() + b.get_width()/2, v, f"{v:.1f}", ha="center", va="bottom", fontsize=9)
    plt.xticks(rotation=15, ha="right")
    fig.tight_layout(); _save(fig, outdir, "power_total")


def plot_power_breakdown(stages, outdir):
    labels = [l for l, s in stages.items()
              if any(c in s["power"] for c in POWER_CATS)]
    if not labels:
        return
    fig, ax = plt.subplots(figsize=(6.5, 4))
    bottoms = [0.0]*len(labels)
    for cat in POWER_CATS:
        vals = [stages[l]["power"].get(cat, {}).get("total", 0.0)*1e3 for l in labels]
        if not any(vals):
            continue
        ax.bar(labels, vals, bottom=bottoms, label=cat, color=CAT_COLORS[cat])
        bottoms = [b+v for b, v in zip(bottoms, vals)]
    ax.set_ylabel("Power [mW]")
    ax.set_title("Power breakdown by category", fontweight="bold")
    ax.spines[["top", "right"]].set_visible(False)
    ax.grid(axis="y", linestyle="--", alpha=0.5)
    ax.legend(frameon=False, fontsize=9)
    plt.xticks(rotation=15, ha="right")
    fig.tight_layout(); _save(fig, outdir, "power_breakdown")


def plot_power_components(stages, outdir):
    labels = [l for l, s in stages.items() if "Total" in s["power"]]
    if not labels:
        return
    fig, ax = plt.subplots(figsize=(6, 4))
    bottoms = [0.0]*len(labels)
    for comp, key in (("Internal", "internal"), ("Switching", "switching"), ("Leakage", "leakage")):
        vals = [stages[l]["power"]["Total"][key]*1e3 for l in labels]
        ax.bar(labels, vals, bottom=bottoms, label=comp, color=SPLIT_COLORS[comp])
        bottoms = [b+v for b, v in zip(bottoms, vals)]
    ax.set_ylabel("Power [mW]")
    ax.set_title("Internal vs switching vs leakage", fontweight="bold")
    ax.spines[["top", "right"]].set_visible(False)
    ax.grid(axis="y", linestyle="--", alpha=0.5)
    ax.legend(frameon=False, fontsize=9)
    plt.xticks(rotation=15, ha="right")
    fig.tight_layout(); _save(fig, outdir, "power_components")


def plot_area_composition(stages, outdir):
    # Use the most-final stage that has composition data.
    cand = [(l, s) for l, s in stages.items()
            if all(k in s["area"] for k in ("Std cell", "Macro", "Pad", "Fill"))]
    if not cand:
        return
    label, s = cand[-1]
    parts = ["Pad", "Std cell", "Macro", "Fill"]
    vals = [s["area"][p] for p in parts]
    total = sum(vals)
    fig, ax = plt.subplots(figsize=(6, 6))
    wedges, _txt, _auto = ax.pie(
        vals, labels=parts, autopct=lambda p: f"{p:.1f}%",
        colors=[COMP_COLORS[p] for p in parts],
        startangle=90, wedgeprops=dict(width=0.45, edgecolor="w"))
    ax.set_title(f"Die area composition ({label})\n"
                 f"total {total/1e6:.2f} mm$^2$", fontweight="bold")
    fig.tight_layout(); _save(fig, outdir, "area_composition")


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
        tot = f"{tot*1e3:.1f} mW" if tot else "no power"
        ar = s["area"].get("total_area")
        ar = f"{ar/1e6:.2f} mm^2" if ar else "no area"
        print(f"  - {l}: {tot}, {ar}")

    plot_total_power(stages, args.outdir)
    plot_power_breakdown(stages, args.outdir)
    plot_power_components(stages, args.outdir)
    plot_area_composition(stages, args.outdir)


if __name__ == "__main__":
    main()
