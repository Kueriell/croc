# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Optimized for AES-128 / SHAKE-256 Stability & Max Flattening

if {[info script] ne ""} {
    cd "[file dirname [info script]]/../"
}

# Konfigurationsvariablen laden
source scripts/yosys_common.tcl

# ABC Logik-Optimierungsskript laden
set abc_script [processAbcScript scripts/abc-opt.script]

# Liberty-Dateien einlesen
source scripts/init_tech.tcl

# SystemVerilog via Slang einlesen
yosys plugin -i slang.so
yosys read_slang --top $top_design -f $sv_flist \
        --compat-mode --keep-hierarchy \
        --allow-use-before-declare --ignore-unknown-modules

# -----------------------------------------------------------------------------
# Schutz-Attribute setzen
# -----------------------------------------------------------------------------

# CRITICAL: Hierarchie NUR für CDC/Synchronizer schützen (Metastabilitäts-Schutz)
yosys setattr -set keep_hierarchy 1 "t:cdc_reset*$*"
yosys setattr -set keep_hierarchy 1 "t:cdc*phase_*$*"
yosys setattr -set keep_hierarchy 1 "t:cdc*_src*$*"
yosys setattr -set keep_hierarchy 1 "t:cdc*_dst*$*"
yosys setattr -set keep_hierarchy 1 "t:sync$*"

# Blackbox für SRAM-Makros erhalten
yosys blackbox "t:tc_sram_blackbox$*"

# dont_touch Attribute auf Netzen sichern und mappen
yosys attrmap -rename dont_touch keep
yosys attrmap -tocase keep -imap keep="true" keep=1
yosys attrmvcp -copy -attr keep

# -----------------------------------------------------------------------------
# Elaboration & Hierarchische Voroptimierung (Verhindert den Keccak/AES Crash!)
# -----------------------------------------------------------------------------
yosys hierarchy -top $top_design
yosys proc

# Vor-Optimierung bei intakter Hierarchie löst Array-Indizes & Init-Konflikte auf
yosys opt_expr
yosys opt_clean
yosys check
yosys wreduce 
yosys peepopt
yosys opt_clean

# -----------------------------------------------------------------------------
# FLATTEN (Jetzt sicher ausführbar für maximale Krypto-Optimierung)
# -----------------------------------------------------------------------------
yosys flatten
yosys opt_clean

yosys tee -q -o "${rep_dir}/${proj_name}_elaborated.rpt" stat

# -----------------------------------------------------------------------------
# Coarse Optimization Pipeline (Auf der flachen Netzliste)
# -----------------------------------------------------------------------------
yosys opt -noff
yosys fsm
yosys opt_clean
yosys opt -full
yosys booth         ;# Extrem wichtig für Krypto-Arithmetik (AES/Keccak)
yosys share
yosys opt
yosys memory -nomap
yosys memory_map
yosys opt -fast

yosys opt_dff -sat -nodffe -nosdff
yosys clean -purge

yosys techmap
yosys opt -fast
yosys clean -purge

# -----------------------------------------------------------------------------
# Vorbereitung & Namensbereinigung für OpenROAD
# -----------------------------------------------------------------------------
yosys tee -q -o "${rep_dir}/${proj_name}_generic.rpt" stat -tech cmos

# Interne Netze aufspalten
yosys splitnets -format __v

# DFFs anhand des getriebenen Signals sauber benennen (Wichtig für OpenROAD CTS)
yosys rename -wire -suffix _reg t:*DFF*
yosys autoname t:*DFF* %n
yosys clean -purge

# Register-Reports schreiben
yosys select -write ${rep_dir}/${proj_name}_registers.rpt t:*DFF*
yosys tee -q -o ${rep_dir}/${proj_name}_instances.rpt  select -list "t:RM_IHPSG13_*"
yosys tee -q -a ${rep_dir}/${proj_name}_instances.rpt  select -list "t:tc_sram_blackbox$*"

# -----------------------------------------------------------------------------
# Technologie-Mapping
# -----------------------------------------------------------------------------

# 1. Flip-Flops mappen
yosys dfflibmap {*}$tech_cells_args

# 2. Kombinatorische Logik-Clouds via ABC optimieren (Target: 10ns = 10000ps)
set period_ps 10000
set abc_comb_script [processAbcScript scripts/abc-opt.script]
yosys abc {*}$tech_cells_args -D $period_ps -script $abc_comb_script -constr src/abc.constr {*}$dont_use_args -showtmp

yosys clean -purge

# -----------------------------------------------------------------------------
# Übergabe-Vorbereitung an OpenROAD Physical Design
# -----------------------------------------------------------------------------
yosys write_verilog -norename -noexpr -attr2comment ${out_dir}/netlist_debug.v

yosys splitnets -ports -format __v
yosys setundef -zero
yosys clean -purge

# Konstanten an Tie-Hi / Tie-Lo Zellen binden
yosys hilomap -singleton -hicell {*}$tech_cell_tiehi -locell {*}$tech_cell_tielo

# Finale Synthese-Reports
yosys tee -q -o "${rep_dir}/${proj_name}_synth.rpt" check
yosys tee -q -o "${rep_dir}/${proj_name}_area.rpt" stat -top $top_design {*}$liberty_args
yosys tee -q -o "${rep_dir}/${proj_name}_area_logic.rpt" stat -top $top_design {*}$tech_cells_args

# Finale Gate-Level-Netzliste für OpenROAD exportieren
yosys write_verilog -noattr -noexpr -nohex -nodec ${out_dir}/${proj_name}_yosys.v