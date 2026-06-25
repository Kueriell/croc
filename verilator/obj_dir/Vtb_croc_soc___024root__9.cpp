// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"

void Vtb_croc_soc___024root___nba_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_81;
    __VdfgRegularize_h6e95ff9d_0_81 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_83;
    __VdfgRegularize_h6e95ff9d_0_83 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_86;
    __VdfgRegularize_h6e95ff9d_0_86 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_88;
    __VdfgRegularize_h6e95ff9d_0_88 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_91;
    __VdfgRegularize_h6e95ff9d_0_91 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_93;
    __VdfgRegularize_h6e95ff9d_0_93 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_96;
    __VdfgRegularize_h6e95ff9d_0_96 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_98;
    __VdfgRegularize_h6e95ff9d_0_98 = 0;
    // Body
    VL_ASSIGNSEL_WI(128, 32, 0x20U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__s3, 
                    (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__t2) 
                        ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                      >> 0x00000018U))) 
                       ^ ([&]() {
                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__a 
                                = (0x000000ffU & ((
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                      >> 0x00000018U)) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                      >> 0x00000010U))));
                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5736__Vfuncout))) 
                      << 0x00000018U) | ((0x00ff0000U 
                                          & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__t2) 
                                               ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                     >> 0x00000010U))) 
                                              ^ ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__a 
                                        = (0x000000ffU 
                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                  >> 0x00000010U)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    >> 8U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5737__Vfuncout))) 
                                             << 0x00000010U)) 
                                         | ((0x0000ff00U 
                                             & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__t2) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                      >> 8U))) 
                                                 ^ 
                                                 ([&]() {
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__a 
                                            = (0x000000ffU 
                                               & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                      >> 8U)) 
                                                  ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U]));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__a), 1U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5738__Vfuncout))) 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__t2) 
                                                   ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U]) 
                                                  ^ 
                                                  ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                  << 8U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U] 
                                                    >> 0x00000018U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__g_double__5739__Vfuncout))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w2)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w2 
                                                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[0U])))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w2)) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w2 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w1))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__w1))) 
                   >> 0x00000020U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[0U] 
           ^ ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__i_sbox_lut__out_o) 
                << 0x00000018U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__i_sbox_lut__out_o) 
                                   << 0x00000010U)) 
              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_sbox_lut__out_o) 
                  << 8U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_sbox_lut__out_o))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[1U] 
           ^ ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__i_sbox_lut__out_o) 
                << 0x00000018U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__i_sbox_lut__out_o) 
                                   << 0x00000010U)) 
              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__i_sbox_lut__out_o) 
                  << 8U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__i_sbox_lut__out_o))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[2U] 
           ^ (IData)((((QData)((IData)(((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__i_sbox_lut__out_o) 
                                          << 0x00000018U) 
                                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__i_sbox_lut__out_o) 
                                            << 0x00000010U)) 
                                        | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__i_sbox_lut__out_o) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__i_sbox_lut__out_o))))) 
                       << 0x00000020U) | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__i_sbox_lut__out_o) 
                                                            << 0x00000018U) 
                                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__i_sbox_lut__out_o) 
                                                              << 0x00000010U)) 
                                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__i_sbox_lut__out_o) 
                                                              << 8U) 
                                                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__i_sbox_lut__out_o))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[3U] 
           ^ (IData)(((((QData)((IData)(((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__i_sbox_lut__out_o) 
                                           << 0x00000018U) 
                                          | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__i_sbox_lut__out_o) 
                                             << 0x00000010U)) 
                                         | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__i_sbox_lut__out_o) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__i_sbox_lut__out_o))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__i_sbox_lut__out_o) 
                                                             << 0x00000018U) 
                                                            | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__i_sbox_lut__out_o) 
                                                               << 0x00000010U)) 
                                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__i_sbox_lut__out_o) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_sub_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__i_sbox_lut__out_o)))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w2)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w2 
                                                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__prev_key_i[0U])))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w2)) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w2 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__prev_key_i[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w1))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_key_expansion_round__DOT__w1))) 
                   >> 0x00000020U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_q[3U];
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__start_q) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__key_q[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__key_q[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__key_q[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__key_q[3U];
    } else if ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__fsm_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[3U];
    } else if ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__fsm_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__key_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__round_key_i[3U];
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0 
        = (0x000000ffU & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                      >> 0x00000018U)) 
                          ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                               << 0x00000010U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                  >> 0x00000010U)) 
                             ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                  >> 8U)) ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U]))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1 
        = (0x000000ffU & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                      >> 0x00000018U)) 
                          ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                               << 0x00000010U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                  >> 0x00000010U)) 
                             ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                  >> 8U)) ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U]))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2 
        = (0x000000ffU & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                      >> 0x00000018U)) 
                          ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                               << 0x00000010U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                  >> 0x00000010U)) 
                             ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                  >> 8U)) ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U]))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3 
        = (0x000000ffU & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                      >> 0x00000018U)) 
                          ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                               << 0x00000010U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                  >> 0x00000010U)) 
                             ^ (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                  >> 8U)) ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U]))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_q[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[0U] 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__start_q)) 
             & (9U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__cnt_q)))
             ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[0U]
             : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__s3[0U]) 
           ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[0U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[1U] 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__start_q)) 
             & (9U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__cnt_q)))
             ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[1U]
             : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__s3[1U]) 
           ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[1U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[2U] 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__start_q)) 
             & (9U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__cnt_q)))
             ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[2U]
             : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__s3[2U]) 
           ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[2U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[3U] 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__start_q)) 
             & (9U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__cnt_q)))
             ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__i_mix_columns__DOT__block_i[3U]
             : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__s3[3U]) 
           ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[3U]);
    __VdfgRegularize_h6e95ff9d_0_81 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0), 1U)));
    __VdfgRegularize_h6e95ff9d_0_86 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1), 1U)));
    __VdfgRegularize_h6e95ff9d_0_91 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2), 1U)));
    __VdfgRegularize_h6e95ff9d_0_96 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3), 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_q[3U];
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__start_q) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[3U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[3U];
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__running) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__key_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__round_key_i[3U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[0U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[0U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[1U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[2U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__state_d[3U] 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_en__DOT__i_aes_en_acc__DOT__i_aes_round__DOT__block_o[3U];
    }
    __VdfgRegularize_h6e95ff9d_0_83 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_81))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_81), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_81), 1U)));
    __VdfgRegularize_h6e95ff9d_0_88 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_86))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_86), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_86), 1U)));
    __VdfgRegularize_h6e95ff9d_0_93 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_91))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_91), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_91), 1U)));
    __VdfgRegularize_h6e95ff9d_0_98 = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_96))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_96), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_96), 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_0 
        = (0x000000ffU & ((0x00000080U & (IData)(__VdfgRegularize_h6e95ff9d_0_83))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_83), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_83), 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_1 
        = (0x000000ffU & ((0x00000080U & (IData)(__VdfgRegularize_h6e95ff9d_0_88))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_88), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_88), 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_2 
        = (0x000000ffU & ((0x00000080U & (IData)(__VdfgRegularize_h6e95ff9d_0_93))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_93), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_93), 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_3 
        = (0x000000ffU & ((0x00000080U & (IData)(__VdfgRegularize_h6e95ff9d_0_98))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_98), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(__VdfgRegularize_h6e95ff9d_0_98), 1U)));
    VL_ASSIGNSEL_WI(128, 32, 0x60U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4, 
                    (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_0) 
                          ^ ([&]() {
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6325__a 
                                            = (0x000000ffU 
                                               & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                      >> 0x00000018U)) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                      >> 8U))));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6325__a;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6327__Vfuncout;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6325__Vfuncout 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6326__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6325__Vfuncout))) 
                         ^ ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__a 
                                        = (0x000000ffU 
                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                << 8U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                  >> 0x00000018U)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                    >> 0x00000010U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6328__Vfuncout))) 
                        ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0)) 
                       ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                           << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                     >> 0x00000018U))) 
                      << 0x00000018U) | ((0x00ff0000U 
                                          & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_0) 
                                                 ^ 
                                                 ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6329__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                            >> 0x00000010U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6329__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6331__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6329__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6330__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6329__Vfuncout))) 
                                                ^ ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__a 
                                                = (0x000000ffU 
                                                   & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          >> 0x00000010U)) 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                        << 0x00000018U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          >> 8U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6332__Vfuncout))) 
                                               ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                    >> 0x00000010U))) 
                                             << 0x00000010U)) 
                                         | ((0x0000ff00U 
                                             & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_0) 
                                                    ^ 
                                                    ([&]() {
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6333__a 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                                >> 8U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                                >> 0x00000018U))));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6333__a;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6335__Vfuncout;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6333__Vfuncout 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6334__Vfuncout;
                                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6333__Vfuncout))) 
                                                   ^ 
                                                   ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          << 0x00000018U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                            >> 8U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__a), 1U)));
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6336__Vfuncout))) 
                                                  ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0)) 
                                                 ^ 
                                                 ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                     >> 8U))) 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_0) 
                                                     ^ 
                                                     ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6337__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                        ^ 
                                                        ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                            >> 0x00000010U))));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6337__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6339__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6337__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6338__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6337__Vfuncout))) 
                                                    ^ 
                                                    ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__a 
                                                = (0x000000ffU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                        << 8U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U] 
                                                          >> 0x00000018U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6340__Vfuncout))) 
                                                   ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t0)) 
                                                  ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U]))))));
    VL_ASSIGNSEL_WI(128, 32, 0x40U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4, 
                    (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_1) 
                          ^ ([&]() {
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6346__a 
                                            = (0x000000ffU 
                                               & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                      >> 0x00000018U)) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                      >> 8U))));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6346__a;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6348__Vfuncout;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6346__Vfuncout 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6347__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6346__Vfuncout))) 
                         ^ ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__a 
                                        = (0x000000ffU 
                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                << 8U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                  >> 0x00000018U)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                    >> 0x00000010U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6349__Vfuncout))) 
                        ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1)) 
                       ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                           << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                     >> 0x00000018U))) 
                      << 0x00000018U) | ((0x00ff0000U 
                                          & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_1) 
                                                 ^ 
                                                 ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6350__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                            >> 0x00000010U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6350__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6352__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6350__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6351__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6350__Vfuncout))) 
                                                ^ ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__a 
                                                = (0x000000ffU 
                                                   & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          >> 0x00000010U)) 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                        << 0x00000018U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          >> 8U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6353__Vfuncout))) 
                                               ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                    >> 0x00000010U))) 
                                             << 0x00000010U)) 
                                         | ((0x0000ff00U 
                                             & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_1) 
                                                    ^ 
                                                    ([&]() {
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6354__a 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                                >> 8U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                              << 8U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                                >> 0x00000018U))));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6354__a;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6356__Vfuncout;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6354__Vfuncout 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6355__Vfuncout;
                                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6354__Vfuncout))) 
                                                   ^ 
                                                   ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          << 0x00000018U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                            >> 8U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__a), 1U)));
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6357__Vfuncout))) 
                                                  ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1)) 
                                                 ^ 
                                                 ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                     >> 8U))) 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_1) 
                                                     ^ 
                                                     ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6358__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                        ^ 
                                                        ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                            >> 0x00000010U))));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6358__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6360__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6358__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6359__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6358__Vfuncout))) 
                                                    ^ 
                                                    ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__a 
                                                = (0x000000ffU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                        << 8U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U] 
                                                          >> 0x00000018U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6361__Vfuncout))) 
                                                   ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t1)) 
                                                  ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U]))))));
    VL_ASSIGNSEL_WI(128, 32, 0x20U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4, 
                    (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_2) 
                          ^ ([&]() {
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6367__a 
                                            = (0x000000ffU 
                                               & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                      >> 0x00000018U)) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                      >> 8U))));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6367__a;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6369__Vfuncout;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6367__Vfuncout 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6368__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6367__Vfuncout))) 
                         ^ ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__a 
                                        = (0x000000ffU 
                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                << 8U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                  >> 0x00000018U)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                    >> 0x00000010U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6370__Vfuncout))) 
                        ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2)) 
                       ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                           << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                     >> 0x00000018U))) 
                      << 0x00000018U) | ((0x00ff0000U 
                                          & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_2) 
                                                 ^ 
                                                 ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6371__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                            >> 0x00000010U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6371__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6373__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6371__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6372__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6371__Vfuncout))) 
                                                ^ ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__a 
                                                = (0x000000ffU 
                                                   & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          >> 0x00000010U)) 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          >> 8U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6374__Vfuncout))) 
                                               ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                    >> 0x00000010U))) 
                                             << 0x00000010U)) 
                                         | ((0x0000ff00U 
                                             & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_2) 
                                                    ^ 
                                                    ([&]() {
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6375__a 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                                >> 8U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                              << 8U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                                >> 0x00000018U))));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6375__a;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6377__Vfuncout;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6375__Vfuncout 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6376__Vfuncout;
                                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6375__Vfuncout))) 
                                                   ^ 
                                                   ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          << 0x00000018U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                            >> 8U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__a), 1U)));
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6378__Vfuncout))) 
                                                  ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2)) 
                                                 ^ 
                                                 ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                     >> 8U))) 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_2) 
                                                     ^ 
                                                     ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6379__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                        ^ 
                                                        ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                            >> 0x00000010U))));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6379__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6381__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6379__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6380__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6379__Vfuncout))) 
                                                    ^ 
                                                    ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__a 
                                                = (0x000000ffU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                        << 8U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U] 
                                                          >> 0x00000018U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6382__Vfuncout))) 
                                                   ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t2)) 
                                                  ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U]))))));
    VL_ASSIGNSEL_WI(128, 32, 0U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4, 
                    (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_3) 
                          ^ ([&]() {
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6388__a 
                                            = (0x000000ffU 
                                               & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                      >> 0x00000018U)) 
                                                  ^ 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                      >> 8U))));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6388__a;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__a 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6390__Vfuncout;
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__Vfuncout 
                                            = (0x000000ffU 
                                               & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__a), 1U)));
                                        vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6388__Vfuncout 
                                            = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6389__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6388__Vfuncout))) 
                         ^ ([&]() {
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__a 
                                        = (0x000000ffU 
                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                << 8U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                  >> 0x00000018U)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                    >> 0x00000010U))));
                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6391__Vfuncout))) 
                        ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3)) 
                       ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                           << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                     >> 0x00000018U))) 
                      << 0x00000018U) | ((0x00ff0000U 
                                          & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_3) 
                                                 ^ 
                                                 ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6392__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                            >> 0x00000010U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6392__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6394__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6392__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6393__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6392__Vfuncout))) 
                                                ^ ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__a 
                                                = (0x000000ffU 
                                                   & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          >> 0x00000010U)) 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                        << 0x00000018U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          >> 8U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6395__Vfuncout))) 
                                               ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3)) 
                                              ^ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                    >> 0x00000010U))) 
                                             << 0x00000010U)) 
                                         | ((0x0000ff00U 
                                             & ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_3) 
                                                    ^ 
                                                    ([&]() {
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6396__a 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                                >> 8U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                              << 8U) 
                                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                                >> 0x00000018U))));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6396__a;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__a 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6398__Vfuncout;
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__Vfuncout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((0x00000080U 
                                                             & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__a))
                                                             ? 
                                                            (0x1bU 
                                                             ^ 
                                                             VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__a), 1U))
                                                             : 
                                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__a), 1U)));
                                                    vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6396__Vfuncout 
                                                        = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6397__Vfuncout;
                                                }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6396__Vfuncout))) 
                                                   ^ 
                                                   ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          << 0x00000018U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                            >> 8U)) 
                                                        ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U]));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__a), 1U)));
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6399__Vfuncout))) 
                                                  ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3)) 
                                                 ^ 
                                                 ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                     >> 8U))) 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t8_3) 
                                                     ^ 
                                                     ([&]() {
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6400__a 
                                                    = 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                        ^ 
                                                        ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          << 0x00000010U) 
                                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                            >> 0x00000010U))));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6400__a;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__a 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6402__Vfuncout;
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__Vfuncout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((0x00000080U 
                                                         & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__a))
                                                         ? 
                                                        (0x1bU 
                                                         ^ 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__a), 1U))
                                                         : 
                                                        VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__a), 1U)));
                                                vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6400__Vfuncout 
                                                    = vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6401__Vfuncout;
                                            }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul4__6400__Vfuncout))) 
                                                    ^ 
                                                    ([&]() {
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__a 
                                                = (0x000000ffU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                      ^ 
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                        << 8U) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U] 
                                                          >> 0x00000018U))));
                                            vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__Vfuncout 
                                                = (0x000000ffU 
                                                   & ((0x00000080U 
                                                       & (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__a))
                                                       ? 
                                                      (0x1bU 
                                                       ^ 
                                                       VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__a), 1U))
                                                       : 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__a), 1U)));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__g_mul2__6403__Vfuncout))) 
                                                   ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__t3)) 
                                                  ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U]))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_q[3U];
    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__start_q)))) {
        if ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__fsm_q))) {
            if ((0x0aU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__cnt_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[0U] 
                    = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__block_cap_q[0U] 
                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[0U]);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[1U] 
                    = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__block_cap_q[1U] 
                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[1U]);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[2U] 
                    = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__block_cap_q[2U] 
                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[2U]);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[3U] 
                    = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__block_cap_q[3U] 
                       ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_fwd_key_expansion__DOT__next_key_o[3U]);
            }
        } else if ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__fsm_q))) {
            if ((0x0aU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__cnt_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[0U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[1U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[2U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__i_inv_mix_columns__DOT__block_i[3U];
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4[0U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4[1U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4[2U];
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__data_d[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_aes_de__DOT__i_aes_de_acc__DOT__i_inv_aes_round__DOT__s4[3U];
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h4f814333_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h8a016367_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h102087e8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h428df72f_0;

void Vtb_croc_soc___024root___nba_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*2:0*/ __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    if (vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0x1c0c5db3U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q = 0ULL;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                     >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__b_clear_o));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__b_isolate_o));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__a_clear_o));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__a_isolate_o));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vtableidx8 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select 
        = Vtb_croc_soc__ConstPool__TABLE_h4f814333_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select 
        = Vtb_croc_soc__ConstPool__TABLE_h8a016367_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vtb_croc_soc__ConstPool__TABLE_h102087e8_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vtb_croc_soc__ConstPool__TABLE_h428df72f_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
}

void Vtb_croc_soc___024root___nba_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                       & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err))) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d))))) {
        VL_WRITEF_NX("%Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.controller_i @ %t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                     -12,32,vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_id,
                     32,vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id);
        Verilated::runFlushCallbacks();
    }
}

void Vtb_croc_soc___024root___nba_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d;
}

void Vtb_croc_soc___024root___nba_sequent__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__9\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__jtag_tdo = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
                                            && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_n) 
           && ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h09ec9f6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hd9ef4396_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h761fc435_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h8218449e_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h7fb49284_0;

void Vtb_croc_soc___024root___nba_comb__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h09ec9f6f_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_hd9ef4396_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h761fc435_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h8218449e_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h7fb49284_0
        [__Vtableidx18];
}

void Vtb_croc_soc___024root___nba_comb__TOP__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx14 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h09ec9f6f_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_hd9ef4396_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h761fc435_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h8218449e_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h7fb49284_0
        [__Vtableidx14];
}

void Vtb_croc_soc___024root___nba_comb__TOP__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel))
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
}

void Vtb_croc_soc___024root___nba_comb__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel))
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
}

void Vtb_croc_soc___024root___nba_comb__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_43 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_44 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel))
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_45 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_46 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__req_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0x0fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i) 
                           << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

void Vtb_croc_soc___024root___nba_comb__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_52 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_53 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel))
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_54 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_55 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__req_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0x0fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i) 
                           << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

void Vtb_croc_soc___024root___nba_comb__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_16 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_17 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel))
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_18 = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_he50b618e_0_19 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0x0fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__data_i) 
                           << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_73 = ((0x0000001ffffffffcULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                      << 0x00000022U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[0U])) 
                                                        << 2U))) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_19) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_18)) 
                    << 0x00000026U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                            >> 1U)))) 
                                        << 0x00000025U) 
                                       | vlSelfRef.__VdfgRegularize_he50b618e_0_73)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[1U] 
        = ((0xffffff80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_18)) 
                        << 0x00000026U) | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                >> 1U)))) 
                                            << 0x00000025U) 
                                           | vlSelfRef.__VdfgRegularize_he50b618e_0_73)) 
                      >> 0x00000020U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[1U] 
        = ((0x0000007fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                        << 0x00000024U) | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                >> 2U)))) 
                                            << 0x00000023U) 
                                           | (0x00000007ffffffffULL 
                                              & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                  << 0x0000001dU) 
                                                 | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                    >> 3U)))))) 
              << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[2U] 
        = ((0xfffff000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[2U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                         << 0x00000024U) | (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                 >> 2U)))) 
                                             << 0x00000023U) 
                                            | (0x00000007ffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                   << 0x0000001dU) 
                                                  | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                     >> 3U)))))) 
               >> 0x00000019U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                    >> 2U)))) 
                                                << 0x00000023U) 
                                               | (0x00000007ffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                      << 0x0000001dU) 
                                                     | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                        >> 3U))))) 
                                           >> 0x00000020U)) 
                                  << 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[2U] 
        = ((0x00000fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_16)) 
                        << 0x00000024U) | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                >> 3U)))) 
                                            << 0x00000023U) 
                                           | (0x00000007ffffffffULL 
                                              & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                  << 0x0000001aU) 
                                                 | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                    >> 6U)))))) 
              << 0x0000000cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[3U] 
        = ((0xfffe0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[3U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_16)) 
                         << 0x00000024U) | (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                 >> 3U)))) 
                                             << 0x00000023U) 
                                            | (0x00000007ffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                   << 0x0000001aU) 
                                                  | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                     >> 6U)))))) 
               >> 0x00000014U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_16)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                    >> 3U)))) 
                                                << 0x00000023U) 
                                               | (0x00000007ffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                      << 0x0000001aU) 
                                                     | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                        >> 6U))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[3U] 
        = ((0x0001ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[3U]) 
           | ((IData)((0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                 << 0x00000017U) 
                                                | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                   >> 9U)))) 
              << 0x00000011U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_ports_rsp_o[4U] 
        = (0x000fffffU & (((IData)((0x00000007ffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                        << 0x00000017U) 
                                       | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                          >> 9U)))) 
                           >> 0x0000000fU) | ((IData)(
                                                      ((0x00000007ffffffffULL 
                                                        & (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                            << 0x00000017U) 
                                                           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                              >> 9U))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000011U)));
}

void Vtb_croc_soc___024root___nba_comb__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__9\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_clint__DOT__msip_q) 
            << 0x00000012U) | (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_clint__DOT__mtime_q 
                                 >= vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_clint__DOT__mtimecmp_q) 
                                << 0x00000011U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_uart_interrupts__reg_isr_o)) 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_timer__DOT__expired_sticky_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
           & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i = 0x0000000fU;
    while (VL_LTES_III(32, 0U, tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i)) {
        if ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                   >> (0x0000000fU & tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id 
                = (0x0000000fU & tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i);
        }
        tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i 
            = (tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i 
               - (IData)(1U));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
              & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                  >> 5U) & (0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i))));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h23304e2a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h2608d7a5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_he65bff1b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h053660a6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h139cf27b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h611732e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h7b340f8b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h27e1e6b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_hac9147c9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h1e2ce85a_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h9816e50e_0;
extern const VlWide<9>/*287:0*/ Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtb_croc_soc__ConstPool__TABLE_h0c298502_0;

void Vtb_croc_soc___024root___nba_sequent__TOP__10(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__10\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                  >> 3U)) && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                  >> 3U)) && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                  >> 3U)) && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                     >> 3U))) || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                     >> 3U))) || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                  >> 3U)) && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d));
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_new_id_d) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_id 
                = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_decompressed;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_set) 
             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h6ac50f1b_0_3))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_id = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                  >> 3U)) && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_1[2U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_1[3U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_1[4U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_1[5U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_1[6U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_1[7U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_1[8U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_1[9U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_1[10U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_1[11U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[10U];
    __Vtemp_1[12U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[11U];
    __Vtemp_1[13U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[12U];
    __Vtemp_1[14U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[13U];
    __Vtemp_1[15U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[14U];
    __Vtemp_1[16U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[15U];
    __Vtemp_1[17U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[16U];
    __Vtemp_1[18U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[17U];
    __Vtemp_1[19U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[18U];
    __Vtemp_1[20U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[19U];
    __Vtemp_1[21U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[20U];
    __Vtemp_1[22U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[21U];
    __Vtemp_1[23U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[22U];
    __Vtemp_1[24U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[23U];
    __Vtemp_1[25U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[24U];
    __Vtemp_1[26U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[25U];
    __Vtemp_1[27U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[26U];
    __Vtemp_1[28U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[27U];
    __Vtemp_1[29U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[28U];
    __Vtemp_1[30U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[29U];
    __Vtemp_1[31U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[30U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_wdata_i 
        = __Vtemp_1[(0x0000001fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                    >> 0x00000014U))];
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0 
        = (0U != (((2U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT____VdfgRegularize_h1ca708ed_0_4 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_fetch_err;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT____VdfgRegularize_h1ca708ed_0_4 = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id);
    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:592: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 592, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:628: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 628, "");
                                    }
                                }
                            }
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                      >> 0x0000001dU)) 
                               || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                              >> 0x0000001bU)) 
                                       || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                           >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x04000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x00002000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:306: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 306, "");
                        }
                    }
                }
                if ((0U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)) 
                                   || ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || ((0x40000000U 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)
                                            ? ((1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                            : ((1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))
                        : ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)) 
                                           || ((1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0000001cU)) 
                                               || ((1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                       >> 0x0000001bU)) 
                                                   || (0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                           >> 0x00000019U)))))))))));
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:566: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 566, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:323: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                              >> 0x0cU)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 323, "");
                    }
                }
            }
            if ((0U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__illegal_c_insn_id) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                          >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex = 0U;
                                                            } else {
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex = 0U;
                                                            }
                                                        } else if (
                                                                   (0x00001000U 
                                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex = 0U;
                                                        } else {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex = 0U;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex = 0U;
                                                        } else {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex = 0U;
                                                        }
                                                    } else if (
                                                               (0x00001000U 
                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex = 0U;
                                                    } else {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex = 0U;
                                                    }
                                                } else {
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                                            ? 0x0aU
                                                            : 0U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                        if ((0x00002000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)) {
                            if ((0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                        >> 0x0000001bU))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                               >> 0x0000001bU))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x00001000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id)
                                    ? 0x0aU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:1126: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("../rtl/cve2/cve2_decoder.sv", 1126, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
              == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:428: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/cve2/cve2_id_stage.sv", 428, "");
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
        = ((IData)(((0U == (0x000f8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)) 
                    & ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__mult_sel_ex));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__div_sel_ex));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__lsu_addr_incr_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    if ((1U & (~ VL_ONEHOT_I(((((4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))) 
                               << 1U) | ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                                         | (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != ((((4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                      | (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))) 
                     << 1U) | ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:393: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/cve2/cve2_alu.sv", 393, "");
            }
        }
    }
    __Vtableidx6 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtb_croc_soc__ConstPool__TABLE_h23304e2a_0
        [__Vtableidx6];
    __Vtableidx4 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtb_croc_soc__ConstPool__TABLE_h2608d7a5_0
        [__Vtableidx4];
    __Vtableidx3 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtb_croc_soc__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtb_croc_soc__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtb_croc_soc__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtb_croc_soc__ConstPool__TABLE_h053660a6_0
        [__Vtableidx3];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o)) 
           | ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o)) 
              | (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o))));
    __Vtableidx2 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h139cf27b_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h611732e7_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h7b340f8b_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h27e1e6b7_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_hac9147c9_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h1e2ce85a_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_2[2U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_2[3U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_2[4U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_2[5U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_2[6U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_2[7U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_2[8U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_2[9U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_2[10U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_2[11U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[10U];
    __Vtemp_2[12U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[11U];
    __Vtemp_2[13U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[12U];
    __Vtemp_2[14U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[13U];
    __Vtemp_2[15U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[14U];
    __Vtemp_2[16U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[15U];
    __Vtemp_2[17U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[16U];
    __Vtemp_2[18U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[17U];
    __Vtemp_2[19U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[18U];
    __Vtemp_2[20U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[19U];
    __Vtemp_2[21U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[20U];
    __Vtemp_2[22U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[21U];
    __Vtemp_2[23U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[22U];
    __Vtemp_2[24U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[23U];
    __Vtemp_2[25U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[24U];
    __Vtemp_2[26U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[25U];
    __Vtemp_2[27U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[26U];
    __Vtemp_2[28U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[27U];
    __Vtemp_2[29U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[28U];
    __Vtemp_2[30U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[29U];
    __Vtemp_2[31U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__register_file_i__DOT__rf_reg_q[30U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__addr_last_q
                : __Vtemp_2[(0x0000001fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                            >> 0x0000000fU))]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__lsu_addr_incr_req))
            ? ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : (((- (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                            >> 0x0000001fU))) 
                                                << 0x00000014U) 
                                               | ((((0x000001feU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0xfffff000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id)
                        : (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))))
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__lsu_wdata_i);
    if ((1U & (~ VL_ONEHOT_I(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                              << 1U))))) {
        if ((0U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                    << 1U))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:98: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/cve2/cve2_alu.sv", 98, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                               << 1U)))))) {
        if ((0U != ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                           << 1U)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:86: Assertion failed in %Ntb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("../rtl/cve2/cve2_alu.sv", 86, "");
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
               | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : (((4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access)
            ? (0x00000fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : 0U);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = (0x00000003ffffffffULL & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                      ? (1ULL | ((QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                 << 2U))
                                      : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x3fffffffU 
                                                               & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                              << 3U))
                                          : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x1fffffffU 
                                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                    << 4U))
                                              : (1ULL 
                                                 | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                                                    << 1U))))) 
                                    + (0x00000001ffffffffULL 
                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                           ? (~ ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                 << 1U))
                                           : ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                              << 1U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((QData)((IData)(
                                                                    ((8U 
                                                                      == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                        >> 0x1fU)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                                       ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i
                                                       : 
                                                      (- vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000020U > tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
            = (((~ ((IData)(1U) << (0x0000001fU & tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
               | (0x00000000ffffffffULL & ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x1fU) 
                                                      - tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i)))) 
                                           << (0x0000001fU 
                                               & tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i))));
        tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr 
                            = ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                         >> 5U))) || 
                               (1U & ((0x00000010U 
                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                       ? ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 2U)) 
                                              || (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))))
                                       : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 2U)) 
                                              || (1U 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))
                                           : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 2U)))));
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (((0x03a0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
         | ((0x03a1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
            | ((0x03a2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | ((0x03a3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                  | ((0x03b0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                     | ((0x03b1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                        | ((0x03b2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                           | ((0x03b3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                              | ((0x03b4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                 | ((0x03b5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                    | ((0x03b6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                       | ((0x03b7U 
                                           == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                          | ((0x03b8U 
                                              == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                             | ((0x03b9U 
                                                 == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                | ((0x03baU 
                                                    == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                   | ((0x03bbU 
                                                       == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                      | ((0x03bcU 
                                                          == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                         | ((0x03bdU 
                                                             == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                            | ((0x03beU 
                                                                == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                                                               | (0x03bfU 
                                                                  == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))))))))))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))));
    __Vtableidx7 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0x0000000cU & ((IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 1U)) 
                                               << 2U)) 
                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__load_store_unit_i__DOT__data_be 
        = Vtb_croc_soc__ConstPool__TABLE_h9816e50e_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 0U;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)) {
        if (((((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                        >> 3U)) << 2U) >= (((0U == 
                                             (0x0000001fU 
                                              & ((IData)(0x00000020U) 
                                                 + 
                                                 (0x000001ffU 
                                                  & ((IData)(0x00000044U) 
                                                     * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                                             ? 0U : 
                                            (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                             [(((IData)(0x0000003fU) 
                                                + (0x000001ffU 
                                                   & ((IData)(0x00000044U) 
                                                      * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                               >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000020U) 
                                                     + 
                                                     (0x000001ffU 
                                                      & ((IData)(0x00000044U) 
                                                         * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                                           | (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                              [(((IData)(0x00000020U) 
                                                 + 
                                                 (0x000001ffU 
                                                  & ((IData)(0x00000044U) 
                                                     * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000020U) 
                                                     + 
                                                     (0x000001ffU 
                                                      & ((IData)(0x00000044U) 
                                                         * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
             & ((((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                           >> 3U)) << 2U) < (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x00000044U) 
                                                   * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                               ? 0U
                                               : (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                                  [
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000001ffU 
                                                     & ((IData)(0x00000044U) 
                                                        * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000044U) 
                                                       * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                                             | (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                                [(0x0000000fU 
                                                  & (((IData)(0x00000044U) 
                                                      * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000044U) 
                                                    * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                | (0U == (((0U == (0x0000001fU & ((IData)(0x00000044U) 
                                                  * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                            ? 0U : (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                    [(((IData)(0x0000001fU) 
                                       + (0x000001ffU 
                                          & ((IData)(0x00000044U) 
                                             * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000044U) 
                                                      * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                          | (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                             [(0x0000000fU & (((IData)(0x00000044U) 
                                               * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                              >> 5U))] 
                             >> (0x0000001fU & ((IData)(0x00000044U) 
                                                * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
                = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules) 
                   | (0x0fU & ((IData)(1U) << (3U & tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o 
                = (7U & (((0U == (0x0000001fU & ((IData)(0x00000040U) 
                                                 + 
                                                 (0x000001ffU 
                                                  & ((IData)(0x00000044U) 
                                                     * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                           ? 0U : (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                                   [(((IData)(0x00000042U) 
                                      + (0x000001ffU 
                                         & ((IData)(0x00000044U) 
                                            * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000040U) 
                                                     + 
                                                     (0x000001ffU 
                                                      & ((IData)(0x00000044U) 
                                                         * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                         | (Vtb_croc_soc__ConstPool__CONST_h353ee8c4_0
                            [(((IData)(0x00000040U) 
                               + (0x000001ffU & ((IData)(0x00000044U) 
                                                 * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x00000040U) 
                                             + (0x000001ffU 
                                                & ((IData)(0x00000044U) 
                                                   * tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))));
        }
        tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i);
    }
    __Vtableidx5 = (((0U != (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                     >> 1U))) << 9U) 
                    | ((0x00000100U & ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                          ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                         >> 0x0000001fU)
                                         ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU) 
                                            ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 0x00000020U)))) 
                                       << 8U)) | ((
                                                   (0U 
                                                    == (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U))) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtb_croc_soc__ConstPool__TABLE_h0c298502_0
        [__Vtableidx5];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | ((IData)(((0x0c00U == (0x0c00U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                          & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_wr))) 
                 | ((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                           >> 8U)) > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__priv_lvl_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x00000010U 
                                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U)))))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT____VdfgRegularize_h1ca708ed_0_3 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT____VdfgRegularize_h1ca708ed_0_4));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
            | (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
               | ((3U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                     | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn)))))) 
           & (6U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h52c63d56_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h673659da_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_hb0393127_0;

void Vtb_croc_soc___024root___nba_comb__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__14\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    __Vtableidx25 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h52c63d56_0
        [__Vtableidx25];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h673659da_0
        [__Vtableidx25];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hb0393127_0
        [__Vtableidx25];
}

void Vtb_croc_soc___024root___nba_comb__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__15\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h52c63d56_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h673659da_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hb0393127_0
        [__Vtableidx13];
}

void Vtb_croc_soc___024root___nba_comb__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__16\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
            | ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)))
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q);
}

void Vtb_croc_soc___024root___nba_comb__TOP__24(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__24\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    __Vtableidx21 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h52c63d56_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h673659da_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hb0393127_0
        [__Vtableidx21];
}

void Vtb_croc_soc___024root___nba_comb__TOP__25(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__25\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h52c63d56_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h673659da_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hb0393127_0
        [__Vtableidx17];
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h8c90ddba_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h9fc3deb9_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_he1aee1b5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h9a8c6a43_0;

void Vtb_croc_soc___024root___nba_comb__TOP__26(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__26\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = ((((8U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                              << 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                          << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req))) 
                      << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                 << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h8c90ddba_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h9fc3deb9_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_he1aee1b5_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h9a8c6a43_0
        [__Vtableidx20];
}

void Vtb_croc_soc___024root___nba_comb__TOP__27(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__27\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = ((((8U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                              << 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                          << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req))) 
                      << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                 << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h8c90ddba_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h9fc3deb9_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_he1aee1b5_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h9a8c6a43_0
        [__Vtableidx16];
}

void Vtb_croc_soc___024root___nba_comb__TOP__28(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__28\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid) 
            | ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)))
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q);
}

void Vtb_croc_soc___024root___nba_sequent__TOP__11(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__11\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__synced_rst_n 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
}

void Vtb_croc_soc___024root___nba_comb__TOP__30(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__30\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 5U)))) {
                                if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                     >> 1U)))) {
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                    ? 0U
                                                    : 0x00000023U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x00000602U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))]);
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))]);
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))]);
                        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))]);
                        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))]);
                        }
                    }
                }
            }
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 2U)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 2U)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? 0U : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q)
                                    : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? (0x28001048U 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                              << 2U))
                                        : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                        }
                    }
                }
            }
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                              >> 6U)))) {
                    if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12U]))
                                        : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U])))
                                    : ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U]))
                                        : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12U]))
                                            : (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U])))
                                        : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U]))
                                            : (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U]))));
                            }
                        }
                    }
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0x0000000fU)));
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000080U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0x0000000aU)));
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000800U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 5U)));
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mip 
                                                  << 0x00000010U));
                                    }
                                }
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : ((0x80000000U 
                                                & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                   << 0x00000019U)) 
                                               | (0x0000003fU 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                        : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x0000001fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = (0xfffffff8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0x0000000fU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x0000000aU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000800U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 5U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x0000ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                              << 0x00000010U));
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40100104U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 3U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00001800U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 9U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00020000U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 0x00000010U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00200000U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 0x00000015U)));
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i 
        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o))
            ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o))
                ? ((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__wb_i__DOT__rf_wdata_id_i 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__cs_registers_i__DOT__csr_rdata_int
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__ex_block_i__DOT__alu_result);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__wb_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_core__DOT__wb_i__DOT__rf_wdata_id_i;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_he13f17e7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h7dfc2e72_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_heaba782e_0;

void Vtb_croc_soc___024root___nba_comb__TOP__31(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__31\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx23 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_he13f17e7_0
        [__Vtableidx23];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7dfc2e72_0
        [__Vtableidx23];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_heaba782e_0
        [__Vtableidx23];
}

void Vtb_croc_soc___024root___nba_comb__TOP__32(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__32\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_he13f17e7_0
        [__Vtableidx11];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7dfc2e72_0
        [__Vtableidx11];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_heaba782e_0
        [__Vtableidx11];
}

void Vtb_croc_soc___024root___nba_comb__TOP__37(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__37\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_he13f17e7_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7dfc2e72_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_heaba782e_0
        [__Vtableidx19];
}

void Vtb_croc_soc___024root___nba_comb__TOP__38(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__38\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_he13f17e7_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7dfc2e72_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_heaba782e_0
        [__Vtableidx15];
}

void Vtb_croc_soc___024root___nba_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__17(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__18(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__18(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__19(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__17(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__20(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__21(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__22(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__23(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__24(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__25(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__26(Vtb_croc_soc___024root* vlSelf);

void Vtb_croc_soc___024root___eval_nba(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_nba\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[34U] = 1U;
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000140000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[35U] = 1U;
        Vtb_croc_soc___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_croc_soc___024root___nba_sequent__TOP__4(vlSelf);
        Vtb_croc_soc___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[36U] = 1U;
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[37U] = 1U;
    }
    if ((0x0000001800000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000140020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000140000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[38U] = 1U;
    }
    if ((0x0000000140000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[39U] = 1U;
    }
    if ((0x0000000140004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000140800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[40U] = 1U;
    }
    if ((0x0000000140400000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[41U] = 1U;
    }
    if ((0x0000000141000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[42U] = 1U;
    }
    if ((0x0000000142000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[43U] = 1U;
    }
    if ((0x0000000140200000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[44U] = 1U;
    }
    if ((0x0000000140100000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[45U] = 1U;
    }
    if ((0x0000000140001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__14(vlSelf);
        vlSelfRef.__Vm_traceActivity[46U] = 1U;
    }
    if ((0x0000000140008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__15(vlSelf);
        vlSelfRef.__Vm_traceActivity[47U] = 1U;
    }
    if ((0x0000000140040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__16(vlSelf);
        vlSelfRef.__Vm_traceActivity[48U] = 1U;
    }
    if ((0x0000000140080000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[49U] = 1U;
    }
    if ((0x0000000140000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[50U] = 1U;
    }
    if ((0x0000000c00000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x0000000c00000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x0000000c40000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x0000002c40000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[51U] = 1U;
    }
    if ((0x0000000144800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x0000000160800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x0000000148400000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x0000000150400000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x0000000141040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[52U] = 1U;
    }
    if ((0x0000000142080000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[53U] = 1U;
    }
    if ((0x0000000140000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x0000000140000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x0000000140000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x0000000140000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((0x0000000540000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000140000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_sequent__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[54U] = 1U;
    }
    if ((0x0000000140100000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__30(vlSelf);
        vlSelfRef.__Vm_traceActivity[55U] = 1U;
    }
    if ((0x0000000d40000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0x0000000d40000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((0x0000002c40000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[56U] = 1U;
    }
    if ((0x0000002c40000008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[57U] = 1U;
    }
    if ((0x0000000160808000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x0000000150401000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x0000000d40000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__37(vlSelf);
    }
    if ((0x0000000d40000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___nba_comb__TOP__38(vlSelf);
    }
    if ((0x0000002d40000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__13(vlSelf);
        vlSelfRef.__Vm_traceActivity[58U] = 1U;
    }
    if ((0x0000002d40000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x0000000164808000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__16(vlSelf);
        vlSelfRef.__Vm_traceActivity[59U] = 1U;
    }
    if ((0x0000000158401000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[60U] = 1U;
    }
    if ((0x0000000173ec9000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__19(vlSelf);
        vlSelfRef.__Vm_traceActivity[61U] = 1U;
    }
    if ((0x0000000d40000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[62U] = 1U;
    }
    if ((0x0000000d40000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[63U] = 1U;
    }
    if ((0x0000002d40000618ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[64U] = 1U;
    }
    if ((0x000000017fec9000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__20(vlSelf);
        vlSelfRef.__Vm_traceActivity[65U] = 1U;
    }
    if ((0x0000000d400001e0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x000000017fec9001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__21(vlSelf);
        vlSelfRef.__Vm_traceActivity[66U] = 1U;
    }
    if ((0x000000017ffc9007ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__22(vlSelf);
        vlSelfRef.__Vm_traceActivity[67U] = 1U;
    }
    if ((0x000000017fff9007ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__23(vlSelf);
        vlSelfRef.__Vm_traceActivity[68U] = 1U;
    }
    if ((0x000000017ffcf007ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__24(vlSelf);
        vlSelfRef.__Vm_traceActivity[69U] = 1U;
    }
    if ((0x000000017ffcf807ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__25(vlSelf);
        vlSelfRef.__Vm_traceActivity[70U] = 1U;
    }
    if ((0x0000000d7ffcf867ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_croc_soc___024root___act_comb__TOP__26(vlSelf);
        vlSelfRef.__Vm_traceActivity[71U] = 1U;
    }
}

void Vtb_croc_soc___024root___timing_ready(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_ready\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000400000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h30612bdf__0.ready("@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2a53888c__0.ready("@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)");
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he1fd5bc5__0.ready("@(posedge tb_croc_soc.rst_n)");
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6059a1d8__0.ready("@(negedge (tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_register.reg_q[36] | tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_tx.txd_o))");
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4fcb5ba2__0.ready("@(posedge tb_croc_soc.i_vip.i_clk_rst_ref.clk)");
    }
}

void Vtb_croc_soc___024root___timing_resume(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_resume\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h30612bdf__0.moveToResumeQueue(
                                                          "@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    vlSelfRef.__VtrigSched_h2a53888c__0.moveToResumeQueue(
                                                          "@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)");
    vlSelfRef.__VtrigSched_he1fd5bc5__0.moveToResumeQueue(
                                                          "@(posedge tb_croc_soc.rst_n)");
    vlSelfRef.__VtrigSched_h6059a1d8__0.moveToResumeQueue(
                                                          "@(negedge (tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_register.reg_q[36] | tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_tx.txd_o))");
    vlSelfRef.__VtrigSched_h4fcb5ba2__0.moveToResumeQueue(
                                                          "@(posedge tb_croc_soc.i_vip.i_clk_rst_ref.clk)");
    vlSelfRef.__VtrigSched_h30612bdf__0.resume("@(posedge tb_croc_soc.i_vip.i_clk_jtag.clk)");
    vlSelfRef.__VtrigSched_h2a53888c__0.resume("@(posedge tb_croc_soc.i_vip.i_clk_rst_sys.clk)");
    vlSelfRef.__VtrigSched_he1fd5bc5__0.resume("@(posedge tb_croc_soc.rst_n)");
    vlSelfRef.__VtrigSched_h6059a1d8__0.resume("@(negedge (tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_register.reg_q[36] | tb_croc_soc.i_croc_soc.i_croc.i_uart.i_uart_tx.txd_o))");
    vlSelfRef.__VtrigSched_h4fcb5ba2__0.resume("@(posedge tb_croc_soc.i_vip.i_clk_rst_ref.clk)");
    if ((0x0000002000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_croc_soc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_croc_soc___024root___eval_triggers_vec__act(Vtb_croc_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_croc_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_croc_soc___024root___eval_act(Vtb_croc_soc___024root* vlSelf);

bool Vtb_croc_soc___024root___eval_phase__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_croc_soc___024root___eval_triggers_vec__act(vlSelf);
    Vtb_croc_soc___024root___timing_ready(vlSelf);
    Vtb_croc_soc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_croc_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_croc_soc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_croc_soc___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_croc_soc___024root___timing_resume(vlSelf);
        Vtb_croc_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_croc_soc___024root___eval_phase__inact(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__inact\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("../rtl/test/tb_croc_soc.sv", 11, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_croc_soc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_croc_soc___024root___eval_phase__nba(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__nba\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_croc_soc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_croc_soc___024root___eval_nba(vlSelf);
        Vtb_croc_soc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_croc_soc___024root___sample(Vtb_croc_soc___024root* vlSelf);

void Vtb_croc_soc___024root___eval(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vtb_croc_soc___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_croc_soc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/test/tb_croc_soc.sv", 11, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("../rtl/test/tb_croc_soc.sv", 11, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_croc_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("../rtl/test/tb_croc_soc.sv", 11, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_croc_soc___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_croc_soc___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_croc_soc___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0(Vtb_croc_soc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____VbeforeTrig_h30612bdf__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = ((QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk__0))) 
                                   << 2U))) << 0x00000020U);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_vip__DOT__i_clk_jtag__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h30612bdf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}
