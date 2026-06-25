# 
# Encounter/Innovus init 
#
# v0.1 - <muheim@ee.ethz.ch> - Tue Aug 30 11:15:07 CEST 2016
# - copy from tsmc28 v0.1 and adapt it


# change report timing format to include also the load
set_global report_timing_format {instance arc cell slew load delay arrival}
#set_global timing_report_timing_header_detail_info extended

# alternatively you can also add fanout to the report
#set_global report_timing_format {instance arc cell slew load fanout delay arrival}

# to allowed after CTS to do the reload the constraint withe 
# "set_analysis_view -update_timing" after "update_constraint_mode ..."
set_global timing_defer_mmmc_object_updates true


# To prevent using the signal integrity for timing calculate.
# It also not asking for using Chip Variation doing the timing calculation after
# routing.
setDelayCalMode -siAware false

# set the temp dir
set env(TMPDIR) "$env(PWD)/../tmp"

# set the technology
setDesignMode -process 130


#setDesignMode -bottomRoutingLayer 2
#setDesignMode -topRoutingLayer    6

# tsm180 lib has *4 grid units per gate
#set dbgSitesPerGate 4

## Specifies the lowest layer the NanoRoute router uses for routing.
#setDesignMode -bottomRoutingLayer 1
  # **ERROR: (IMPSYC-6373): Unable to find layer object in the db.

## Needed to support the new 32/28nm syntax for OPPOSITEOL rule
#setNanoRouteMode -drouteExpFixOppoEolChecker true

## Starts a particular EOL fixing in iteration 0 instead of latter iteration.
#setNanoRouteMode -drouteExpAdvancedFixingIteration 0



# suppress message
