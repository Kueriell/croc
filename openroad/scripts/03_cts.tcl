# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Stage 03: Clock Tree Synthesis (CTS) - Finalisiert
###############################################################################

source scripts/startup.tcl

load_checkpoint 02_${proj_name}.placed

setDefaultParasitics
set_dont_use $dont_use_cells

utl::report "###############################################################################"
utl::report "# Stage 03: CLOCK TREE SYNTHESIS (Final)"
utl::report "###############################################################################"

set clock_nets [get_nets -of_objects [get_pins -of_objects "*_reg" -filter "name == CLK"]]
unset_dont_touch $clock_nets

set_placement_padding -global -left 1 -right 1

utl::report "Repair clock inverters"
repair_clock_inverters

utl::report "Clock Tree Synthesis"
# Wir behalten die Cluster-Werte bei, aber fügen DRV-Repair direkt nach der Synthese ein
clock_tree_synthesis -buf_list $ctsBuf -root_buf $ctsBufRoot \
                     -sink_clustering_enable \
                     -sink_clustering_size 15 \
                     -sink_clustering_max_diameter 30 \
                     -balance_levels \
                     -repair_clock_nets


utl::report "DRV Repair (Slew & Cap focus)"
repair_design -slew_margin 0.1 -cap_margin 0.1
repair_design -max_wire_length 550 -verbose


utl::report "Legalize after CTS"
detailed_placement

estimate_parasitics -placement
set_propagated_clock [all_clocks]

utl::report "Repair setup and hold"
repair_timing -setup -max_buffer_percent 10 -verbose
repair_timing -hold -verbose

utl::report "Final legalization"
detailed_placement
check_placement -verbose

estimate_parasitics -placement

report_cts -out_file ${report_dir}/03_${proj_name}.cts.rpt
report_metrics "03_${proj_name}.cts"
save_checkpoint 03_${proj_name}.cts
report_image "03_${proj_name}.cts" true false true

utl::report "###############################################################################"
utl::report "# Stage 03 complete. Check reports/ for detailed DRV analysis."
utl::report "###############################################################################"