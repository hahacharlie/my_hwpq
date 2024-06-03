// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_open_list_queue.h for the primary calling header

#include "Vtb_open_list_queue__pch.h"
#include "Vtb_open_list_queue___024root.h"

VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_open_list_queue___024root* vlSelf);
VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_open_list_queue___024root* vlSelf);
VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__2(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root___eval_initial(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__0 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__0 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__1 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__1 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0 
        = vlSelf->tb_open_list_queue__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0 
        = vlSelf->tb_open_list_queue__DOT__RSTn;
}

VL_INLINE_OPT VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_open_list_queue.sv", 
                                           56);
        vlSelf->tb_open_list_queue__DOT__CLK = (1U 
                                                & (~ (IData)(vlSelf->tb_open_list_queue__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__RSTn = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_open_list_queue.sv", 
                                       61);
    vlSelf->tb_open_list_queue__DOT__RSTn = 0U;
    co_await vlSelf->__VtrigSched_hccc560ca__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       62);
    co_await vlSelf->__VtrigSched_hccc560ca__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       62);
    vlSelf->tb_open_list_queue__DOT__RSTn = 1U;
}

void Vtb_open_list_queue___024root___act_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf);
void Vtb_open_list_queue___024root___act_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root___eval_act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_act\n"); );
    // Body
    if ((0x30ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x31ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___act_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___act_comb__TOP__0\n"); );
    // Body
    if ((4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 1U;
    } else if ((2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state 
            = ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))
                ? 1U : ((9U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)
                         ? 1U : 3U));
    } else if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
        if (vlSelf->tb_open_list_queue__DOT__i_wrt) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 2U;
        } else if (vlSelf->tb_open_list_queue__DOT__i_read) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 4U;
        }
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 1U;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___act_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___act_comb__TOP__1\n"); );
    // Body
    if ((4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state)))) {
                if ((0xffffffffU != (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                             [0U] >> 0x20U)))) {
                    vlSelf->tb_open_list_queue__DOT__o_node_f 
                        = (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                   [0U] >> 0x20U));
                    vlSelf->tb_open_list_queue__DOT__o_valid = 1U;
                    vlSelf->tb_open_list_queue__DOT__o_node_i 
                        = (0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                              [0U] 
                                              >> 0x10U)));
                    vlSelf->tb_open_list_queue__DOT__o_node_j 
                        = (0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                             [0U]));
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[0U] = 0xffffffff00000000ULL;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
            if ((0xffffffffU == (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [0U] >> 0x20U)))) {
                if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                              [0U] >> 0x20U)) < (IData)(
                                                        (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                         [1U] 
                                                         >> 0x20U)))) {
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__0 
                        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                        [0U];
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[0U] 
                        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__0;
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[0U] = 0xffffffff00000000ULL;
                } else {
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__1 
                        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                        [1U];
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[0U] 
                        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__1;
                    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[1U] = 0xffffffff00000000ULL;
                }
            } else if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                 [0U] >> 0x20U)) < (IData)(
                                                           (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                            [1U] 
                                                            >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [1U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[1U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [0U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[1U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[0U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [0U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[1U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [1U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [2U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [2U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[2U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [1U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[2U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[1U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [1U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[2U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [2U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [3U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [3U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[3U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [2U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[3U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[2U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [2U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[3U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [3U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [4U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [4U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[4U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [3U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[4U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[3U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [3U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[4U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [4U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [5U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [5U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[5U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [4U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[5U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[4U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [4U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[5U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [5U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [6U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [6U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[6U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [5U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[6U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[5U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [5U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[6U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [6U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [7U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [7U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[7U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [6U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[7U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[6U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [6U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[7U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [7U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [8U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [8U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[8U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [7U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[8U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[7U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [7U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[8U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
            if (((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                          [8U] >> 0x20U)) < (IData)(
                                                    (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                     [9U] 
                                                     >> 0x20U)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                    [9U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[9U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                    [8U];
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[9U] 
                    = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[8U] = 0xffffffff00000000ULL;
            }
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                [8U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[9U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
        } else if ((9U != vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[0U] 
                = (((QData)((IData)(vlSelf->tb_open_list_queue__DOT__i_node_f)) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelf->tb_open_list_queue__DOT__i_node_i) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelf->tb_open_list_queue__DOT__i_node_j)))));
        }
    } else if ((1U & (~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[0U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[0U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[1U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[1U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[2U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[2U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[3U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[3U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[4U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[4U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[5U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[5U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[6U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[6U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[7U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[7U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[8U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[8U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[9U] = 0xffffffff00000000ULL;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[9U] = 0xffffffff00000000ULL;
    }
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__0(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root___eval_nba(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x32ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x33ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state 
        = ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn)
            ? (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state)
            : 0U);
    if ((1U & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr = 9U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state)))) {
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr = 0xaU;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count = 0U;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__valid = 0U;
                vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count = 0U;
            }
        }
    }
}

void Vtb_open_list_queue___024root___timing_resume(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hccc560ca__0.resume("@(negedge tb_open_list_queue.CLK)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h29188e73__0.resume("@(posedge tb_open_list_queue.RSTn)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hccc5600b__0.resume("@(posedge tb_open_list_queue.CLK)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_open_list_queue___024root___timing_commit(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hccc560ca__0.commit("@(negedge tb_open_list_queue.CLK)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h29188e73__0.commit("@(posedge tb_open_list_queue.RSTn)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hccc5600b__0.commit("@(posedge tb_open_list_queue.CLK)");
    }
}

void Vtb_open_list_queue___024root___eval_triggers__act(Vtb_open_list_queue___024root* vlSelf);

bool Vtb_open_list_queue___024root___eval_phase__act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_open_list_queue___024root___eval_triggers__act(vlSelf);
    Vtb_open_list_queue___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_open_list_queue___024root___timing_resume(vlSelf);
        Vtb_open_list_queue___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_open_list_queue___024root___eval_phase__nba(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_open_list_queue___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__nba(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__act(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_open_list_queue___024root___eval(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_open_list_queue___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_open_list_queue.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_open_list_queue___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_open_list_queue.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_open_list_queue___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_open_list_queue___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_open_list_queue___024root___eval_debug_assertions(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
