# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Optimized for Flattened Netlists

utl::report "Dynamic macro and CDC cell collection (Flattening-safe)..."

##########################################################################
# Memory Banks (SRAMs) - Pure Tcl Filtering (STA & Flattening-Safe)
##########################################################################
# Wir holen alle SRAM-Cuts per breiter Wildcard, um OpenSTA-Parser-Fehler zu vermeiden
set all_sram_cells [get_cells -hierarchical *i_cut*]
set bank0_sram0_raw ""
set bank1_sram0_raw ""

# Exakter Substring-Match via Tcl (vollkommen unabhängig von OpenROAD-Wildcards)
foreach cell $all_sram_cells {
    set cell_name [get_name $cell]
    if {[string first {gen_sram_bank[0]} $cell_name] != -1} {
        set bank0_sram0_raw $cell_name
    }
    if {[string first {gen_sram_bank[1]} $cell_name] != -1} {
        set bank1_sram0_raw $cell_name
    }
}

# KORREKTUR: Korrekte 3-Argument-Syntax für utl::error (Tool, ID, Nachricht)
if {$bank0_sram0_raw == "" || $bank1_sram0_raw == ""} {
    utl::error FLP 1 "CRITICAL: SRAM macros could not be found! Check flattening names."
}

# Korrekte, sequenzielle Maskierung beider Klammern für die Platzierung
set bank0_sram0 $bank0_sram0_raw
regsub -all {\[} $bank0_sram0 {\\[} bank0_sram0
regsub -all {\]} $bank0_sram0 {\\]} bank0_sram0

set bank1_sram0 $bank1_sram0_raw
regsub -all {\[} $bank1_sram0 {\\[} bank1_sram0
regsub -all {\]} $bank1_sram0 {\\]} bank1_sram0

utl::report "Found and escaped Bank 0 SRAM: $bank0_sram0"
utl::report "Found and escaped Bank 1 SRAM: $bank1_sram0"


##########################################################################
# JTAG Clock Domain Crossings (CDC)
##########################################################################
# Da wir in Yosys die CDC-Module mit 'keep_hierarchy' geschützt haben, 
# existieren sie als funktionale Blöcke. Ihre Pfade dorthin sind jedoch flach.
# Wir greifen die Instanznamen der CDCs direkt heraus:

set JTAG_REQ_CELL [get_cells -hierarchical *i_cdc_req*]
set JTAG_RSP_CELL [get_cells -hierarchical *i_cdc_resp*]

if {[llength $JTAG_REQ_CELL] == 0 || [llength $JTAG_RSP_CELL] == 0} {
    utl::error "CRITICAL: JTAG CDC cells not found! Ensure cdc keep_hierarchy rule in Yosys worked."
}

set JTAG_CDC_REQ [get_name [lindex $JTAG_REQ_CELL 0]]
set JTAG_CDC_RSP [get_name [lindex $JTAG_RSP_CELL 0]]

#-------------------------------------------------------------------------
# JTAG Request CDC Paths
#-------------------------------------------------------------------------
# Suchen der Netze und Zellen im Request-CDC-Block mittels Wildcards
set JTAG_ASYNC_REQ_START [get_fanin -to [get_nets -hierarchical *i_cdc_req*async_data*] -flat -startpoints_only -only_cells]
set JTAG_ASYNC_REQ_START [concat $JTAG_ASYNC_REQ_START [get_cells -hierarchical *i_cdc_req*async*_o*_reg]]

set JTAG_ASYNC_REQ_END [list]
set JTAG_ASYNC_REQ_CANDIDATES [get_fanout -from [get_nets -hierarchical *i_cdc_req*async*_data*] -flat -endpoints_only -only_cells]
foreach cell $JTAG_ASYNC_REQ_CANDIDATES {
    if {[string match "*i_cdc_req*" [get_name $cell]]} {
        lappend JTAG_ASYNC_REQ_END $cell
    }
}
# Pfade, die stabil über 4-Phase-Handshake laufen (Sicher gegen CDC-Violations)
lappend JTAG_ASYNC_REQ_END {*}[get_fanout -from [get_pins -hierarchical *i_cdc_req*i_cdc_reset_ctrlr_half_a*async_data*_reg/Q] -flat -endpoints_only -only_cells]

#-------------------------------------------------------------------------
# JTAG Response CDC Paths
#-------------------------------------------------------------------------
# Suchen der Netze und Zellen im Response-CDC-Block mittels Wildcards
set JTAG_ASYNC_RSP_START [get_fanin -to [get_nets -hierarchical *i_cdc_resp*async_data*] -flat -startpoints_only -only_cells]
set JTAG_ASYNC_RSP_START [concat $JTAG_ASYNC_RSP_START [get_cells -hierarchical *i_cdc_resp*async*_o*_reg]]

set JTAG_ASYNC_RSP_END [list]
set JTAG_ASYNC_RSP_CANDIDATES [get_fanout -from [get_nets -hierarchical *i_cdc_resp*async*_data*] -flat -endpoints_only -only_cells]
foreach cell $JTAG_ASYNC_RSP_CANDIDATES {
    if {[string match "*i_cdc_resp*" [get_name $cell]]} {
        lappend JTAG_ASYNC_RSP_END $cell
    }
}
lappend JTAG_ASYNC_RSP_END {*}[get_fanout -from [get_pins -hierarchical *i_cdc_resp*i_cdc_reset_ctrlr_half_a*async_data*_reg/Q] -flat -endpoints_only -only_cells]

utl::report "Successfully collected all macros and CDC components dynamically!"