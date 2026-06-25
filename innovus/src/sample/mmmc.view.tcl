#########################################################################
#  Title       : Sample to setup the MMMC view definition file.
#  Project     : ihp 130 dz flow
##########################################################################
#  File        : mmmc.view.tcl
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
#    Please note these are just for reference, adapt according to your design!
#
##########################################################################
#  Copyright (c) 2016 Microelectronics Design Center, ETH Zurich
##########################################################################
# v0.2  - <muheim@ee.ethz.ch> - Fri Oct 14 17:28:29 CEST 2022
#  - using new captable from muse/tsmc
# v0.1  - <muheim@ee.ethz.ch> - Tue Aug 30 12:50:32 CEST 2016
#  - copy from tsmc28 v0.2 and adapt 
##########################################################################

#################################################################
## INITIALIZATION
#################################################################

## Three delay calculation corners are defined here typical, best, worst
## the long command parses the 
create_library_set -name typical_libs \
                   -timing [ list \
                              ../technology/lib/sg13cmos5l_stdcell_typ_1p20V_25C.lib \
			      ../technology/lib/ez130_8t_tt_1p20v_25c.lib \
			      ../technology/lib/sg13cmos5l_io_typ_1p2V_3p3V_25C.lib \
			      ../technology/lib/RM_IHPSG13_1P_1024x64_c2_bm_bist_typ_1p20V_25C.lib \
                           ]
 create_library_set -name best_libs \
                    -timing [ list \
                               ../technology/lib/sg13cmos5l_stdcell_fast_1p32V_m40C.lib \
			      ../technology/lib/ez130_8t_ff_1p32v_m40c.lib \
			      ../technology/lib/sg13cmos5l_io_fast_1p32V_3p6V_m40C.lib \
			      ../technology/lib/RM_IHPSG13_1P_1024x64_c2_bm_bist_fast_1p32V_m55C.lib \
                            ]
 create_library_set -name worst_libs \
                    -timing [ list \
                               ../technology/lib/sg13cmos5l_stdcell_slow_1p08V_125C.lib \
			      ../technology/lib/ez130_8t_ss_1p08v_125c.lib \
			      ../technology/lib/sg13cmos5l_io_slow_1p08V_3p0V_125C.lib \
			      ../technology/lib/RM_IHPSG13_1P_1024x64_c2_bm_bist_slow_1p08V_125C.lib \
                            ]

# RC corners
create_rc_corner -name rc -qx_tech_file ../technology/qrc/qrcTechFile

## Three delay corners are defined here
create_delay_corner -name typical_delay -library_set typical_libs -rc_corner rc
create_delay_corner -name best_delay    -library_set best_libs    -rc_corner rc
create_delay_corner -name worst_delay   -library_set worst_libs   -rc_corner rc

update_delay_corner -name typical_delay -library_set typical_libs -rc_corner rc  -power_domain PD_core
update_delay_corner -name best_delay    -library_set best_libs    -rc_corner rc  -power_domain PD_core
update_delay_corner -name worst_delay   -library_set worst_libs   -rc_corner rc  -power_domain PD_core

update_delay_corner -name typical_delay -library_set typical_libs -rc_corner rc  -power_domain PD_pad
update_delay_corner -name best_delay    -library_set best_libs    -rc_corner rc  -power_domain PD_pad
update_delay_corner -name worst_delay   -library_set worst_libs   -rc_corner rc  -power_domain PD_pad

#update_delay_corner -name typical_delay -library_set typical_libs -rc_corner rc  -power_domain PD_cluster
#update_delay_corner -name best_delay    -library_set best_libs    -rc_corner rc  -power_domain PD_cluster
#update_delay_corner -name worst_delay   -library_set worst_libs   -rc_corner rc  -power_domain PD_cluster

#################################################################
## LOAD CONSTRAINTS
#################################################################

## Here the SDC files that are part of MMMC flow are defined. 
## In this fictional example we have three modes 
##  1) functional: standard mode where the chip is functioning normally,
##                 timing paths from test inputs are disabled
##  2) test      : works with a slower clock, timing paths from test 
##                 inputs are enabled
##  3) hold      : Timing mode to check hold violations covers both cases.
##
## Each of the above mode will have their own constraints defined in a 
## separate SDC file. IN addition, there is a mmmc_shared.sdc that contains
## constraints that are common between two modes. These are just examples, 
## adjust according to your own requirements
##
create_constraint_mode -name func_mode -sdc_files [list src/mmmc_shared.sdc \
                                                        src/mmmc_functional.sdc ]   
create_constraint_mode -name test_mode -sdc_files [list src/mmmc_shared.sdc \
                                                        src/mmmc_test.sdc ]  

## now we create a view that combined the MODE with the CORNER
## hence the name Multi MODE multi CORNER.
##
## This example uses three views:
##
create_analysis_view -name func_view -delay_corner typical_delay -constraint_mode func_mode
create_analysis_view -name test_view -delay_corner typical_delay -constraint_mode test_mode
create_analysis_view -name hold_view -delay_corner best_delay    -constraint_mode test_mode

#################################################################
## SET ANALYSIS VIEWS
#################################################################

## This command determines which VIEWS will be used for analysis. In this
## example we use both 'functional' and 'test_mode' when doing setup analysis
## and we use only the 'hold' view when doing hold analysis. 

set_analysis_view -setup { func_view test_view } \
                  -hold  { hold_view }
                  
## *IMPORTANT* It is actually possible that due to the differences in modelling,
##             for some circuits it could actually be possible that hold violations
##             can occur for 'typical' or 'worst' timing. We would advise to create
##             hold views with three different delay corners, just to make sure that this
##             is not the case. 
                  
                  
## The MMMC will affect the way some of the commands are going to work:
## use:
##   timeDesign -expandedViews
## to get separate reports for each view
                  
