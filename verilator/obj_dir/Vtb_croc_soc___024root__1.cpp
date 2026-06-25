// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"

void Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1289__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1289__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1291__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1291__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1297__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1297__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1298__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1298__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1300__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1300__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1302__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1302__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1305__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1305__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1308__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1308__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1310__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1310__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1312__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1312__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1314__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1314__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1320__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1320__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1322__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1322__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1325__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1325__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1327__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1327__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1329__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1329__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1335__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1335__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1336__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1336__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1338__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1338__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1340__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1340__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1344__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1344__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1346__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1346__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1348__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1348__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1350__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1350__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1356__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1356__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1358__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1358__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1361__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1361__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1363__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1363__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1365__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1365__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1371__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1371__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1372__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1372__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1374__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1374__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1376__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1376__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1383__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1383__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1385__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1385__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1387__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1387__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1392__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1392__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1393__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1393__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1395__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1395__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1397__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1397__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1400__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1400__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1403__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1403__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1405__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1405__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1407__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1407__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1409__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1409__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1415__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1415__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1417__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1417__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1420__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1420__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1422__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1422__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1424__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1424__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1430__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1430__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1431__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1431__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1433__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1433__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1435__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1435__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1439__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1439__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1441__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1441__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1443__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1443__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1445__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1445__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1451__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1451__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1453__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1453__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1456__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1456__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1458__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1458__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1460__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1460__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1466__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1466__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1467__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1467__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1469__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1469__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1471__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1471__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1478__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1478__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1480__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1480__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1482__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1482__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1487__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1487__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1488__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1488__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1490__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1490__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1492__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1492__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1494__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1494__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    // Body
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1289__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1289__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1291__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1291__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__tms_last = 1U;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000028U)) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__wdata[__Vilp1] 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1268__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi = ((0x28U 
                                                 >= 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i)) 
                                                && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__wdata
                                                [(0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i)]);
        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__tms_last;
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
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1293__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1297__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1297__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1298__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1298__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1300__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1300__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1302__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1302__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__wait_cmd) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs = 0;
        do {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__address = 0x16U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__op = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles = 8U;
            do {
                if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1305__dmireset = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1305__dmireset = 0x00010000U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1305__dmireset;
                    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data_packed = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i)] 
                            = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data_packed 
                                     >> (0x0000001fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode = 0x10U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode))) {
                            goto __Vlabel0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1308__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1308__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1310__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1310__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1312__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1312__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1314__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1314__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1316__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1320__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1320__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1322__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1322__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1307__opcode;
                        __Vlabel0: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1325__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1325__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1327__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1327__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1329__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1329__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[5U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[5U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[6U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[6U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[7U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[7U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[8U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[8U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[9U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[9U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[10U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[10U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[11U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[11U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[12U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[12U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[13U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[13U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[14U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[14U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[15U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[15U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[16U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[16U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[17U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[17U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[18U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[18U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[19U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[19U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[20U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[20U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[21U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[21U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[22U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[22U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[23U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[23U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[24U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[24U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[25U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[25U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[26U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[26U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[27U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[27U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[28U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[28U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[29U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[29U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[30U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[30U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata[31U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1306__write_data[31U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__wdata
                            [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i)];
                        if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1331__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1335__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1335__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1336__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1336__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1338__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1338__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1340__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1340__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__address 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__address;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h11f95d0f__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h996247a8__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h4c9398d3__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__op = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__read_data[__Vi0] = 0;
                }
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x0000007fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__address)))) 
                               << 0x00000022U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h4c9398d3__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h4c9398d3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode = 0x11U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode))) {
                        goto __Vlabel1;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1344__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1344__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1346__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1346__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1348__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1348__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1350__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1350__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1352__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1356__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1356__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1358__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1358__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1343__opcode;
                    __Vlabel1: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1361__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1361__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1363__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1363__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1365__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1365__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__tms_last = 1U;
                __Vilp2 = 0U;
                while ((__Vilp2 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__wdata[__Vilp2] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data
                        [__Vilp2];
                    __Vilp2 = ((IData)(1U) + __Vilp2);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1367__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1371__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1371__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1372__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1372__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1374__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1374__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1376__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1376__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1378__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1383__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1383__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1385__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1385__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1387__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1387__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed 
                    = ((QData)((IData)((0x0000007fU 
                                        & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__address)))) 
                       << 0x00000022U);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h996247a8__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h996247a8__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__tms_last = 1U;
                __Vilp3 = 0U;
                while ((__Vilp3 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__wdata[__Vilp3] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__write_data
                        [__Vilp3];
                    __Vilp3 = ((IData)(1U) + __Vilp3);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389____Vlvbound_hd64afdb0__0 = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__rdata[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389____Vlvbound_hd64afdb0__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389____Vlvbound_hd64afdb0__0;
                    }
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__unnamedblk6__DOT__i);
                }
                __Vilp4 = 0U;
                while ((__Vilp4 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__read_data[__Vilp4] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1389__rdata
                        [__Vilp4];
                    __Vilp4 = ((IData)(1U) + __Vilp4);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1392__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1392__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1393__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1393__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1395__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1395__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1397__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1397__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h11f95d0f__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__read_data
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out 
                            = (((~ (1ULL << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out) 
                               | (0x000001ffffffffffULL 
                                  & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342____Vlvbound_h11f95d0f__0)) 
                                     << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__op 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1342__op;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__wait_cycles);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__trial_idx);
            } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__op)));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1304__data;
            if (VL_UNLIKELY(((0U != (7U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs 
                                           >> 8U)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:98: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/test/croc_vip.sv", 98, "", false);
            }
        } while ((0x00001000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk1__DOT__acs));
    }
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__wait_sba) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs = 0;
        do {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__op = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles = 8U;
            do {
                if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1400__dmireset = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1400__dmireset = 0x00010000U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1400__dmireset;
                    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data_packed = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i)] 
                            = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data_packed 
                                     >> (0x0000001fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode = 0x10U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode))) {
                            goto __Vlabel2;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1403__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1403__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1405__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1405__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1407__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1407__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1409__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1409__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1411__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1415__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1415__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1417__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1417__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1402__opcode;
                        __Vlabel2: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1420__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1420__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1422__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1422__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1424__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1424__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[5U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[5U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[6U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[6U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[7U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[7U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[8U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[8U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[9U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[9U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[10U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[10U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[11U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[11U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[12U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[12U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[13U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[13U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[14U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[14U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[15U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[15U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[16U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[16U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[17U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[17U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[18U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[18U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[19U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[19U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[20U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[20U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[21U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[21U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[22U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[22U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[23U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[23U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[24U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[24U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[25U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[25U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[26U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[26U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[27U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[27U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[28U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[28U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[29U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[29U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[30U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[30U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata[31U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1401__write_data[31U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__wdata
                            [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i)];
                        if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1426__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1430__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1430__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1431__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1431__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1433__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1433__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1435__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1435__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__address 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__address;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h11f95d0f__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h996247a8__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h4c9398d3__0 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__op = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__read_data[__Vi0] = 0;
                }
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x0000007fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__address)))) 
                               << 0x00000022U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h4c9398d3__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h4c9398d3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode = 0x11U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode))) {
                        goto __Vlabel3;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1439__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1439__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1441__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1441__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1443__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1443__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1445__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1445__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1447__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1451__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1451__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1453__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1453__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1438__opcode;
                    __Vlabel3: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1456__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1456__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1458__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1458__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1460__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1460__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__tms_last = 1U;
                __Vilp5 = 0U;
                while ((__Vilp5 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__wdata[__Vilp5] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data
                        [__Vilp5];
                    __Vilp5 = ((IData)(1U) + __Vilp5);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1462__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1466__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1466__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1467__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1467__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1469__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1469__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1471__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1471__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__cycles 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__wait_cycles;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1473__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1478__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1478__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1480__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1480__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1482__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1482__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed 
                    = ((QData)((IData)((0x0000007fU 
                                        & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__address)))) 
                       << 0x00000022U);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h996247a8__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data_packed 
                                             >> (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h996247a8__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__tms_last = 1U;
                __Vilp6 = 0U;
                while ((__Vilp6 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__wdata[__Vilp6] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__write_data
                        [__Vilp6];
                    __Vilp6 = ((IData)(1U) + __Vilp6);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484____Vlvbound_hd64afdb0__0 = 0;
                for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__rdata[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__wdata
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i)]);
                    if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484____Vlvbound_hd64afdb0__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484____Vlvbound_hd64afdb0__0;
                    }
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__unnamedblk6__DOT__i);
                }
                __Vilp7 = 0U;
                while ((__Vilp7 <= 0x00000028U)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__read_data[__Vilp7] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1484__rdata
                        [__Vilp7];
                    __Vilp7 = ((IData)(1U) + __Vilp7);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1487__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1487__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1488__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1488__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1490__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1490__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1492__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1492__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h11f95d0f__0 
                        = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__read_data
                           [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                              & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out 
                            = (((~ (1ULL << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out) 
                               | (0x000001ffffffffffULL 
                                  & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437____Vlvbound_h11f95d0f__0)) 
                                     << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__op 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1437__op;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__wait_cycles);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__trial_idx);
            } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__op)));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1399__data;
            if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs 
                                            >> 0x0000000cU) 
                                           | (1U & 
                                              (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs 
                                               >> 0x00000016U)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
            }
        } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1267__unnamedblk2__DOT__sbcs));
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1494__cycles 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__idle_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__cycles 
        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1494__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1495__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    co_return;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__idle_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__idle_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_cmd;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_cmd = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_sba;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_sba = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501____Vlvbound_hceba7501__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501____Vlvbound_hceba7501__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1503__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1503__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1505__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1505__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1507__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1507__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1509__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1509__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1515__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1515__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1517__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1517__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1520__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1520__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1522__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1522__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1524__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1524__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1530__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1530__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1531__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1531__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1533__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1533__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1535__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1535__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1538__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1538__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1541__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1541__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1543__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1543__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1545__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1545__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1547__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1547__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1553__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1553__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1555__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1555__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1558__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1558__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1560__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1560__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1562__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1562__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1568__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1568__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1569__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1569__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1571__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1571__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1573__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1573__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1577__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1577__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1579__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1579__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1581__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1581__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1583__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1583__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1589__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1589__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1591__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1591__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1594__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1594__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1596__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1596__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1598__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1598__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1604__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1604__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1605__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1605__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1607__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1607__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1609__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1609__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1616__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1616__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1618__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1618__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1620__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1620__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1625__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1625__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1626__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1626__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1628__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1628__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1630__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1630__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1633__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1633__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1636__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1636__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1638__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1638__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1640__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1640__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1642__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1642__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1648__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1648__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1650__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1650__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1653__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1653__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1655__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1655__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1657__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1657__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1663__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1663__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1664__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1664__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1666__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1666__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1668__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1668__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1672__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1672__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1674__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1674__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1676__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1676__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1678__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1678__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1684__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1684__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1686__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1686__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1689__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1689__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1691__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1691__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1693__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1693__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1699__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1699__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1700__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1700__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1702__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1702__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1704__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1704__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1711__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1711__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1713__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1713__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1715__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1715__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1720__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1720__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1721__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1721__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1723__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1723__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1725__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1725__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__addr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_cmd;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_cmd = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_sba;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_sba = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728____Vlvbound_hceba7501__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728____Vlvbound_hceba7501__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1730__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1730__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1732__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1732__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1734__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1734__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1736__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1736__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1742__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1742__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1744__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1744__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1747__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1747__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1749__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1749__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1751__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1751__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1757__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1757__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1758__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1758__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1760__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1760__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1762__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1762__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1765__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1765__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1768__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1768__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1770__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1770__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1772__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1772__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1774__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1774__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1780__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1780__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1782__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1782__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1785__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1785__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1787__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1787__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1789__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1789__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1795__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1795__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1796__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1796__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1798__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1798__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1800__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1800__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1804__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1804__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1806__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1806__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1808__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1808__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1810__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1810__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1816__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1816__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1818__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1818__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1821__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1821__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1823__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1823__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1825__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1825__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1831__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1831__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1832__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1832__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1834__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1834__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1836__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1836__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1843__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1843__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1845__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1845__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1847__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1847__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1852__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1852__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1853__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1853__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1855__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1855__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1857__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1857__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1860__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1860__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1863__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1863__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1865__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1865__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1867__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1867__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1869__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1869__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1875__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1875__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1877__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1877__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1880__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1880__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1882__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1882__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1884__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1884__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1890__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1890__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1891__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1891__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1893__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1893__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1895__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1895__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1899__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1899__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1901__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1901__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1903__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1903__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1905__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1905__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1911__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1911__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1913__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1913__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1916__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1916__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1918__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1918__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1920__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1920__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1926__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1926__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1927__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1927__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1929__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1929__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1931__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1931__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1938__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1938__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1940__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1940__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1942__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1942__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1947__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1947__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1948__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1948__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1950__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1950__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1952__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1952__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1954__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1954__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1960__dmireset;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1960__dmireset = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1963__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1963__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1965__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1965__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1967__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1967__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1969__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1969__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1975__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1975__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1977__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1977__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1980__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1980__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1982__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1982__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1984__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1984__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1990__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1990__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1991__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1991__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1993__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1993__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1995__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1995__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__wait_cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__op;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__op = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h11f95d0f__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h11f95d0f__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h996247a8__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h996247a8__0 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h4c9398d3__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h4c9398d3__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__read_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__read_data[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1999__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1999__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2001__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2001__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2003__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2003__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2005__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2005__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2011__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2011__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2013__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2013__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2016__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2016__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2018__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2018__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2020__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2020__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2026__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2026__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2027__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2027__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2029__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2029__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__cycles;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2042__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2042__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__tms_last = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044____Vlvbound_hd64afdb0__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044____Vlvbound_hd64afdb0__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2047__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2047__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2048__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2048__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2050__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2050__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2052__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2052__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__address;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__data;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055____Vlvbound_hceba7501__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055____Vlvbound_hceba7501__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data[__Vi0] = 0;
    }
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data_packed;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056____Vlvbound_h6c7258af__0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056____Vlvbound_h6c7258af__0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2057__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2057__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2059__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2059__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2061__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2061__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2063__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2063__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2069__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2069__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2071__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2071__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2074__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2074__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2076__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2076__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2078__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2078__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__tms_last;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2084__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2084__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2085__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2085__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2087__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2087__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2089__tms_val;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2089__tms_val = 0;
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
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__check_write))) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__idle_cycles = 0x0000000aU;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__addr 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__addr;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__sbcs = 0x00140000U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_sba = 1U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_cmd = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__sbcs;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__addr = 0x38U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__data;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__address 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__addr;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501____Vlvbound_hceba7501__0 = 0;
        for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data[__Vi0] = 0;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data_packed 
            = (2ULL | (((QData)((IData)((0x0000007fU 
                                         & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__address)))) 
                        << 0x00000022U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__data)) 
                                           << 2U)));
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501____Vlvbound_hceba7501__0 
                = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data_packed 
                                     >> (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i)))));
            if (VL_LIKELY(((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i))))) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i)] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501____Vlvbound_hceba7501__0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__unnamedblk5__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502____Vlvbound_h6c7258af__0 = 0;
        {
            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[__Vi0] = 0;
            }
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode))) {
                goto __Vlabel0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502____Vlvbound_h6c7258af__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i))));
                if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502____Vlvbound_h6c7258af__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1503__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1503__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1505__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1505__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1507__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1507__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1509__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1509__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[0U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[0U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[1U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[1U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[2U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[2U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[3U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[3U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata[4U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode_unpacked[4U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__tms_last;
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
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1511__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1515__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1515__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1517__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1517__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1502__opcode;
            __Vlabel0: ;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1520__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1520__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1522__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1522__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1524__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1524__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__tms_last = 1U;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x00000028U)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__wdata[__Vilp1] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1501__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 
                ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i)) 
                 && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__wdata
                 [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i)]);
            if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__tms_last;
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
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1526__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1530__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1530__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1531__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1531__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1533__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1533__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1535__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1535__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_cmd) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__address = 0x16U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1538__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1538__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1538__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode))) {
                                goto __Vlabel1;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1541__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1541__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1543__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1543__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1545__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1545__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1547__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1547__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1549__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1553__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1553__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1555__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1555__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1540__opcode;
                            __Vlabel1: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1558__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1558__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1560__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1560__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1562__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1562__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1539__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1564__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1568__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1568__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1569__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1569__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1571__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1571__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1573__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1573__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode))) {
                            goto __Vlabel2;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1577__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1577__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1579__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1579__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1581__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1581__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1583__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1583__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1585__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1589__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1589__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1591__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1591__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1576__opcode;
                        __Vlabel2: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1594__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1594__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1596__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1596__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1598__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1598__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__tms_last = 1U;
                    __Vilp2 = 0U;
                    while ((__Vilp2 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__wdata[__Vilp2] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data
                            [__Vilp2];
                        __Vilp2 = ((IData)(1U) + __Vilp2);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1600__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1604__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1604__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1605__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1605__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1607__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1607__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1609__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1609__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1611__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1616__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1616__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1618__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1618__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1620__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1620__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__tms_last = 1U;
                    __Vilp3 = 0U;
                    while ((__Vilp3 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__wdata[__Vilp3] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__write_data
                            [__Vilp3];
                        __Vilp3 = ((IData)(1U) + __Vilp3);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__unnamedblk6__DOT__i);
                    }
                    __Vilp4 = 0U;
                    while ((__Vilp4 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__read_data[__Vilp4] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1622__rdata
                            [__Vilp4];
                        __Vilp4 = ((IData)(1U) + __Vilp4);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1625__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1625__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1626__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1626__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1628__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1628__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1630__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1630__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1575__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1537__data;
                if (VL_UNLIKELY(((0U != (7U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs 
                                               >> 8U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:98: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 98, "", false);
                }
            } while ((0x00001000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk1__DOT__acs));
        }
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__wait_sba) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__address = 0x38U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1633__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1633__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1633__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode))) {
                                goto __Vlabel3;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1636__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1636__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1638__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1638__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1640__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1640__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1642__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1642__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1644__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1648__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1648__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1650__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1650__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1635__opcode;
                            __Vlabel3: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1653__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1653__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1655__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1655__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1657__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1657__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1634__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1659__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1663__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1663__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1664__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1664__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1666__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1666__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1668__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1668__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode))) {
                            goto __Vlabel4;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1672__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1672__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1674__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1674__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1676__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1676__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1678__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1678__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1680__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1684__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1684__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1686__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1686__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1671__opcode;
                        __Vlabel4: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1689__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1689__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1691__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1691__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1693__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1693__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__tms_last = 1U;
                    __Vilp5 = 0U;
                    while ((__Vilp5 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__wdata[__Vilp5] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data
                            [__Vilp5];
                        __Vilp5 = ((IData)(1U) + __Vilp5);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1695__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1699__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1699__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1700__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1700__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1702__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1702__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1704__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1704__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1706__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1711__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1711__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1713__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1713__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1715__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1715__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__tms_last = 1U;
                    __Vilp6 = 0U;
                    while ((__Vilp6 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__wdata[__Vilp6] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__write_data
                            [__Vilp6];
                        __Vilp6 = ((IData)(1U) + __Vilp6);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__unnamedblk6__DOT__i);
                    }
                    __Vilp7 = 0U;
                    while ((__Vilp7 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__read_data[__Vilp7] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1717__rdata
                            [__Vilp7];
                        __Vilp7 = ((IData)(1U) + __Vilp7);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1720__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1720__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1721__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1721__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1723__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1723__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1725__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1725__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1670__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1632__data;
                if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs 
                                                >> 0x0000000cU) 
                                               | (1U 
                                                  & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs 
                                                     >> 0x00000016U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
                }
            } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1500__unnamedblk2__DOT__sbcs));
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_sba = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_cmd = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__addr;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__addr = 0x39U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__data;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__address 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__addr;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728____Vlvbound_hceba7501__0 = 0;
        for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data[__Vi0] = 0;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data_packed 
            = (2ULL | (((QData)((IData)((0x0000007fU 
                                         & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__address)))) 
                        << 0x00000022U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__data)) 
                                           << 2U)));
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728____Vlvbound_hceba7501__0 
                = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data_packed 
                                     >> (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i)))));
            if (VL_LIKELY(((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i))))) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i)] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728____Vlvbound_hceba7501__0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__unnamedblk5__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729____Vlvbound_h6c7258af__0 = 0;
        {
            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[__Vi0] = 0;
            }
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode))) {
                goto __Vlabel5;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729____Vlvbound_h6c7258af__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i))));
                if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729____Vlvbound_h6c7258af__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1730__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1730__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1732__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1732__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1734__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1734__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1736__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1736__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[0U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[0U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[1U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[1U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[2U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[2U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[3U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[3U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata[4U] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode_unpacked[4U];
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__tms_last;
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
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1738__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1742__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1742__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1744__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1744__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1729__opcode;
            __Vlabel5: ;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1747__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1747__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1749__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1749__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1751__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1751__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__tms_last = 1U;
        __Vilp8 = 0U;
        while ((__Vilp8 <= 0x00000028U)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__wdata[__Vilp8] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__1728__write_data
                [__Vilp8];
            __Vilp8 = ((IData)(1U) + __Vilp8);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 
                ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i)) 
                 && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__wdata
                 [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i)]);
            if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__tms_last;
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
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1753__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1757__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1757__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1758__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1758__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1760__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1760__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1762__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1762__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_cmd) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__address = 0x16U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1765__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1765__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1765__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode))) {
                                goto __Vlabel6;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1768__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1768__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1770__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1770__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1772__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1772__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1774__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1774__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1776__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1780__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1780__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1782__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1782__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1767__opcode;
                            __Vlabel6: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1785__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1785__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1787__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1787__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1789__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1789__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1766__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1791__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1795__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1795__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1796__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1796__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1798__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1798__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1800__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1800__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode))) {
                            goto __Vlabel7;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1804__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1804__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1806__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1806__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1808__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1808__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1810__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1810__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1812__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1816__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1816__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1818__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1818__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1803__opcode;
                        __Vlabel7: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1821__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1821__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1823__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1823__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1825__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1825__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__tms_last = 1U;
                    __Vilp9 = 0U;
                    while ((__Vilp9 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__wdata[__Vilp9] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data
                            [__Vilp9];
                        __Vilp9 = ((IData)(1U) + __Vilp9);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1827__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1831__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1831__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1832__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1832__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1834__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1834__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1836__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1836__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1838__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1843__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1843__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1845__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1845__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1847__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1847__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__tms_last = 1U;
                    __Vilp10 = 0U;
                    while ((__Vilp10 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__wdata[__Vilp10] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__write_data
                            [__Vilp10];
                        __Vilp10 = ((IData)(1U) + __Vilp10);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__unnamedblk6__DOT__i);
                    }
                    __Vilp11 = 0U;
                    while ((__Vilp11 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__read_data[__Vilp11] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1849__rdata
                            [__Vilp11];
                        __Vilp11 = ((IData)(1U) + __Vilp11);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1852__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1852__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1853__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1853__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1855__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1855__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1857__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1857__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1802__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1764__data;
                if (VL_UNLIKELY(((0U != (7U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs 
                                               >> 8U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:98: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 98, "", false);
                }
            } while ((0x00001000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk1__DOT__acs));
        }
        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__wait_sba) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs = 0;
            do {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__address = 0x38U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__data = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__op = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles = 8U;
                do {
                    if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1860__dmireset = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1860__dmireset = 0x00010000U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__data 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1860__dmireset;
                        for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[__Vi0] = 0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data_packed = 0;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__data;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i)] 
                                = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data_packed 
                                         >> (0x0000001fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode = 0x10U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862____Vlvbound_h6c7258af__0 = 0;
                        {
                            for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[__Vi0] = 0;
                            }
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode))) {
                                goto __Vlabel8;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i)) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862____Vlvbound_h6c7258af__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i))));
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i))))) {
                                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i)] 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862____Vlvbound_h6c7258af__0;
                                }
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1863__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1863__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1865__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1865__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1867__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1867__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1869__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1869__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[0U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[0U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[1U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[1U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[2U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[2U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[3U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[3U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata[4U] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode_unpacked[4U];
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i = 0U;
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                     nullptr, 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1871__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1875__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1875__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1877__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1877__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1862__opcode;
                            __Vlabel8: ;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1880__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1880__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1882__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1882__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1884__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1884__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[5U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[5U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[6U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[6U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[7U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[7U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[8U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[8U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[9U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[9U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[10U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[10U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[11U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[11U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[12U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[12U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[13U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[13U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[14U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[14U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[15U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[15U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[16U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[16U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[17U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[17U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[18U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[18U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[19U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[19U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[20U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[20U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[21U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[21U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[22U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[22U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[23U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[23U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[24U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[24U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[25U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[25U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[26U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[26U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[27U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[27U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[28U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[28U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[29U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[29U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[30U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[30U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata[31U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1861__write_data[31U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__wdata
                                [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i)];
                            if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1886__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1890__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1890__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1891__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1891__tms_val;
                            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                                "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1893__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1893__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1895__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1895__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__address 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__address;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h11f95d0f__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h996247a8__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h4c9398d3__0 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__op = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__read_data[__Vi0] = 0;
                    }
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x0000007fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__address)))) 
                                   << 0x00000022U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h4c9398d3__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h4c9398d3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode = 0x11U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898____Vlvbound_h6c7258af__0 = 0;
                    {
                        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[__Vi0] = 0;
                        }
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode))) {
                            goto __Vlabel9;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i)) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898____Vlvbound_h6c7258af__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i))));
                            if (VL_LIKELY(((4U >= (7U 
                                                   & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i))))) {
                                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i)] 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898____Vlvbound_h6c7258af__0;
                            }
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1899__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1899__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1901__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1901__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1903__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1903__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1905__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1905__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[0U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[0U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[1U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[1U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[2U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[2U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[3U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[3U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata[4U] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode_unpacked[4U];
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i = 0U;
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                                 nullptr, 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1907__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1911__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1911__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1913__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1913__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1898__opcode;
                        __Vlabel9: ;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1916__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1916__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1918__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1918__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1920__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1920__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__tms_last = 1U;
                    __Vilp12 = 0U;
                    while ((__Vilp12 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__wdata[__Vilp12] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data
                            [__Vilp12];
                        __Vilp12 = ((IData)(1U) + __Vilp12);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1922__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1926__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1926__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1927__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1927__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1929__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1929__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1931__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1931__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__cycles 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1933__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1938__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1938__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1940__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1940__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1942__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1942__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__address)))) 
                           << 0x00000022U);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h996247a8__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data_packed 
                                                 >> 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h996247a8__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__tms_last = 1U;
                    __Vilp13 = 0U;
                    while ((__Vilp13 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__wdata[__Vilp13] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__write_data
                            [__Vilp13];
                        __Vilp13 = ((IData)(1U) + __Vilp13);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944____Vlvbound_hd64afdb0__0 = 0;
                    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__rdata[__Vi0] = 0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__wdata
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i)]);
                        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944____Vlvbound_hd64afdb0__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944____Vlvbound_hd64afdb0__0;
                        }
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__unnamedblk6__DOT__i);
                    }
                    __Vilp14 = 0U;
                    while ((__Vilp14 <= 0x00000028U)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__read_data[__Vilp14] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1944__rdata
                            [__Vilp14];
                        __Vilp14 = ((IData)(1U) + __Vilp14);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1947__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1947__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1948__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1948__tms_val;
                        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1950__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1950__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1952__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1952__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h11f95d0f__0 
                            = ((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__read_data
                               [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out 
                                = (((~ (1ULL << (0x0000003fU 
                                                 & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out) 
                                   | (0x000001ffffffffffULL 
                                      & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897____Vlvbound_h11f95d0f__0)) 
                                         << (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__data 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__data;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__op 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1897__op;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__trial_idx);
                } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__op)));
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1859__data;
                if (VL_UNLIKELY(((0U != (7U & ((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs 
                                                >> 0x0000000cU) 
                                               | (1U 
                                                  & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs 
                                                     >> 0x00000016U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:105: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("../rtl/test/croc_vip.sv", 105, "", false);
                }
            } while ((0x00200000U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write__1727__unnamedblk2__DOT__sbcs));
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1954__cycles 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__idle_cycles;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__cycles 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__wait_idle__1954__cycles;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1955__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__address = 0x3cU;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__data = 0;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__op = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles = 8U;
        do {
            if ((0U != __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1960__dmireset = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1960__dmireset = 0x00010000U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__data 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__reset_dmi__1960__dmireset;
                for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[__Vi0] = 0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data_packed = 0;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__data;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[(0x0000001fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i)] 
                        = (1U & (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data_packed 
                                 >> (0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode = 0x10U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962____Vlvbound_h6c7258af__0 = 0;
                {
                    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[__Vi0] = 0;
                    }
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode))) {
                        goto __Vlabel10;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i)) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962____Vlvbound_h6c7258af__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i))));
                        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i))))) {
                            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i)] 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962____Vlvbound_h6c7258af__0;
                        }
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1963__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1963__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1965__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1965__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1967__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1967__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1969__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1969__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[0U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[0U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[1U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[1U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[2U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[2U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[3U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[3U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata[4U] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode_unpacked[4U];
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i = 0U;
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                             nullptr, 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1971__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1975__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1975__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1977__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1977__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1962__opcode;
                    __Vlabel10: ;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1980__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1980__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1982__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1982__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1984__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1984__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[0U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[0U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[1U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[1U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[2U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[2U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[3U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[3U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[4U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[4U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[5U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[5U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[6U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[6U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[7U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[7U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[8U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[8U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[9U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[9U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[10U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[10U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[11U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[11U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[12U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[12U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[13U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[13U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[14U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[14U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[15U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[15U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[16U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[16U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[17U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[17U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[18U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[18U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[19U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[19U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[20U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[20U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[21U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[21U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[22U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[22U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[23U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[23U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[24U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[24U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[25U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[25U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[26U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[26U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[27U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[27U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[28U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[28U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[29U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[29U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[30U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[30U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata[31U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dtmcs__1961__write_data[31U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__wdata
                        [(0x0000001fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i)];
                    if ((0x0000001fU == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1986__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1990__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1990__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1991__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1991__tms_val;
                    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1993__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1993__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1995__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1995__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__address 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__address;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h11f95d0f__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h996247a8__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h4c9398d3__0 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__op = 0;
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__read_data[__Vi0] = 0;
            }
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data[__Vi0] = 0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed 
                = (1ULL | ((QData)((IData)((0x0000007fU 
                                            & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__address)))) 
                           << 0x00000022U));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h4c9398d3__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed 
                                         >> (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i)))));
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h4c9398d3__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode = 0x11U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998____Vlvbound_h6c7258af__0 = 0;
            {
                for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[__Vi0] = 0;
                }
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode))) {
                    goto __Vlabel11;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i)) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998____Vlvbound_h6c7258af__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i))));
                    if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i))))) {
                        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i)] 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998____Vlvbound_h6c7258af__0;
                    }
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1999__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1999__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2001__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2001__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2003__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2003__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2005__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2005__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[0U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[0U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[1U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[1U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[2U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[2U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[3U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[3U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata[4U] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode_unpacked[4U];
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i = 0U;
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2007__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2011__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2011__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2013__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2013__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1998__opcode;
                __Vlabel11: ;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2016__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2016__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2018__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2018__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2020__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2020__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__tms_last = 1U;
            __Vilp15 = 0U;
            while ((__Vilp15 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__wdata[__Vilp15] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data
                    [__Vilp15];
                __Vilp15 = ((IData)(1U) + __Vilp15);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__wdata
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i)]);
                if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__tms_last;
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
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2022__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2026__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2026__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2027__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2027__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2029__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2029__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__cycles 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__wait_cycles;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__2033__tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2042__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2042__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed 
                = ((QData)((IData)((0x0000007fU & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__address)))) 
                   << 0x00000022U);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h996247a8__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data_packed 
                                         >> (0x0000003fU 
                                             & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i)))));
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h996247a8__0;
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__tms_last = 1U;
            __Vilp16 = 0U;
            while ((__Vilp16 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__wdata[__Vilp16] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__write_data
                    [__Vilp16];
                __Vilp16 = ((IData)(1U) + __Vilp16);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044____Vlvbound_hd64afdb0__0 = 0;
            for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__rdata[__Vi0] = 0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__wdata
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i)]);
                if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044____Vlvbound_hd64afdb0__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo;
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__rdata[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i)] 
                        = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044____Vlvbound_hd64afdb0__0;
                }
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__unnamedblk6__DOT__i);
            }
            __Vilp17 = 0U;
            while ((__Vilp17 <= 0x00000028U)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__read_data[__Vilp17] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__2044__rdata
                    [__Vilp17];
                __Vilp17 = ((IData)(1U) + __Vilp17);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2047__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2047__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2048__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2048__tms_val;
                Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                                   "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
                co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2050__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2050__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2052__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2052__tms_val;
            Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                               "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
            co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i = 0U;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i)) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h11f95d0f__0 
                    = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__read_data
                       [(0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i)]);
                if (VL_LIKELY(((0x28U >= (0x0000003fU 
                                          & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i))))) {
                    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out 
                        = (((~ (1ULL << (0x0000003fU 
                                         & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out) 
                           | (0x000001ffffffffffULL 
                              & ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997____Vlvbound_h11f95d0f__0)) 
                                 << (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__data 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__data;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__op 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi__1997__op;
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__wait_cycles);
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__trial_idx);
        } while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__op)));
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1959__data;
        VL_WRITEF_NX("@%t | [JTAG] Read 0x%x from 0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data,
                     32,__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__addr);
        Verilated::runFlushCallbacks();
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_read_reg32__1499__data;
        if (VL_UNLIKELY(((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata 
                          != vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__data)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:179: Assertion failed in %Ntb_croc_soc.i_vip.jtag_write_reg32.unnamedblk3: @%t | [JTAG] Read back incorrect data 0x%x!\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12,32,__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_write_reg32__812__unnamedblk3__DOT__rdata);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../rtl/test/croc_vip.sv", 179, "", false);
        } else {
            VL_WRITEF_NX("@%t | [JTAG] Read back correct data\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
            Verilated::runFlushCallbacks();
        }
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__filename 
        = vlSelfRef.tb_croc_soc__DOT__binary_path;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__file = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__status = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__line = ""s;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__addr = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__data = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__byte_data = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__byte_count = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__file 
        = VL_FOPEN_NN(vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__filename
                      , "r"s);
    ;
    if ((0U == vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__file)) {
        if (VL_UNLIKELY(((0U == vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__file)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: croc_vip.sv:198: Assertion failed in %Ntb_croc_soc.i_vip.jtag_load_hex: Error: Failed to open file %@\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),-1,&(vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__filename));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../rtl/test/croc_vip.sv", 198, "", false);
        }
    }
    VL_WRITEF_NX("@%t | [JTAG] Loading binary from %@\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,-1,&(vlSelfRef.__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_load_hex__2054__filename));
    Verilated::runFlushCallbacks();
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__data = 0x00050000U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__address = 0x38U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055____Vlvbound_hceba7501__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data[__Vi0] = 0;
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data_packed = 0;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data_packed 
        = (2ULL | (((QData)((IData)((0x0000007fU & (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__address)))) 
                    << 0x00000022U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__data)) 
                                       << 2U)));
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i)) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055____Vlvbound_hceba7501__0 
            = ((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i)) 
               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data_packed 
                                 >> (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i)))));
        if (VL_LIKELY(((0x28U >= (0x0000003fU & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i))))) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data[(0x0000003fU 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i)] 
                = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055____Vlvbound_hceba7501__0;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__unnamedblk5__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056____Vlvbound_h6c7258af__0 = 0;
    {
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[__Vi0] = 0;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode))) {
            goto __Vlabel12;
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i)) {
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056____Vlvbound_h6c7258af__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i))));
            if (VL_LIKELY(((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i))))) {
                __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i)] 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056____Vlvbound_h6c7258af__0;
            }
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2057__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2057__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2059__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2059__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2061__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2061__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2063__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2063__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[0U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[0U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[1U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[1U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[2U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[2U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[3U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[3U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata[4U] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode_unpacked[4U];
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i = 0U;
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi = 
                ((4U >= (7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i)) 
                 && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__wdata
                 [(7U & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms 
                    = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__tms_last;
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
            __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2065__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2069__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2069__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2071__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2071__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2056__opcode;
        __Vlabel12: ;
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2074__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2074__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2076__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2076__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2078__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2078__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__tms_last = 1U;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x00000028U)) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__wdata[__Vilp18] 
            = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__write_dmi__2055__write_data
            [__Vilp18];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000029U, __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi = ((0x28U 
                                                 >= 
                                                 (0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i)) 
                                                && __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__wdata
                                                [(0x0000003fU 
                                                  & __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i)]);
        if ((0x00000028U == __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__tms_last;
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
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2080__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2084__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2084__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2085__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2085__tms_val;
        Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                           "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
        co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2087__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2087__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2089__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms = __Vtask_tb_croc_soc__DOT__i_vip__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2089__tms_val;
    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(vlSelf, 
                                                       "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    co_await vlSelfRef.__VtrigSched_h30612bdf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    co_return;
}
