#########################################################################
#  Title       : Sample MMMC sdc file.
#  Project     : ihp 130 dz flow
##########################################################################
#  File        : mmmc_functional.sdc
#  Author      : Beat Muheim  <muheim@ee.ethz.ch>
#  Company     : Microelectronics Design Center (DZ), ETH Zurich
##########################################################################
#  Description : 
#    There are 4 files in this fictional MMMC (multi-mode multi-corner)
#    analysis setup:
#      - src/sample/mmmc_shared.sdc        SDC file with common constraints
#      - src/sample/mmmc_functional.sdc    Functional mode constraints
#      - src/sample/mmmc_test.sdc          Test mode constraints
#                                          (also used for hold timing analysis)
#      - src/sample/mmmc.view.tcl          Sample TCL file that can be adapted
#
#    Please note these are just for reference, develop your own scripts!
#
##########################################################################
#  Copyright (c) 2016 Microelectronics Design Center, ETH Zurich
##########################################################################
# v0.1  - <muheim@ee.ethz.ch> - Mon Jun 19 13:28:08 CEST 2023
#  - copy from tsmc 180 v0.1 and adapt 
#################################################################

## In our fictional example the circuit has a main operational mode
## In a standard SDC file (without MMMC) we would only use these
## constraints. 

create_clock -period  8 [get_ports {clk_i}]


## I/O timing
set_input_delay  2 -clock {clk_i} [remove_from_collection [all_inputs] [get_ports {clk_i}]]
set_output_delay 2 -clock {clk_i} [all_outputs]

## In this mode, the following pin is always set to the given value
set_case_analysis 0 [get_ports {scan_enable_i}]
set_case_analysis 0 [get_ports {ram_test_i}]

## set_case_analysis sets a constant value
## ste_false_path removes it from timing calculation.
## Use set_false_path as a last resort. 
#set_false_path -from [get_ports {scan_enable_i}]
#set_false_path -from [get_ports {ram_test_i}]

