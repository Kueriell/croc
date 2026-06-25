// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"

// Parameter definitions for Vtb_croc_soc___024root
constexpr VlUnpacked<IData/*31:0*/, 25> Vtb_croc_soc___024root::tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_bootrom__DOT__StartRom;
constexpr VlUnpacked<IData/*31:0*/, 5> Vtb_croc_soc___024root::tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_bootrom__DOT__EocRom;
constexpr VlUnpacked<IData/*31:0*/, 22> Vtb_croc_soc___024root::tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_bootrom__DOT__TrapHandlerRom;
constexpr VlUnpacked<IData/*31:0*/, 12> Vtb_croc_soc___024root::tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_bootrom__DOT__TrapExitRom;


void Vtb_croc_soc___024root___ctor_var_reset(Vtb_croc_soc___024root* vlSelf);

Vtb_croc_soc___024root::Vtb_croc_soc___024root(Vtb_croc_soc__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_croc_soc___024root___ctor_var_reset(this);
}

void Vtb_croc_soc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_croc_soc___024root::~Vtb_croc_soc___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
