// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"

void Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);
void Vtb_croc_soc___024root____VbeforeTrig_h2a53888c__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4544__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4544__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4547__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4547__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4549__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4549__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4551__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4551__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4553__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4553__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4559__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4559__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4561__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4561__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4564__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4564__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4566__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4566__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4568__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4568__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4574__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4574__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4575__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4575__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4577__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4577__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4579__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4579__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4583__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4583__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4585__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4585__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4587__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4587__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4589__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4589__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4595__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4595__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4597__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4597__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4600__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4600__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4602__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4602__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4604__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4604__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4610__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4610__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4611__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4611__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4613__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4613__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4615__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4615__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4622__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4622__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4624__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4624__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4626__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4626__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4631__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4631__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4632__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4632__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4634__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4634__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4636__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4636__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_cmd;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_cmd = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_sba;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_sba = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639____Vlvbound_hceba7501__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639____Vlvbound_hceba7501__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4641__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4641__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4643__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4643__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4645__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4645__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4647__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4647__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4653__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4653__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4655__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4655__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4658__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4658__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4660__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4660__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4662__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4662__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4668__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4668__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4669__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4669__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4671__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4671__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4673__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4673__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4676__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4676__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4679__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4679__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4681__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4681__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4683__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4683__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4685__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4685__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4691__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4691__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4693__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4693__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4696__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4696__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4698__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4698__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4700__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4700__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4706__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4706__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4707__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4707__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4709__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4709__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4711__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4711__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4715__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4715__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4717__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4717__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4719__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4719__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4721__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4721__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4727__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4727__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4729__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4729__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4732__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4732__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4734__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4734__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4736__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4736__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4742__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4742__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4743__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4743__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4745__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4745__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4747__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4747__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4754__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4754__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4756__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4756__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4758__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4758__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4763__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4763__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4764__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4764__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4766__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4766__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4768__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4768__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4771__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4771__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4774__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4774__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4776__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4776__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4778__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4778__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4780__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4780__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4786__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4786__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4788__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4788__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4791__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4791__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4793__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4793__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4795__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4795__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4801__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4801__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4802__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4802__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4804__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4804__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4806__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4806__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4810__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4810__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4812__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4812__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4814__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4814__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4816__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4816__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4822__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4822__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4824__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4824__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4827__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4827__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4829__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4829__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4831__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4831__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4837__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4837__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4838__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4838__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4840__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4840__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4842__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4842__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4849__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4849__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4851__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4851__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4853__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4853__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4858__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4858__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4859__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4859__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4861__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4861__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4863__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4863__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_cmd;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_cmd = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_sba;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_sba = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866____Vlvbound_hceba7501__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866____Vlvbound_hceba7501__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4868__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4868__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4870__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4870__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4872__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4872__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4874__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4874__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4880__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4880__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4882__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4882__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4885__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4885__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4887__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4887__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4889__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4889__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4895__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4895__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4896__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4896__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4898__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4898__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4900__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4900__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4903__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4903__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4906__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4906__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4908__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4908__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4910__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4910__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4912__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4912__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4918__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4918__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4920__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4920__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4923__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4923__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4925__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4925__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4927__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4927__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4933__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4933__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4934__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4934__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4936__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4936__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4938__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4938__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4942__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4942__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4944__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4944__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4946__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4946__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4948__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4948__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4954__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4954__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4956__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4956__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4959__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4959__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4961__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4961__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4963__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4963__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4969__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4969__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4970__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4970__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4972__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4972__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4974__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4974__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4981__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4981__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4983__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4983__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4985__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4985__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4990__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4990__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4991__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4991__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4993__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4993__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4995__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4995__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4998__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4998__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5001__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5001__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5003__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5003__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5005__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5005__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5007__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5007__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5013__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5013__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5015__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5015__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5018__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5018__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5020__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5020__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5022__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5022__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5028__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5028__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5029__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5029__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5031__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5031__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5033__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5033__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5037__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5037__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5039__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5039__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5041__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5041__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5043__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5043__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5049__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5049__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5051__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5051__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5054__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5054__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5056__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5056__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5058__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5058__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5064__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5064__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5065__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5065__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5067__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5067__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5069__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5069__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5076__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5076__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5078__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5078__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5080__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5080__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5085__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5085__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5086__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5086__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5088__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5088__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5090__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5090__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__5092__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__5092__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__5098__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__5098__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5101__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5101__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5103__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5103__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5105__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5105__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5107__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5107__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5113__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5113__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5115__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5115__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5118__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5118__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5120__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5120__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5122__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5122__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5128__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5128__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5129__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5129__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5131__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5131__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5133__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5133__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5137__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5137__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5139__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5139__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5141__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5141__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5143__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5143__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5149__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5149__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5151__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5151__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5154__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5154__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5156__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5156__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5158__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5158__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5164__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5164__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5165__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5165__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5167__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5167__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5169__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5169__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5176__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5176__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5178__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5178__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5180__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5180__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5185__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5185__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5186__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5186__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5188__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5188__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5190__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5190__tms_val = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    IData/*31:0*/ __Vilp8;
    IData/*31:0*/ __Vilp9;
    IData/*31:0*/ __Vilp10;
    IData/*31:0*/ __Vilp11;
    IData/*31:0*/ __Vilp12;
    IData/*31:0*/ __Vilp13;
    IData/*31:0*/ __Vilp14;
    IData/*31:0*/ __Vilp15;
    IData/*31:0*/ __Vilp16;
    IData/*31:0*/ __Vilp17;
    IData/*31:0*/ __Vilp18;
    IData/*31:0*/ __Vilp19;
    IData/*31:0*/ __Vilp20;
    // Body
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__wait_sba) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs = 0;
        do {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__op = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles = 8U;
            do {
                if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4544__dmireset = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4544__dmireset = 0x00010000U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4544__dmireset;
                    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data_packed = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i)] 
                            = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data_packed 
                                     >> (0x0000001fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode = 0x10U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode))) {
                            goto __Vlabel0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4547__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4547__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4549__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4549__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4551__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4551__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4553__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4553__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4555__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4559__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4559__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4561__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4561__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4546__opcode;
                        __Vlabel0: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4564__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4564__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4566__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4566__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4568__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4568__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[5U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[5U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[6U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[6U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[7U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[7U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[8U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[8U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[9U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[9U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[10U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[10U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[11U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[11U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[12U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[12U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[13U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[13U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[14U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[14U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[15U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[15U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[16U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[16U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[17U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[17U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[18U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[18U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[19U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[19U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[20U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[20U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[21U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[21U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[22U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[22U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[23U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[23U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[24U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[24U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[25U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[25U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[26U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[26U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[27U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[27U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[28U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[28U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[29U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[29U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[30U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[30U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata[31U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4545__write_data[31U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__wdata
                            [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i)];
                        if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4570__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4574__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4574__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4575__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4575__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4577__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4577__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4579__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4579__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__address 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__address;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h11f95d0f__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h996247a8__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h4c9398d3__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__op = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__read_data[__Vi0] = 0;
                }
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x0000007fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__address)))) 
                               << 0x00000022U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h4c9398d3__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h4c9398d3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode = 0x11U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode))) {
                        goto __Vlabel1;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4583__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4583__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4585__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4585__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4587__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4587__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4589__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4589__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4591__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4595__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4595__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4597__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4597__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4582__opcode;
                    __Vlabel1: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4600__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4600__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4602__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4602__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4604__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4604__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__tms_last = 1U;
                __Vilp1 = 0U;
                while ((__Vilp1 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__wdata[__Vilp1] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data
                        [__Vilp1];
                    __Vilp1 = ((IData)(1U) + __Vilp1);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4606__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4610__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4610__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4611__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4611__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4613__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4613__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4615__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4615__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4617__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4622__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4622__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4624__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4624__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4626__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4626__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed 
                    = ((QData)((IData)((0x0000007fU 
                                        & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__address)))) 
                       << 0x00000022U);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h996247a8__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h996247a8__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__tms_last = 1U;
                __Vilp2 = 0U;
                while ((__Vilp2 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__wdata[__Vilp2] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__write_data
                        [__Vilp2];
                    __Vilp2 = ((IData)(1U) + __Vilp2);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628____Vlvbound_hd64afdb0__0 = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__rdata[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628____Vlvbound_hd64afdb0__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628____Vlvbound_hd64afdb0__0;
                    }
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__unnamedblk6__DOT__i);
                }
                __Vilp3 = 0U;
                while ((__Vilp3 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__read_data[__Vilp3] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4628__rdata
                        [__Vilp3];
                    __Vilp3 = ((IData)(1U) + __Vilp3);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4631__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4631__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4632__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4632__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4634__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4634__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4636__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4636__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h11f95d0f__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__read_data
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out 
                            = (((~ (1ULL << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out) 
                               | (0x000001ffffffffffULL 
                                  & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581____Vlvbound_h11f95d0f__0)) 
                                     << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__op 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4581__op;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__wait_cycles);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__trial_idx);
            } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__op)));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4543__data;
            if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs 
                                            >> 0x0000000cU) 
                                           | (1U & 
                                              (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs 
                                               >> 0x00000016U)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
            }
        } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4411__unnamedblk2__DOT__sbcs));
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_sba = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__data = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__addr = 0x3aU;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__data 
        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__address 
        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639____Vlvbound_hceba7501__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data[__Vi0] = 0;
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data_packed = 0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data_packed 
        = (2ULL | (((QData)((IData)((0x0000007fU & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__address)))) 
                    << 0x00000022U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__data)) 
                                       << 2U)));
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i)) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639____Vlvbound_hceba7501__0 
            = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i)) 
               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data_packed 
                                 >> (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i)))));
        if (VL_LIKELY(((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i))))) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i)] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639____Vlvbound_hceba7501__0;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__unnamedblk5__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640____Vlvbound_h6c7258af__0 = 0;
    {
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[__Vi0] = 0;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode))) {
            goto __Vlabel2;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640____Vlvbound_h6c7258af__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i))));
            if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i))))) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i)] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640____Vlvbound_h6c7258af__0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4641__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4641__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4643__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4643__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4645__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4645__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4647__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4647__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[0U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[0U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[1U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[1U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[2U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[2U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[3U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[3U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata[4U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode_unpacked[4U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 
                ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i)) 
                 && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__wdata
                 [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4649__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4653__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4653__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4655__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4655__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4640__opcode;
        __Vlabel2: ;
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4658__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4658__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4660__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4660__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4662__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4662__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__tms_last = 1U;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x00000028U)) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__wdata[__Vilp4] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4639__write_data
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi = ((0x28U 
                                                 >= 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i)) 
                                                && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__wdata
                                                [(0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i)]);
        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__tms_last;
        }
        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4664__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4668__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4668__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4669__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4669__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4671__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4671__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4673__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4673__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_cmd) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs = 0;
        do {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__address = 0x16U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__op = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles = 8U;
            do {
                if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4676__dmireset = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4676__dmireset = 0x00010000U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4676__dmireset;
                    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data_packed = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i)] 
                            = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data_packed 
                                     >> (0x0000001fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode = 0x10U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode))) {
                            goto __Vlabel3;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4679__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4679__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4681__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4681__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4683__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4683__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4685__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4685__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4687__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4691__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4691__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4693__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4693__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4678__opcode;
                        __Vlabel3: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4696__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4696__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4698__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4698__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4700__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4700__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[5U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[5U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[6U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[6U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[7U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[7U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[8U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[8U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[9U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[9U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[10U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[10U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[11U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[11U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[12U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[12U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[13U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[13U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[14U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[14U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[15U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[15U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[16U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[16U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[17U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[17U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[18U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[18U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[19U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[19U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[20U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[20U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[21U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[21U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[22U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[22U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[23U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[23U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[24U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[24U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[25U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[25U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[26U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[26U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[27U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[27U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[28U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[28U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[29U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[29U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[30U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[30U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata[31U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4677__write_data[31U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__wdata
                            [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i)];
                        if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4702__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4706__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4706__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4707__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4707__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4709__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4709__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4711__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4711__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__address 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__address;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h11f95d0f__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h996247a8__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h4c9398d3__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__op = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__read_data[__Vi0] = 0;
                }
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x0000007fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__address)))) 
                               << 0x00000022U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h4c9398d3__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h4c9398d3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode = 0x11U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode))) {
                        goto __Vlabel4;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4715__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4715__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4717__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4717__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4719__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4719__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4721__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4721__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4723__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4727__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4727__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4729__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4729__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4714__opcode;
                    __Vlabel4: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4732__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4732__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4734__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4734__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4736__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4736__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__tms_last = 1U;
                __Vilp5 = 0U;
                while ((__Vilp5 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__wdata[__Vilp5] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data
                        [__Vilp5];
                    __Vilp5 = ((IData)(1U) + __Vilp5);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4738__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4742__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4742__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4743__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4743__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4745__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4745__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4747__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4747__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4749__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4754__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4754__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4756__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4756__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4758__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4758__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed 
                    = ((QData)((IData)((0x0000007fU 
                                        & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__address)))) 
                       << 0x00000022U);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h996247a8__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h996247a8__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__tms_last = 1U;
                __Vilp6 = 0U;
                while ((__Vilp6 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__wdata[__Vilp6] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__write_data
                        [__Vilp6];
                    __Vilp6 = ((IData)(1U) + __Vilp6);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760____Vlvbound_hd64afdb0__0 = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__rdata[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760____Vlvbound_hd64afdb0__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760____Vlvbound_hd64afdb0__0;
                    }
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__unnamedblk6__DOT__i);
                }
                __Vilp7 = 0U;
                while ((__Vilp7 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__read_data[__Vilp7] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4760__rdata
                        [__Vilp7];
                    __Vilp7 = ((IData)(1U) + __Vilp7);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4763__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4763__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4764__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4764__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4766__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4766__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4768__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4768__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h11f95d0f__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__read_data
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out 
                            = (((~ (1ULL << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out) 
                               | (0x000001ffffffffffULL 
                                  & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713____Vlvbound_h11f95d0f__0)) 
                                     << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__op 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4713__op;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__wait_cycles);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__trial_idx);
            } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__op)));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4675__data;
            if (VL_UNLIKELY(((0U != (7U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs 
                                           >> 8U)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:98: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/test/croc_vip.sv", 98, "", false);
            }
        } while ((0x00001000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk1__DOT__acs));
    }
    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__wait_sba) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs = 0;
        do {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__op = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles = 8U;
            do {
                if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4771__dmireset = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4771__dmireset = 0x00010000U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4771__dmireset;
                    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data_packed = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i)] 
                            = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data_packed 
                                     >> (0x0000001fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode = 0x10U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode))) {
                            goto __Vlabel5;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4774__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4774__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4776__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4776__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4778__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4778__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4780__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4780__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4782__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4786__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4786__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4788__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4788__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4773__opcode;
                        __Vlabel5: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4791__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4791__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4793__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4793__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4795__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4795__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[5U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[5U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[6U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[6U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[7U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[7U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[8U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[8U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[9U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[9U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[10U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[10U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[11U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[11U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[12U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[12U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[13U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[13U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[14U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[14U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[15U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[15U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[16U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[16U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[17U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[17U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[18U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[18U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[19U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[19U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[20U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[20U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[21U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[21U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[22U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[22U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[23U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[23U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[24U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[24U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[25U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[25U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[26U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[26U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[27U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[27U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[28U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[28U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[29U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[29U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[30U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[30U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata[31U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4772__write_data[31U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__wdata
                            [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i)];
                        if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4797__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4801__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4801__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4802__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4802__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4804__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4804__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4806__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4806__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__address 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__address;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h11f95d0f__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h996247a8__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h4c9398d3__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__op = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__read_data[__Vi0] = 0;
                }
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x0000007fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__address)))) 
                               << 0x00000022U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h4c9398d3__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h4c9398d3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode = 0x11U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode))) {
                        goto __Vlabel6;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4810__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4810__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4812__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4812__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4814__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4814__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4816__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4816__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4818__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4822__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4822__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4824__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4824__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4809__opcode;
                    __Vlabel6: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4827__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4827__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4829__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4829__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4831__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4831__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__tms_last = 1U;
                __Vilp8 = 0U;
                while ((__Vilp8 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__wdata[__Vilp8] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data
                        [__Vilp8];
                    __Vilp8 = ((IData)(1U) + __Vilp8);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4833__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4837__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4837__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4838__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4838__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4840__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4840__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4842__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4842__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4844__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4849__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4849__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4851__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4851__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4853__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4853__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed 
                    = ((QData)((IData)((0x0000007fU 
                                        & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__address)))) 
                       << 0x00000022U);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h996247a8__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h996247a8__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__tms_last = 1U;
                __Vilp9 = 0U;
                while ((__Vilp9 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__wdata[__Vilp9] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__write_data
                        [__Vilp9];
                    __Vilp9 = ((IData)(1U) + __Vilp9);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855____Vlvbound_hd64afdb0__0 = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__rdata[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855____Vlvbound_hd64afdb0__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855____Vlvbound_hd64afdb0__0;
                    }
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__unnamedblk6__DOT__i);
                }
                __Vilp10 = 0U;
                while ((__Vilp10 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__read_data[__Vilp10] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4855__rdata
                        [__Vilp10];
                    __Vilp10 = ((IData)(1U) + __Vilp10);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4858__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4858__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4859__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4859__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4861__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4861__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4863__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4863__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h11f95d0f__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__read_data
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out 
                            = (((~ (1ULL << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out) 
                               | (0x000001ffffffffffULL 
                                  & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808____Vlvbound_h11f95d0f__0)) 
                                     << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__op 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4808__op;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__wait_cycles);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__trial_idx);
            } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__op)));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4770__data;
            if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs 
                                            >> 0x0000000cU) 
                                           | (1U & 
                                              (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs 
                                               >> 0x00000016U)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
            }
        } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4638__unnamedblk2__DOT__sbcs));
    }
    do {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_sba = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_cmd = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__data = 0x03000008U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__addr = 0x39U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__data;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__address 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__addr;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866____Vlvbound_hceba7501__0 = 0;
        for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data[__Vi0] = 0;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data_packed 
            = (2ULL | (((QData)((IData)((0x0000007fU 
                                         & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__address)))) 
                        << 0x00000022U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__data)) 
                                           << 2U)));
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866____Vlvbound_hceba7501__0 
                = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data_packed 
                                     >> (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i)))));
            if (VL_LIKELY(((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i))))) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i)] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866____Vlvbound_hceba7501__0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__unnamedblk5__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867____Vlvbound_h6c7258af__0 = 0;
        {
            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[__Vi0] = 0;
            }
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode))) {
                goto __Vlabel7;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867____Vlvbound_h6c7258af__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i))));
                if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867____Vlvbound_h6c7258af__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4868__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4868__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4870__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4870__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4872__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4872__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4874__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4874__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[0U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[0U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[1U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[1U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[2U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[2U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[3U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[3U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata[4U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode_unpacked[4U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4876__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4880__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4880__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4882__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4882__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4867__opcode;
            __Vlabel7: ;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4885__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4885__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4887__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4887__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4889__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4889__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__tms_last = 1U;
        __Vilp11 = 0U;
        while ((__Vilp11 <= 0x00000028U)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__wdata[__Vilp11] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__4866__write_data
                [__Vilp11];
            __Vilp11 = ((IData)(1U) + __Vilp11);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 
                ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i)) 
                 && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__wdata
                 [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i)]);
            if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4891__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4895__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4895__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4896__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4896__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4898__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4898__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4900__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4900__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_cmd) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__address = 0x16U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4903__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4903__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4903__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode))) {
                                goto __Vlabel8;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4906__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4906__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4908__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4908__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4910__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4910__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4912__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4912__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__tms_last;
                                }
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     153);
                                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4914__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4918__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4918__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4920__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4920__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4905__opcode;
                            __Vlabel8: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4923__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4923__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4925__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4925__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4927__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4927__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4904__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4929__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4933__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4933__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4934__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4934__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4936__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4936__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4938__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4938__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode))) {
                            goto __Vlabel9;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4942__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4942__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4944__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4944__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4946__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4946__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4948__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4948__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4950__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4954__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4954__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4956__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4956__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4941__opcode;
                        __Vlabel9: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4959__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4959__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4961__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4961__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4963__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4963__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__tms_last = 1U;
                    __Vilp12 = 0U;
                    while ((__Vilp12 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__wdata[__Vilp12] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data
                            [__Vilp12];
                        __Vilp12 = ((IData)(1U) + __Vilp12);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4965__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4969__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4969__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4970__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4970__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4972__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4972__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4974__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4974__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4976__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4981__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4981__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4983__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4983__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4985__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4985__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__tms_last = 1U;
                    __Vilp13 = 0U;
                    while ((__Vilp13 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__wdata[__Vilp13] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__write_data
                            [__Vilp13];
                        __Vilp13 = ((IData)(1U) + __Vilp13);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__unnamedblk6__DOT__i);
                    }
                    __Vilp14 = 0U;
                    while ((__Vilp14 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__read_data[__Vilp14] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4987__rdata
                            [__Vilp14];
                        __Vilp14 = ((IData)(1U) + __Vilp14);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4990__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4990__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4991__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4991__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4993__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4993__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4995__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4995__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__4940__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4902__data;
                if (VL_UNLIKELY(((0U != (7U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs 
                                               >> 8U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:98: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 98, "", false);
                }
            } while ((0x00001000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk1__DOT__acs));
        }
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__wait_sba) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__address = 0x38U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4998__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4998__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__4998__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode))) {
                                goto __Vlabel10;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5001__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5001__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5003__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5003__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5005__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5005__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5007__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5007__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__tms_last;
                                }
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     153);
                                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5009__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5013__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5013__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5015__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5015__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5000__opcode;
                            __Vlabel10: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5018__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5018__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5020__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5020__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5022__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5022__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__4999__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5024__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5028__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5028__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5029__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5029__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5031__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5031__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5033__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5033__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode))) {
                            goto __Vlabel11;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5037__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5037__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5039__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5039__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5041__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5041__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5043__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5043__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5045__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5049__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5049__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5051__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5051__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5036__opcode;
                        __Vlabel11: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5054__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5054__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5056__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5056__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5058__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5058__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__tms_last = 1U;
                    __Vilp15 = 0U;
                    while ((__Vilp15 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__wdata[__Vilp15] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data
                            [__Vilp15];
                        __Vilp15 = ((IData)(1U) + __Vilp15);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5060__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5064__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5064__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5065__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5065__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5067__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5067__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5069__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5069__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5071__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5076__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5076__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5078__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5078__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5080__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5080__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__tms_last = 1U;
                    __Vilp16 = 0U;
                    while ((__Vilp16 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__wdata[__Vilp16] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__write_data
                            [__Vilp16];
                        __Vilp16 = ((IData)(1U) + __Vilp16);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__unnamedblk6__DOT__i);
                    }
                    __Vilp17 = 0U;
                    while ((__Vilp17 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__read_data[__Vilp17] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5082__rdata
                            [__Vilp17];
                        __Vilp17 = ((IData)(1U) + __Vilp17);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5085__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5085__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5086__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5086__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5088__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5088__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5090__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5090__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5035__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4997__data;
                if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs 
                                                >> 0x0000000cU) 
                                               | (1U 
                                                  & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs 
                                                     >> 0x00000016U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
                }
            } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__4865__unnamedblk2__DOT__sbcs));
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__5092__cycles = 0x00000014U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__cycles 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__5092__cycles;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5093__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__address = 0x3cU;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__data = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__op = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles = 8U;
        do {
            if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__5098__dmireset = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__5098__dmireset = 0x00010000U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__5098__dmireset;
                for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data_packed = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i)] 
                        = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data_packed 
                                 >> (0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode = 0x10U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode))) {
                        goto __Vlabel12;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5101__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5101__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5103__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5103__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5105__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5105__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5107__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5107__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5109__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5113__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5113__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5115__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5115__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5100__opcode;
                    __Vlabel12: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5118__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5118__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5120__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5120__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5122__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5122__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[0U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[0U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[1U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[1U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[2U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[2U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[3U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[3U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[4U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[4U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[5U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[5U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[6U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[6U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[7U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[7U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[8U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[8U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[9U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[9U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[10U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[10U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[11U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[11U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[12U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[12U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[13U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[13U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[14U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[14U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[15U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[15U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[16U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[16U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[17U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[17U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[18U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[18U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[19U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[19U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[20U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[20U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[21U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[21U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[22U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[22U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[23U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[23U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[24U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[24U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[25U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[25U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[26U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[26U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[27U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[27U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[28U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[28U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[29U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[29U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[30U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[30U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata[31U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__5099__write_data[31U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__wdata
                        [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i)];
                    if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__5124__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5128__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5128__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5129__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5129__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5131__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5131__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5133__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5133__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__address 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__address;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h11f95d0f__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h996247a8__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h4c9398d3__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__op = 0;
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__read_data[__Vi0] = 0;
            }
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data[__Vi0] = 0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed 
                = (1ULL | ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__address)))) 
                           << 0x00000022U));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h4c9398d3__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed 
                                         >> (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i)))));
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h4c9398d3__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode = 0x11U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136____Vlvbound_h6c7258af__0 = 0;
            {
                for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[__Vi0] = 0;
                }
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode))) {
                    goto __Vlabel13;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136____Vlvbound_h6c7258af__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i))));
                    if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136____Vlvbound_h6c7258af__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5137__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5137__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5139__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5139__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5141__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5141__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5143__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5143__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[0U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[0U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[1U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[1U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[2U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[2U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[3U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[3U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata[4U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode_unpacked[4U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__5145__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5149__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5149__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5151__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5151__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__5136__opcode;
                __Vlabel13: ;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5154__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5154__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5156__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5156__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5158__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5158__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__tms_last = 1U;
            __Vilp18 = 0U;
            while ((__Vilp18 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__wdata[__Vilp18] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data
                    [__Vilp18];
                __Vilp18 = ((IData)(1U) + __Vilp18);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__wdata
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i)]);
                if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__5160__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5164__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5164__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5165__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5165__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5167__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5167__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5169__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5169__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__cycles 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__wait_cycles;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5171__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5176__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5176__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5178__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5178__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5180__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5180__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed 
                = ((QData)((IData)((0x0000007fU & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__address)))) 
                   << 0x00000022U);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h996247a8__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data_packed 
                                         >> (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i)))));
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h996247a8__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__tms_last = 1U;
            __Vilp19 = 0U;
            while ((__Vilp19 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__wdata[__Vilp19] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__write_data
                    [__Vilp19];
                __Vilp19 = ((IData)(1U) + __Vilp19);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182____Vlvbound_hd64afdb0__0 = 0;
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__rdata[__Vi0] = 0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__wdata
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i)]);
                if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182____Vlvbound_hd64afdb0__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182____Vlvbound_hd64afdb0__0;
                }
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__unnamedblk6__DOT__i);
            }
            __Vilp20 = 0U;
            while ((__Vilp20 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__read_data[__Vilp20] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__5182__rdata
                    [__Vilp20];
                __Vilp20 = ((IData)(1U) + __Vilp20);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5185__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__5185__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5186__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5186__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5188__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5188__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5190__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__5190__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h11f95d0f__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__read_data
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i)]);
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out 
                        = (((~ (1ULL << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out) 
                           | (0x000001ffffffffffULL 
                              & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135____Vlvbound_h11f95d0f__0)) 
                                 << (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__data 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__data;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__op 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__5135__op;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__wait_cycles);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__trial_idx);
        } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__op)));
        vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__5097__data;
    } while ((0U == vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code));
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code, 1U);
    if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code)) {
        VL_WRITEF_NX("@%t | [JTAG] Simulation finished: FAIL (return code 0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code);
        Verilated::runFlushCallbacks();
    } else {
        VL_WRITEF_NX("@%t | [JTAG] Simulation finished: SUCCESS\n",0,
                     64,VL_TIME_UNITED_Q(1),-12);
        Verilated::runFlushCallbacks();
    }
    VL_FINISH_MT("../rtl/test/croc_vip.sv", 278, "");
    vlSelfRef.tb_croc_soc__DOT__tb_data = vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_wait_for_eoc__4410__exit_code;
    tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000032U;
    while (VL_LTS_III(32, 0U, tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_croc_soc___024root____VbeforeTrig_h2a53888c__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)");
        co_await vlSelfRef.__VtrigSched_h2a53888c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)", 
                                                             "../rtl/test/tb_croc_soc.sv", 
                                                             151);
        tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_FINISH_MT("../rtl/test/tb_croc_soc.sv", 152, "");
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                         nullptr, "../rtl/test/croc_vip.sv", 
                                         79);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         30);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_trst_n = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__5193__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         35);
    vlSelfRef.tb_croc_soc__DOT__jtag_trst_n = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         42);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__5200__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         46);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
    co_return;
}

void Vtb_croc_soc___024root____VbeforeTrig_he1fd5bc5__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);
void Vtb_croc_soc___024root____VbeforeTrig_h6059a1d8__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
    tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i = 0;
    std::string __Vtemp_1;
    // Body
    Vtb_croc_soc___024root____VbeforeTrig_he1fd5bc5__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.rst_n)");
    co_await vlSelfRef.__VtrigSched_he1fd5bc5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.rst_n)", 
                                                         "../rtl/test/croc_vip.sv", 
                                                         345);
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.clear();
    while (true) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite = 0U;
        Vtb_croc_soc___024root____VbeforeTrig_h6059a1d8__0(vlSelf, 
                                                           "@(negedge (tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_register.reg_q[36] | tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_tx.txd_o))");
        co_await vlSelfRef.__VtrigSched_h6059a1d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge (tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_register.reg_q[36] | tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_tx.txd_o))", 
                                                             "../rtl/test/croc_vip.sv", 
                                                             306);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_reading_byte = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000003d0900ULL, 
                                             nullptr, 
                                             "../rtl/test/croc_vip.sv", 
                                             308);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x00000000007a1200ULL, 
                                                 nullptr, 
                                                 "../rtl/test/croc_vip.sv", 
                                                 311);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i))) 
                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite)) 
                   | (0x00ffU & ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_register__DOT__reg_q[1U] 
                                         >> 4U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_tx__DOT__txd_o))) 
                                 << (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i))));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__unnamedblk4__DOT__i);
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000007a1200ULL, 
                                             nullptr, 
                                             "../rtl/test/croc_vip.sv", 
                                             321);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_reading_byte = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__bite 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__uart_read_byte__5207__bite;
        if (((0x0aU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__bite)) 
             | VL_LTS_III(32, 0x00000050U, vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.size()))) {
            if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.size())))) {
                vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str = ""s;
                tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
                while (VL_LTS_III(32, tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i, vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.size())) {
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str 
                        = VL_CONCATN_NNN(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str, 
                                         VL_CVT_PACK_STR_NI(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.at(tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)));
                    tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                VL_WRITEF_NX("@%t | [UART] %@\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,-1,&(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str));
                Verilated::runFlushCallbacks();
                vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.push_back(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__bite);
                __Vtemp_1 = VL_TO_STRING_DEREF(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf);
                VL_WRITEF_NX("@%t | [UART] raw: %@\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,-1,&(__Vtemp_1));
                Verilated::runFlushCallbacks();
            } else {
                VL_WRITEF_NX("@%t | [UART] ???\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
                Verilated::runFlushCallbacks();
            }
            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.clear();
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__uart_read_buf.push_back(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__unnamedblk7__DOT__bite);
        }
    }
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         36);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt)) {
        Vtb_croc_soc___024root____VbeforeTrig_h2a53888c__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)");
        co_await vlSelfRef.__VtrigSched_h2a53888c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             38);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__rst_n = 1U;
    co_return;
}

void Vtb_croc_soc___024root____VbeforeTrig_h4fcb5ba2__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__rst_no = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000e8d578ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         36);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__unnamedblk1__DOT__rst_cnt)) {
        Vtb_croc_soc___024root____VbeforeTrig_h4fcb5ba2__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_rst_ref.clk)");
        co_await vlSelfRef.__VtrigSched_h4fcb5ba2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_rst_ref.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             38);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__rst_no = 1U;
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__rst_no = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         36);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt)) {
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             38);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__rst_no = 1U;
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk)));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             28);
    }
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk)));
        co_await vlSelfRef.__VdlySched.delay(0x0000000000e8d578ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             28);
    }
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk)));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             28);
    }
    co_return;
}

void Vtb_croc_soc___024root___eval_triggers_vec__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_triggers_vec__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h086db803__0;
    __Vtrigprevexpr_h086db803__0 = 0;
    // Body
    __Vtrigprevexpr_h086db803__0 = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_register__DOT__reg_q[1U] 
                                           >> 4U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_tx__DOT__txd_o)));
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk__0))) 
                                                        << 8U) 
                                                       | (((((((~ (IData)(__Vtrigprevexpr_h086db803__0)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr_h086db803__1)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_croc_soc__DOT__rst_n) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0))) 
                                                                << 2U)) 
                                                            | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                << 1U) 
                                                               | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk__0)))) 
                                                           << 4U) 
                                                          | (((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk__0)) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__synced_rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__synced_rst_n__0)))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____0)))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET____0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET____0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0)))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__0)))) 
                                                              << 4U) 
                                                             | ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_rsp_i 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_rsp_i__0) 
                                                                  << 3U) 
                                                                 | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_rsp_i 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_rsp_i__0) 
                                                                    << 2U)) 
                                                                | (((0U 
                                                                     != 
                                                                     (((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[0U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[0U]) 
                                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[1U] 
                                                                            ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[1U])) 
                                                                        | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[2U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[2U])) 
                                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[3U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[3U])) 
                                                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[4U] 
                                                                         ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[4U]))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__down_i) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__down_i__0)))))) 
                                                         << 0x00000010U) 
                                                        | (((((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_rsp_o 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_rsp_o__0) 
                                                                << 3U) 
                                                               | ((0U 
                                                                   != 
                                                                   (((((((((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[0U] 
                                                                              ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[0U]) 
                                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[1U] 
                                                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[1U])) 
                                                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[2U] 
                                                                               ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[2U])) 
                                                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[3U] 
                                                                              ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[3U])) 
                                                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[4U] 
                                                                             ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[4U])) 
                                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[5U] 
                                                                            ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[5U])) 
                                                                        | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[6U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[6U])) 
                                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[7U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[7U])) 
                                                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[8U] 
                                                                         ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[8U])) 
                                                                     | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[9U] 
                                                                        ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[9U])) 
                                                                    | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[10U] 
                                                                       ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[10U]))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__down_i) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__down_i__0)) 
                                                                  << 1U) 
                                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_rsp_o 
                                                                    != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_rsp_o__0))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0)))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0)))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0)) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_rsp_o__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_rsp_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__down_i__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__down_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[7U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[8U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[8U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[9U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[9U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i__0[10U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__mgr_ports_rsp_i[10U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_rsp_o__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_rsp_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__down_i__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__down_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__0[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_rsp_i__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_rsp_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_rsp_i__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_rsp_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET____0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET____0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_sys__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__synced_rst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__synced_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_trst_n;
    vlSelfRef.__Vtrigprevexpr_h086db803__1 = __Vtrigprevexpr_h086db803__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_rst_ref__DOT__clk;
}
