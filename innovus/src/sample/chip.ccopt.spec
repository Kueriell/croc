delete_ccopt_clock_tree_spec

#-----------------------------------------------------------------------------------------
# CCOpt Clock Tree Config based on EDI ckSpec
# generated on Tue, Jun 09, 2015 02:29:17 pm CEST
# by Native Mode version 036
#-----------------------------------------------------------------------------------------
if { [dbGet head.routeTypes.name default_route_type_leaf] != "default_route_type_leaf" } {
  create_route_type -name default_route_type_leaf -bottom_preferred_layer 1 -top_preferred_layer 3
}
if { [dbGet head.routeTypes.name default_route_type_nonleaf] != "default_route_type_nonleaf" } {
  create_route_type -name default_route_type_nonleaf -bottom_preferred_layer 2 -top_preferred_layer 5
}


# global constraints
#-----------------------------------------------------------------------------------------
# Add that the pads are transparent.
#set_ccopt_property extract_through_to pad_frame_pulp_i/padinst_clk0/Y -pin pad_frame_pulp_i/padinst_clk0/PAD

# buffer/inverter/clock_gating cells
#set_ccopt_property buffer_cells [ list \
#                                  ]

#set_ccopt_property inverter_cells [ list \
#                                  ]

#set_ccopt_property clock_gating_cells [ list \
#                                      ]

#get ignore and case_analysis pin information from create_ccopt_clock_tree_spec -views func_view
#set_ccopt_property sink_type -pin Clk_CO ignore

#get ignore and case_analysis pin information from create_ccopt_clock_tree_spec -views func_view

# from local ThroughPin constraints (locality only effects skew groups not clock trees)
# and from any local Unsync/Excluded/LeafPin constraints which no other clock passes through
# and so are on the boundary of the clock network
#set_ccopt_property sink_type -pin XXXX stop


# MacroModel constraints
#-----------------------------------------------------------------------------------------

 

# clock tree definitions
#-----------------------------------------------------------------------------------------

# In EDI when two AutoCTSRootPins trace over a common sub-tree the AutoCTSRootPin which appears
# first in the spec file owns the sub-tree for the purposes of DRV/NDR (maxTrans, non-default rules, etc.)
# In CCOpt define_clock_tree is greedy and steels common sub-trees from previously defined clock_tees.
# Also, in CCOpt clock_trees are global and cannot overlap - i.e. they determine only what is in or out
# of the clock network and what DRV/NDRs to apply to different bits of the clock network.
# CCOpt has a separate skew_group construct for defining balancing constraints, and these can overlap.

# There are two side effects of these differences in behavior between EDI and CCOpt:

#  1. We need to reverse the order of define_clock_tree definitions compared to AutoCTSRootPin definitions.

#  2. We need to handle the case where there are dis-continous AutoCTSRootPins, e.g. where
#     the first AutoCTSRootPin to reach a clock mux input has that input as a local UnsyncPin,
#     but another AutoCTSRootPin defined later in the spec file reaches the same mux input and
#     doesn't have a local UnsyncPin. In these situations we need to explicitly define a generated
#     clock_tree on the mux output and explicitly copy over the DRV/NDR settings from the first
#     AutoCTSRootPin to it.

create_ccopt_clock_tree -name clk     -source clk_i

# promote any clock trees whose source is within one combinational arc of
# another clock tree sink to generated clock trees


# skew group modification based on local constraints
#-----------------------------------------------------------------------------------------
#create_ccopt_skew_group -name SG_clk01 -balance_skew_groups {clk1 clk0}


# skew group skew and ID targets
#-----------------------------------------------------------------------------------------
#set_ccopt_property target_skew -skew_group * 250ps -delay_corner *


# DRV/NDR constraints for clock trees
#-----------------------------------------------------------------------------------------
set_ccopt_property  target_max_trans -net_type top   -clock_tree * 500ps
set_ccopt_property  target_max_trans -net_type trunk -clock_tree * 350ps
set_ccopt_property  target_max_trans -net_type leaf  -clock_tree * 250ps

set_ccopt_property  route_type -net_type trunk -clock_tree * default_route_type_nonleaf
set_ccopt_property  route_type -net_type top   -clock_tree * default_route_type_nonleaf
set_ccopt_property  route_type -net_type leaf  -clock_tree * default_route_type_leaf

set_ccopt_property source_input_max_trans -delay_corner * -clock_tree clk 500.0ps
set_ccopt_property source_max_capacitance 30pf


# ClockGroup constraints
#-----------------------------------------------------------------------------------------


# LeafPinGroup constraints
#-----------------------------------------------------------------------------------------


# DynamicMacroModel constraints
#-----------------------------------------------------------------------------------------


# Preserve* and DontTouchNet constraints
#-----------------------------------------------------------------------------------------


# CellHalo constraints for clock trees
#-----------------------------------------------------------------------------------------


# maxfanout constraints for clock trees
#-----------------------------------------------------------------------------------------


# opt constraints
#-----------------------------------------------------------------------------------------
# turn off the merge of clock gates.
# The merge can create problems in the LVS hierarchy there is often a empty hierarhcy instance left.
set_ccopt_property ccopt_merge_clock_gates false
set_ccopt_property cts_merge_clock_gates false

# turn off move_clock_gates" "move_logic" to improve timing
set_ccopt_property move_clock_gates false
set_ccopt_property move_logic false
