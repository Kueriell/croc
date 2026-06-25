// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "Vtb_croc_soc.h"
#include "Vtb_croc_soc__Syms.h"
#include "verilated_dpi.h"


int Vtb_croc_soc::simutil_get_scramble_key(svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root::simutil_get_scramble_key\n"); );
    // Locals
    VlWide<4>/*127:0*/ val__Vcvt;
    VL_ZERO_W(128, val__Vcvt);
    IData/*31:0*/ simutil_get_scramble_key__Vfuncrtn__Vcvt;
    simutil_get_scramble_key__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_key");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtb_croc_soc__Vcb_simutil_get_scramble_key_t __Vcb = reinterpret_cast<Vtb_croc_soc__Vcb_simutil_get_scramble_key_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb_croc_soc__Syms*)(__Vscopep->symsp()), val__Vcvt, simutil_get_scramble_key__Vfuncrtn__Vcvt);
    VL_SET_SVBV_W(128, val, val__Vcvt);
    int simutil_get_scramble_key__Vfuncrtn;
    simutil_get_scramble_key__Vfuncrtn = simutil_get_scramble_key__Vfuncrtn__Vcvt;
    return simutil_get_scramble_key__Vfuncrtn;
}

int Vtb_croc_soc::simutil_get_scramble_nonce(svBitVecVal* nonce) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root::simutil_get_scramble_nonce\n"); );
    // Locals
    VlWide<10>/*319:0*/ nonce__Vcvt;
    VL_ZERO_W(320, nonce__Vcvt);
    IData/*31:0*/ simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    simutil_get_scramble_nonce__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_nonce");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtb_croc_soc__Vcb_simutil_get_scramble_nonce_t __Vcb = reinterpret_cast<Vtb_croc_soc__Vcb_simutil_get_scramble_nonce_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtb_croc_soc__Syms*)(__Vscopep->symsp()), nonce__Vcvt, simutil_get_scramble_nonce__Vfuncrtn__Vcvt);
    VL_SET_SVBV_W(320, nonce, nonce__Vcvt);
    int simutil_get_scramble_nonce__Vfuncrtn;
    simutil_get_scramble_nonce__Vfuncrtn = simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    return simutil_get_scramble_nonce__Vfuncrtn;
}
