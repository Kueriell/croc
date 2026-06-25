###########################################################################
#  Title      : Setings for special cell
#  Project    : ihp130g2 dz flow
##########################################################################
#  File       : special_cell_setting.tcl
#  Author     : Beat Muheim  <muheim@ee.ethz.ch>
#  Company    : Microelectronics Design Center (DZ), ETH Zurich
##########################################################################
#  Copyright (c) 2016 Microelectronics Design Center, ETH Zurich
##########################################################################
# V1.2 <muheim@ee.ethz.ch>  Mon Jun 19 10:44:22 CEST 2023
#  - string match for the fill setings
# V1.1 Zerun  Tue  7 Feb 15:15:41 CET 2023
#  - copied from tsmc28 and adapted to ihp
# V1 - Zerun, Fri 24 Jun 11:11:28 CEST 2022
#  - adapte the cells to tsmc28
#  - reorder the scripts
# v0.3 - <muheim@ee.ethz.ch> - Mon Aug  3 11:53:41 CEST 2020
#  - the fill list will be 2 list first with caps and scened without,
#    this will guarantee that addFill will first do the filler with caps.
# v0.2 - <muheim@ee.ethz.ch> - Mon May 22 07:53:20 CEST 2017
#  - also fill the well tap list for the check
# v0.1 - <muheim@ee.ethz.ch> - Wed Apr 19 09:17:31 CEST 2017
#  - this is replaseng the setings in "physical_cell-insert.tcl",
#    "tiehilo.tcl" and "fillcore-insert.tcl"
#  - copy from gf22 adapting it to the arm library
##########################################################################

## No ENDCAP and TAPCELL(included in the std) needed in this technology
# #########
# # ENDCAP 
# #########
# # To report endcap cells (specified as 'CLASS ENDCAP' in LEF) :
# #dbGet [dbGet -p head.libCells.subclass coreEndCapPre].name
# 
# set endCap(left) ""
# set endCap(right) ""
# foreach cell [dbGet -p head.libCells.name *] {
#   if [string match "BOUNDARY_LEFT*"  [dbGet ${cell}.name]] {
#     set endCap(left) [dbGet ${cell}.name]
# } elseif [string match "BOUNDARY_RIGHT*"  [dbGet ${cell}.name]] {
#     set endCap(right) [dbGet ${cell}.name]
#   }
# }
# setEndCapMode -reset
# setEndCapMode \
#   -rightEdge            $endCap(left) \
#   -leftEdge             $endCap(right)
# #   # leftEdge means 'cell that has n-well cap on its left'
# #   # rightEdge means 'cell that has n-well cap on its right'
# 
# 
# #########
# # TAP CELL 
# #########
# # To get names of well tap cells (specified as 'CLASS CORE WELLTAP ' in LEF)
# #dbGet [dbGet -p head.libCells.subClass coreWellTap].name
# 
# set wellTap(maxdis) 25 ;# 25um is the drc requirement for the distance of farest cell to tapcell
# set wellTap(name) ""
# foreach cell [dbGet -p head.libCells.name *] {
#   if [string match "TAPCELL*"  [dbGet ${cell}.name]] { set wellTap(name) [dbGet ${cell}.name]}
# }
# 
# set_well_tap_mode -reset
# set_well_tap_mode -cell $wellTap(name) -rule $wellTap(maxdis)
# 
# ### if using -checkerBoard when add tap cell, the interval distance we can give 100, 
# # to avoid some corner cases drc (tap cell shift at end of the row), give 96 for preventing drc
# # addWellTap -cellInterval [expr $wellTap(maxdis) *4 ] -checkerBoard
# 
#

#########
# TIE CELL 
#########
# to get names of tie high / tie low cells (specified as 'CLASS CORE TIEHIGH' or 'CLASS CORE TIELOW' in LEF), use
#dbGet [dbGet -p head.libCells.subClass coreTieHigh].name
#dbGet [dbGet -p head.libCells.subClass coreTieLow].name

set tieCell(high) ""
set tieCell(low) ""
foreach cell [dbGet -p head.libCells.name *] {
  if [string match "LOGIC1*"  [dbGet ${cell}.name]] { set tieCell(high) [dbGet ${cell}.name]}
  if [string match "LOGIC0*"  [dbGet ${cell}.name]] { set tieCell(low)  [dbGet ${cell}.name]}
  if [string match "sg13g2_tiehi*"  [dbGet ${cell}.name]] { set tieCell(high) [dbGet ${cell}.name]}
  if [string match "sg13g2_tielo*"  [dbGet ${cell}.name]] { set tieCell(low)  [dbGet ${cell}.name]}
}
set tieCell(high:low) [list $tieCell(high) $tieCell(low)]


if [llength $tieCell(high:low) ] {
  # set tiehilo mode and insert the new cells
  setTieHiLoMode -reset
  setTieHiLoMode -maxFanout 12 -maxDistance 250 -createHierPort true \
                 -cell $tieCell(high:low)
  # -createHierPort true - try
} else {
  puts "ERROR: find no Tie Cell!"
}


#########
# FILLER CELL 
#########
# to get names of filler cells (specified as 'CLASS CORE SPACER' in LEF), use
#dbGet [dbGet -p head.libCells.subClass coreSpacer].name


set fillerCellList(empty)  ""
set fillerCellList(decoup) ""
foreach cell [dbGet -p head.libCells.name *] {
  if [string match "FEED*"     [dbGet ${cell}.name]]  { lappend fillerCellList(empty)    [dbGet ${cell}.name] }
  if [string match "DECAP3JI"  [dbGet ${cell}.name]]  { lappend fillerCellList(decoup)   [dbGet ${cell}.name] }
  if [string match "sg13g2_fill_*"  [dbGet ${cell}.name]]  { lappend fillerCellList(empty)    [dbGet ${cell}.name] }
  if [string match "sg13g2_decap_*" [dbGet ${cell}.name]]  { lappend fillerCellList(decoup)   [dbGet ${cell}.name] }
}
set fillerCellList(decoup:empty) [list $fillerCellList(decoup) $fillerCellList(empty)]


# set filler
if [llength $fillerCellList(decoup:empty) ] {
  setFillerMode -reset
  setFillerMode -core $fillerCellList(decoup:empty)
} else {
  puts "ERROR: find no Filler Cell!"
  puts ""
}

