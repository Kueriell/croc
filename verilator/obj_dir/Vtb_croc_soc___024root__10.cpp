// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"

void Vtb_croc_soc___024root____VbeforeTrig_h2a53888c__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____VbeforeTrig_h2a53888c__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk__0))) 
                                  << 0x0000001eU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk;
    if ((0x0000000040000000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2a53888c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2a53888c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_croc_soc___024root____VbeforeTrig_he1fd5bc5__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____VbeforeTrig_he1fd5bc5__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = ((QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__rst_n) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0))) 
                                   << 6U))) << 0x00000020U);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__rst_n;
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1fd5bc5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_croc_soc___024root____VbeforeTrig_h6059a1d8__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____VbeforeTrig_h6059a1d8__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h086db803__0;
    __Vtrigprevexpr_h086db803__0 = 0;
    // Body
    __Vtrigprevexpr_h086db803__0 = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_register__DOT__reg_q[1U] 
                                           >> 4U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_tx__DOT__txd_o)));
    __VTmp[0U] = ((QData)((IData)((((~ (IData)(__Vtrigprevexpr_h086db803__0)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr_h086db803__1)) 
                                   << 7U))) << 0x00000020U);
    vlSelfRef.__Vtrigprevexpr_h086db803__1 = __Vtrigprevexpr_h086db803__0;
    if ((0x0000000000000080ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6059a1d8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_croc_soc___024root____VbeforeTrig_h4fcb5ba2__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____VbeforeTrig_h4fcb5ba2__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = ((QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk__0))) 
                                   << 8U))) << 0x00000020U);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk;
    if ((0x0000000000000100ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4fcb5ba2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_croc_soc___024root___sample(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___sample\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_we 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_we;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__down_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__down_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_set 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_set;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__id_fsm_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__id_fsm_d;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_resp_valid_o 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_resp_valid_o;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_multdiv 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_multdiv;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_jump 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_jump;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_branch 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_branch;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_alu 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__stall_alu;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_run 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_run;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_en_dec;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__branch_in_dec 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_accepted 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_accepted;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_pending 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_pending;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_done 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exception_req_done;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__seen_exception_pc_set 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__seen_exception_pc_set;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_mux_id 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_mux_id;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__exc_pc_mux_id 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__exc_pc_mux_id;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__expect_exception_pc_set 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__expect_exception_pc_set;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__wb_i__DOT__rf_we_id_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__wb_i__DOT__rf_we_id_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_op_en_i 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_op_en_i;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access;
}

#ifdef VL_DEBUG
void Vtb_croc_soc___024root___eval_debug_assertions(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_debug_assertions\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
