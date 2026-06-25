###########################################################################
#  Title      : Export all relevant design data.
#  Project    : ihp130sg2 dz flow
##########################################################################
#  File       : exportall.tcl
#  Author     : Beat Muheim  <muheim@ee.ethz.ch>
#  Company    : Microelectronics Design Center (DZ), ETH Zurich
##########################################################################
#  Description :
#  Inputs      : $DESIGNNAME
#  Outputs     : sdc, netlist, gds
#  Rhesuses    :
##########################################################################
#  Copyright (c) 2016 Microelectronics Design Center, ETH Zurich
##########################################################################
# v0.3 - Zerun Wed 20 Dec 14:42:26 CET 2023
#  - remove IO filler and corner from LVS exclude, they have resistor now..
# v0.2 - Beat - Fri Jun 23 15:06:31 CEST 2023
#  - adapting the excludeCell and excludeCellLVS
#  - changing sdf write options to writ it out withe  RECREM 
#    and not withe HOLD and RECOVERY
# v0.1 - Zerun Tue  7 Feb 15:38:12 CET 2023
#  - copied from tsmc65
#  - update_names of netlist from / to _
##########################################################################


# is the design name specified ???
if { [ info exists DESIGNNAME ] } {
   set NAME "$DESIGNNAME"

} else {
    set NAME "final"

}

set excludeCellFiller(list) {}
set excludeCellFillerDecap(list) {}
set excludeCellIOfiller(list) {}
set excludeCellIOcorner(list) {}
foreach cell [dbGet -p head.libCells.name *] {
  if [string match "FEED*"          [dbGet ${cell}.name]] { lappend excludeCellFiller(list) [dbGet ${cell}.name]}
  if [string match "DECAP3JI"       [dbGet ${cell}.name]] { lappend excludeCellFillerDecap(list) [dbGet ${cell}.name]}
  if [string match "sg13g2_fill_*"  [dbGet ${cell}.name]] { lappend excludeCellFiller(list) [dbGet ${cell}.name]}
  if [string match "sg13g2_decap_*" [dbGet ${cell}.name]] { lappend excludeCellFillerDecap(list) [dbGet ${cell}.name]}
  if [string match "filler*"        [dbGet ${cell}.name]] { lappend excludeCellIOfiller(list) [dbGet ${cell}.name]}
  if [string match "corner*"        [dbGet ${cell}.name]] { lappend excludeCellIOcorner(list) [dbGet ${cell}.name]}
}

set excludeCellLVS(list) [list {*}$excludeCellFiller(list) \
                      ]
#                               {*}$excludeCellIOfiller(list) \
#                               {*}$excludeCellIOcorner(list) \

set excludeCell(list) [list {*}$excludeCellFiller(list) \
                            {*}$excludeCellFillerDecap(list) \
                            {*}$excludeCellIOfiller(list) \
                            {*}$excludeCellIOcorner(list) \
                      ]

# RC will be extracted, if not ready don, using the
# Integrated QRC (IQRC) engine.
#setExtractRCMode -effortLevel high


# global variable for written the sdf checks checks correctly with a tripl
set_global timing_recompute_sdf_in_setuphold_mode true
# Write out SDF, take the first analysis_views from the hold and the setup list
#write_sdf -precision 4 -min_period_edges posedge -recompute_delay_calc -remashold -nonegchecks \
write_sdf -precision 4 -min_period_edges posedge -recompute_delay_calc -nonegchecks \
          -min_view [lindex [all_hold_analysis_views]  0] \
          -typ_view [lindex [all_setup_analysis_views] 0] \
          -max_view [lindex [all_setup_analysis_views] 0] \
          out/${NAME}.sdf.gz

# replace / with _ to avoid verilog2spice warnings
update_names -restricted {/} -replace_str "_"

# This netlist do not contains the filler cells, physical cells.
# This can be used for simulation (normal/with power connections)
saveNetlist out/${NAME}.v -excludeLeafCell -excludeCellInst $excludeCell(list)

# This netlist contains all filler cells and everything.
# This have to be used for LVS
saveNetlist out/${NAME}_lvs.v -excludeLeafCell -exportTopPGNets -phys -excludeCellInst $excludeCellLVS(list)
#saveNetlist out/${NAME}_lvs.v -excludeLeafCell -phys -excludeCellInst $excludeCellLVS(list)

# layout
setStreamOutMode -SEvianames ON -specifyViaName %t_VIA -virtualConnection false

# you can set an alternative top name with -structureName
# streamOut out/${NAME}.gds.gz -structureName sem01w0
#streamOut out/${NAME}.gds.gz  -mapFile ../technology/tech.map -outputMacros -units 1000 -merge [list {*}[glob -nocomplain ../technology/gds/*.{gds,gds2,gds.gz,gds2.gz}]]
streamOut out/${NAME}.gds.gz  -mapFile ../technology/SG13G2_streamout.map -outputMacros -units 1000 \
                              -merge {  ../technology/gds/sg13cmos5l_stdcell.gds \
  ../technology/gds/ez130_8t.gds \
  ../technology/gds/sg13cmos5l_io.gds \
  ../technology/gds/bondpad5l_70x70.gds \
  ../technology/gds/RM_IHPSG13_1P_512x32_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_512x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_1024x32_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_1024x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_2048x64_c2_bm_bist.gds \
 }
                                       

