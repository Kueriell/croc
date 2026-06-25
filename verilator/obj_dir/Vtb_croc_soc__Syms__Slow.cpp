// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_croc_soc__pch.h"

void Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_key_TOP(Vtb_croc_soc__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_nonce_TOP(Vtb_croc_soc__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);

Vtb_croc_soc__Syms::Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(58748);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_clint", "i_clint", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__read = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_clint.read_write_fsm.read", "read", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__write = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_clint.read_write_fsm.write", "write", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core", "i_core", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__CVE2CsrOpValid = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.CVE2CsrOpValid", "CVE2CsrOpValid", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemRFWriteWithoutPendingLoad = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.NoMemRFWriteWithoutPendingLoad", "NoMemRFWriteWithoutPendingLoad", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemResponseWithoutPendingAccess = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.NoMemResponseWithoutPendingAccess", "NoMemResponseWithoutPendingAccess", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.cs_registers_i", "cs_registers_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i__CVE2CsrOpEnRequiresAccess = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.cs_registers_i.CVE2CsrOpEnRequiresAccess", "CVE2CsrOpEnRequiresAccess", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__ex_block_i__alu_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.ex_block_i.alu_i", "alu_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i", "id_stage_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2AluAOpMuxSelValid = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.CVE2AluAOpMuxSelValid", "CVE2AluAOpMuxSelValid", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2DuplicateInstrMatch = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.CVE2DuplicateInstrMatch", "CVE2DuplicateInstrMatch", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2ImmBMuxSelValid = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.CVE2ImmBMuxSelValid", "CVE2ImmBMuxSelValid", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexMulticycleEnableUnique = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.IbexMulticycleEnableUnique", "IbexMulticycleEnableUnique", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexStallIfValidInstrNotExecuting = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.IbexStallIfValidInstrNotExecuting", "IbexStallIfValidInstrNotExecuting", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IllegalInsnStallMustBeMemStall = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.IllegalInsnStallMustBeMemStall", "IllegalInsnStallMustBeMemStall", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__StallIDIfMulticycle = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.StallIDIfMulticycle", "StallIDIfMulticycle", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i", "controller_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2CtrlStateValid = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2CtrlStateValid", "CVE2CtrlStateValid", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2DontSkipExceptionReq = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2DontSkipExceptionReq", "CVE2DontSkipExceptionReq", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2ExceptionPrioOnehot = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2ExceptionPrioOnehot", "CVE2ExceptionPrioOnehot", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleExceptionReq = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2NoDoubleExceptionReq", "CVE2NoDoubleExceptionReq", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleSpecialReqPCSet = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2NoDoubleSpecialReqPCSet", "CVE2NoDoubleSpecialReqPCSet", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoPCSetOnSpecialReqIfNotExpected = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2NoPCSetOnSpecialReqIfNotExpected", "CVE2NoPCSetOnSpecialReqIfNotExpected", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2SetExceptionPCOnSpecialReqIfExpected = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i.CVE2SetExceptionPCOnSpecialReqIfExpected", "CVE2SetExceptionPCOnSpecialReqIfExpected", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__decoder_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i", "decoder_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__rf_wdata_id_mux = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.rf_wdata_id_mux", "rf_wdata_id_mux", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.if_stage_i", "if_stage_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.if_stage_i.prefetch_buffer_i.fifo_i", "fifo_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushFull = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.if_stage_i.prefetch_buffer_i.fifo_i.CVE2FetchFifoPushFull", "CVE2FetchFifoPushFull", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushPopFull = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.if_stage_i.prefetch_buffer_i.fifo_i.CVE2FetchFifoPushPopFull", "CVE2FetchFifoPushPopFull", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.load_store_unit_i", "load_store_unit_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i__CVE2LsuStateValid = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.load_store_unit_i.CVE2LsuStateValid", "CVE2LsuStateValid", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.wb_i", "wb_i", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i__RFWriteFromOneSourceOnly = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.wb_i.RFWriteFromOneSourceOnly", "RFWriteFromOneSourceOnly", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_csrs", "i_dm_csrs", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_csrs.csr_read_write", "csr_read_write", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem", "i_dm_mem", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem.p_abstract_cmd_rom", "p_abstract_cmd_rom", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem.p_rw_logic", "p_rw_logic", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag", "i_dmi_jtag", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_jtag_tap", "i_dmi_jtag_tap", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_jtag_tap.p_out_sel", "p_out_sel", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.p_fsm", "p_fsm", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_user.i_user_aes_de", "i_user_aes_de", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_fwd_key_expansion = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_user.i_user_aes_de.i_aes_de_acc.i_fwd_key_expansion", "i_fwd_key_expansion", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_inv_key_expansion = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_user.i_user_aes_de.i_aes_de_acc.i_inv_key_expansion", "i_inv_key_expansion", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_user.i_user_aes_en", "i_user_aes_en", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en__i_aes_en_acc__i_key_expansion_round = new VerilatedScope{this, "tb_croc_soc.i_croc_soc.i_user.i_user_aes_en.i_aes_en_acc.i_key_expansion_round", "i_key_expansion_round", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip = new VerilatedScope{this, "tb_croc_soc.i_vip", "i_vip", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip__jtag_init = new VerilatedScope{this, "tb_croc_soc.i_vip.jtag_init", "jtag_init", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip__jtag_load_hex = new VerilatedScope{this, "tb_croc_soc.i_vip.jtag_load_hex", "jtag_load_hex", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk1 = new VerilatedScope{this, "tb_croc_soc.i_vip.jtag_write.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk2 = new VerilatedScope{this, "tb_croc_soc.i_vip.jtag_write.unnamedblk2", "unnamedblk2", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_tb_croc_soc__i_vip__jtag_write_reg32__unnamedblk3 = new VerilatedScope{this, "tb_croc_soc.i_vip.jtag_write_reg32.unnamedblk3", "unnamedblk3", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i->exportInsert(0, "simutil_get_scramble_key", (void*)(&Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_key_TOP));
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i->exportInsert(0, "simutil_get_scramble_nonce", (void*)(&Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_nonce_TOP));
    // Setup export functions - final: 1
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i->exportInsert(1, "simutil_get_scramble_key", (void*)(&Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_key_TOP));
    __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i->exportInsert(1, "simutil_get_scramble_nonce", (void*)(&Vtb_croc_soc___024root____Vdpiexp_tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__simutil_get_scramble_nonce_TOP));
}

Vtb_croc_soc__Syms::~Vtb_croc_soc__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__read, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__read = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__write, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__write = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__CVE2CsrOpValid, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__CVE2CsrOpValid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemRFWriteWithoutPendingLoad, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemRFWriteWithoutPendingLoad = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemResponseWithoutPendingAccess, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemResponseWithoutPendingAccess = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i__CVE2CsrOpEnRequiresAccess, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i__CVE2CsrOpEnRequiresAccess = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__ex_block_i__alu_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__ex_block_i__alu_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2AluAOpMuxSelValid, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2AluAOpMuxSelValid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2DuplicateInstrMatch, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2DuplicateInstrMatch = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2ImmBMuxSelValid, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2ImmBMuxSelValid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexMulticycleEnableUnique, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexMulticycleEnableUnique = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexStallIfValidInstrNotExecuting, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexStallIfValidInstrNotExecuting = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IllegalInsnStallMustBeMemStall, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IllegalInsnStallMustBeMemStall = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__StallIDIfMulticycle, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__StallIDIfMulticycle = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2CtrlStateValid, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2CtrlStateValid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2DontSkipExceptionReq, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2DontSkipExceptionReq = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2ExceptionPrioOnehot, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2ExceptionPrioOnehot = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleExceptionReq, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleExceptionReq = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleSpecialReqPCSet, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleSpecialReqPCSet = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoPCSetOnSpecialReqIfNotExpected, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoPCSetOnSpecialReqIfNotExpected = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2SetExceptionPCOnSpecialReqIfExpected, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2SetExceptionPCOnSpecialReqIfExpected = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__decoder_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__decoder_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__rf_wdata_id_mux, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__rf_wdata_id_mux = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushFull, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushFull = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushPopFull, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushPopFull = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i__CVE2LsuStateValid, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i__CVE2LsuStateValid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i__RFWriteFromOneSourceOnly, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i__RFWriteFromOneSourceOnly = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm, __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de, __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_fwd_key_expansion, __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_fwd_key_expansion = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_inv_key_expansion, __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_inv_key_expansion = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en, __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en__i_aes_en_acc__i_key_expansion_round, __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en__i_aes_en_acc__i_key_expansion_round = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip, __Vscopep_tb_croc_soc__i_vip = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip__jtag_init, __Vscopep_tb_croc_soc__i_vip__jtag_init = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip__jtag_load_hex, __Vscopep_tb_croc_soc__i_vip__jtag_load_hex = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk1, __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk2, __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_croc_soc__i_vip__jtag_write_reg32__unnamedblk3, __Vscopep_tb_croc_soc__i_vip__jtag_write_reg32__unnamedblk3 = nullptr);
    // Tear down sub module instances
}

void Vtb_croc_soc__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_croc_soc__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_croc_soc__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
