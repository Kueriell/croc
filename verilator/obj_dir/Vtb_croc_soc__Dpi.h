// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_CROC_SOC__DPI_H_
#define VERILATED_VTB_CROC_SOC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../rtl/cve2/cve2_if_stage.sv:189:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../rtl/cve2/cve2_if_stage.sv:192:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);

#ifdef __cplusplus
}
#endif

#endif  // guard
