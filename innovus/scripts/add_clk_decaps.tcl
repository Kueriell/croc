################################################################################
#  DISCLAIMER: The following code is provided for Cadence customers to use at  #
#   their own risk. The code may require modification to satisfy the           #
#   requirements of any user. The code and any modifications to the code may   #
#   not be compatible with current or future versions of Cadence products.     #
#   THE CODE IS PROVIDED "AS IS" AND WITH NO WARRANTIES, INCLUDING WITHOUT     #
#   LIMITATION ANY EXPRESS WARRANTIES OR IMPLIED WARRANTIES OF MERCHANTABILITY #
#   OR FITNESS FOR A PARTICULAR USE.                                           #
################################################################################
##
## Purpose     : To add decap cells next to CTS inserted bufs/invs or other specific cells. 

# DZ Tue  4 Jul 14:33:57 CEST 2023
# example of using before adding normal fillers:
# > source scripts/add_clk_decaps.tcl
# > add_clk_decap $fillerDecap; #add DCAP to clk tree
# > set flipflops [dbGet [dbGet top.insts.cell.name *DF* -p2].name]
# > add_decap_to_inst_list $fillerDecap $flipflops; #add DCAP to flipflop
# > ecoRoute -target




################################################################################
# proc add_clk_decap
################################################################################

proc add_clk_decap { decap_cell } {

  if {  [ dbGetCellByName $decap_cell ] == "0x0"  } { 
    Puts "\n\n*** Error : Cell $decap_cell does not exist in Library ***\n\n" 
    return
  }

  if { ! [ dbIsCellStdCell [ dbGetCellByName $decap_cell ] ] } { 
    Puts "\n\n*** Error : Cell $decap_cell is not of type STD CELL ***\n\n" 
    return
  }

  ### Fix registers and clock instances ###
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus fixed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus fixed
  }

  setEcoMode -refinePlace false -updateTiming false -honorFixedStatus true

  set dcap_width [ lindex [ lindex [ dbget [ dbGetCellByName $decap_cell ].size] 0 ] 0 ]

  set ctr 0
  deselectAll

  # Foreach clock buffer/inverter inserter a decap cell next to it:
  foreach clkbuf [get_ccopt_clock_tree_cells -node_types {buffer inverter}] {
 
    ### add decaps to Clock buffers/inverters ###
    foreach { x1 y1 x2 y2 } [ lindex [ dbget [dbget top.insts.name $clkbuf -p].box ] 0 ] {break}
    incr ctr
    Puts "\n\n$ctr : Adding DeCap cell $decap_cell near inst $clkbuf location \"$x1 $y1 $x2 $y2\"  ..."
    set clkbuf_orient [ dbget [ dbGetInstByName $clkbuf ].orient]
    if { [dbget top.insts.name ${clkbuf}_CLK_DECAP ] == "0x0" }  { 
      if { $clkbuf_orient == "MX" || $clkbuf_orient == "R180" } {
        addInst -physical -cell $decap_cell -inst ${clkbuf}_CLK_DECAP -loc [ expr $x1 - $dcap_width ] $y1
      } else {
        addInst -physical -cell $decap_cell -inst ${clkbuf}_CLK_DECAP -loc $x2 $y1
      }
      selectInst $clkbuf
    }
  }

  Puts "\n\nLegalizing Placement ...[exec date]"
  # Legalize placement giving priority to the decap cells:
  setInstancePlacementStatus -name *_CLK_DECAP -status fixed
  refinePlace

  # Legalize placement giving priority to the clock tree cells:
  setInstancePlacementStatus -name *_CLK_DECAP -status placed
  refinePlace

  # Legalize placement with clock cells placed to resolve any remaining violations:
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus placed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus placed
  }
  refinePlace

  # Fix clock cells and decap cells:
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus fixed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus fixed
  }
  setInstancePlacementStatus -name *_CLK_DECAP -status fixed

  setEcoMode -reset
  deselectAll
  checkPlace cp.rpt
}

################################################################################
# proc add_decap_to_inst_list
################################################################################

proc add_decap_to_inst_list {decap_cell inst_list} {

  if {  [ dbGetCellByName $decap_cell ] == "0x0"  } {
          Puts "\n\n*** Error : Cell $decap_cell does not exist in Library ***\n\n"
          return
  }
  
  if { ! [ dbIsCellStdCell [ dbGetCellByName $decap_cell ] ] } {
          Puts "\n\n*** Error : Cell $decap_cell is not of type STD CELL ***\n\n"
          return
  }
  
  ### Fix registers and clock instances ###
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus fixed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus fixed
  }
  
  setEcoMode -refinePlace false -honorFixedStatus true
  
  ### Get a list of clock bufs/invs
  set dcap_width [ lindex [ lindex [ dbget [ dbGetCellByName $decap_cell ].size] 0 ] 0 ]
  
  set ctr 0
  deselectAll
  
  foreach instance $inst_list {
    ### add decaps to Clock buffers/inverters ###
    if { [regexp {^\s*(\S+)} $instance xx clkbuf] } {
      foreach { x1 y1 x2 y2 } [ lindex [ dbget [dbget top.insts.name $clkbuf -p].box ] 0 ] {break}
  
       # set mid_x [ expr  $x1 - $dcap_width + (($x2 - ($x1 - $dcap_width)) /2.0) # ]
       incr ctr
       Puts "\n\n$ctr : Adding DeCap cell $decap_cell near inst $clkbuf location \"$x1 $y1 $x2 $y2\"  ..."
  
      set clkbuf_orient [ dbget [ dbGetInstByName $clkbuf ].orient]
      if { [dbget top.insts.name ${clkbuf}_CLK_DECAP ] == "0x0" }  {
        if { $clkbuf_orient == "MX" || $clkbuf_orient == "R180" } {
          addInst -physical -cell $decap_cell -inst ${clkbuf}_CLK_DECAP -loc [ expr $x1 - $dcap_width ] $y1
        } else {
          addInst -physical -cell $decap_cell -inst ${clkbuf}_CLK_DECAP -loc $x2 $y1
        }
        selectInst $clkbuf
      }
    }
  }


  Puts "\n\nLegalizing Placement ...[exec date]"
  # Legalize placement giving priority to the decap cells:
  setInstancePlacementStatus -name *_CLK_DECAP -status fixed
  refinePlace

  # Legalize placement giving priority to the clock tree cells:
  setInstancePlacementStatus -name *_CLK_DECAP -status placed
  refinePlace

  # Legalize placement with clock cells placed to resolve any remaining violations:
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus placed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus placed
  }
  refinePlace

  # Fix clock cells and decap cells:
  foreach clk_cell [get_ccopt_clock_tree_cells] {
    dbSet [dbGet -p top.insts.name $clk_cell].pStatus fixed
  }
  foreach clock_sink [get_ccopt_clock_tree_sinks] {
    dbSet [dbGet -p top.insts.name [file dirname $clock_sink]].pStatus fixed
  }
  setInstancePlacementStatus -name *_CLK_DECAP -status fixed

  setEcoMode -reset
  deselectAll
  checkPlace cp.rpt

}

