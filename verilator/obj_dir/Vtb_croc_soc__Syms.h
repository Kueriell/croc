// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CROC_SOC__SYMS_H_
#define VERILATED_VTB_CROC_SOC__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_croc_soc.h"

// INCLUDE MODULE CLASSES
#include "Vtb_croc_soc___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtb_croc_soc__Vcb_simutil_get_scramble_key_t = void (*) (Vtb_croc_soc__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Vtb_croc_soc__Vcb_simutil_get_scramble_nonce_t = void (*) (Vtb_croc_soc__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_croc_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_croc_soc* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_croc_soc___024root         TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__read;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_clint__read_write_fsm__write;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__CVE2CsrOpValid;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemRFWriteWithoutPendingLoad;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__NoMemResponseWithoutPendingAccess;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__cs_registers_i__CVE2CsrOpEnRequiresAccess;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__ex_block_i__alu_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2AluAOpMuxSelValid;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2DuplicateInstrMatch;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__CVE2ImmBMuxSelValid;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexMulticycleEnableUnique;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IbexStallIfValidInstrNotExecuting;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__IllegalInsnStallMustBeMemStall;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__StallIDIfMulticycle;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2CtrlStateValid;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2DontSkipExceptionReq;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2ExceptionPrioOnehot;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleExceptionReq;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoDoubleSpecialReqPCSet;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2NoPCSetOnSpecialReqIfNotExpected;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__controller_i__CVE2SetExceptionPCOnSpecialReqIfExpected;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__decoder_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__id_stage_i__rf_wdata_id_mux;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushFull;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__if_stage_i__prefetch_buffer_i__fifo_i__CVE2FetchFifoPushPopFull;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__load_store_unit_i__CVE2LsuStateValid;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_core__wb_i__RFWriteFromOneSourceOnly;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_fwd_key_expansion;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_de__i_aes_de_acc__i_inv_key_expansion;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en;
    VerilatedScope* __Vscopep_tb_croc_soc__i_croc_soc__i_user__i_user_aes_en__i_aes_en_acc__i_key_expansion_round;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip__jtag_init;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip__jtag_load_hex;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk1;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip__jtag_write__unnamedblk2;
    VerilatedScope* __Vscopep_tb_croc_soc__i_vip__jtag_write_reg32__unnamedblk3;

    // CONSTRUCTORS
    Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp);
    ~Vtb_croc_soc__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
