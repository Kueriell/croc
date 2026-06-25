##########################################################################
#  Title       : finel check of the designe
#  Project     : tsmc 180 dz flow
##########################################################################
#  File        : checkdesign.tcl
#  Author      : Beat Muheim  <muheim@ee.ethz.ch>
#  Company     : Microelectronics Design Center (DZ), ETH Zurich
##########################################################################
#  Description : Ter will be do the finel check of the designe and 
#                some reports.
#  Inputs      : ($DESIGNNAME)
#                ($wellTap) 
#  Outputs     : reports
#  Rhesuses    : 
##########################################################################
#  Copyright (c) 2016 Microelectronics Design Center, ETH Zurich
##########################################################################
# v0.4 - <muheim@ee.ethz.ch> - Tue Jan 30 09:32:18 CET 2024
#  - add the DESIGNNAME to the outfile of summaryReport
# v0.3 - <muheim@ee.ethz.ch> - Tue Mar  3 14:48:22 CET 2020
#  - add deselectAll befor summaryReport
# v0.2 - <muheim@ee.ethz.ch> - Fri Jul  7 11:32:34 CEST 2017
#  - well tap as a list
#  - replace verifyGeometry by verify_drc
#  - add to the wellTap(list) generate the arm and the tsmc lib cels
# v0.1 - <muheim@ee.ethz.ch> - Tue Aug 30 11:14:11 CEST 2016
#  - copy from tsmc28 v0.1 
##########################################################################

# is the design name specified ???
if { [ info exists DESIGNNAME ] } {
   set NAME "$DESIGNNAME"

} else {
    set NAME "final"

}

# create the verify under reports when not existing
if {![file exists reports/verify]} {
  file mkdir reports/verify
}

## when the wellTapList is not set we create it
#if {![info exists wellTap(list)]} {
#  set wellTap(list) {}
#  foreach cell [dbGet -p head.libCells.name *] {
#    # arm lib
#    if [string match "TAPCELL*" [dbGet ${cell}.name]] { set wellTap(name) [dbGet ${cell}.name]}
#    # tsmc lib
#    if [string match "FILLTIE*"  [dbGet ${cell}.name]] { lappend wellTap(list) [dbGet ${cell}.name]}
#    if [string match "FILLBIAS*" [dbGet ${cell}.name]] { lappend wellTap(list) [dbGet ${cell}.name]}
#    if [string match "ENDCAP*"   [dbGet ${cell}.name]] { lappend wellTap(list) [dbGet ${cell}.name]}
#  }
#  set wellTap(maxdis) 20
#}

## verify
puts "Porform Connectivity, Geometry, ProcessAntenna and WellTap Checks"
verifyConnectivity -type all -geomConnect -report reports/verify/${NAME}.connect.rpt
#verifyGeometry -antenna -report reports/verify/${NAME}_geom.rpt
verify_drc -report reports/verify/${NAME}.drc.rpt
verifyProcessAntenna -leffile reports/verify/${NAME}_antenna.lef -reportfile reports/verify/${NAME}_antenna.rpt 
#verifyWellTap -cell $wellTap(list) -rule $wellTap(maxdis) -report  reports/verify/${NAME}_wellTap.rpt 


## reports
puts ""
puts "Writing summary report"
deselectAll
summaryReport -noHtml -outfile reports/verify/${NAME}_summaryReport.rpt

puts ""
puts "Checking nets that exceed the default delay limit"
puts "There should be no nets in the report below"
report_net -min_fanout [lindex $rdaUseDefaultDelayLimit 0]

