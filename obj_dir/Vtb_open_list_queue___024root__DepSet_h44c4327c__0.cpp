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
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__2(vlSelf);
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
                                           49);
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
                                       54);
    vlSelf->tb_open_list_queue__DOT__RSTn = 0U;
    co_await vlSelf->__VtrigSched_hccc57167__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       55);
    co_await vlSelf->__VtrigSched_hccc57167__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       55);
    vlSelf->tb_open_list_queue__DOT__RSTn = 1U;
}

void Vtb_open_list_queue___024root___act_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root___eval_act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_act\n"); );
    // Body
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___act_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state 
        = ((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state)
            ? ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))
                ? 1U : 0U) : 0U);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid;
    if (((IData)(vlSelf->tb_open_list_queue__DOT__i_wrt) 
         & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
        if ((((vlSelf->tb_open_list_queue__DOT__i_node_f 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]) 
              & (vlSelf->tb_open_list_queue__DOT__i_node_f 
                 < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U])) 
             & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)) 
                | (vlSelf->tb_open_list_queue__DOT__i_node_f 
                   < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U])))) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
        } else {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid));
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] = 0xffffffffU;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
        }
    } else if (vlSelf->tb_open_list_queue__DOT__i_wrt) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size)));
        if ((((vlSelf->tb_open_list_queue__DOT__i_node_f 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]) 
              & (vlSelf->tb_open_list_queue__DOT__i_node_f 
                 < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U])) 
             & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)) 
                | (vlSelf->tb_open_list_queue__DOT__i_node_f 
                   < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U])))) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
                   | (1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        } else {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid));
        }
    } else if (vlSelf->tb_open_list_queue__DOT__i_read) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = (0xfU & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size) 
                       - (IData)(1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | (1U & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__i_wrt)) 
                    | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
                       <= vlSelf->tb_open_list_queue__DOT__i_node_f))));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = (4U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]) 
              << 3U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 3U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue));
    if ((1U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((1U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((2U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((2U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((4U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((4U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (8U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (8U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else if ((IData)(((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                            >> 3U)) & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                                       >> 3U)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (8U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (8U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)) 
               & (~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (1U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                   >> 1U)) & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid) 
                                 >> 1U))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                   >> 2U)) & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid) 
                                 >> 2U))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__4(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->tb_open_list_queue__DOT__RSTn) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U];
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] = 0xffffffffU;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__5(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid 
        = ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn)
            ? (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)
            : 0U);
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__6(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->tb_open_list_queue__DOT__RSTn) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U];
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U] = 0xffffffffU;
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__7(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid 
        = ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn)
            ? (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)
            : 0U);
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__12(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size 
        = ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn)
            ? (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size)
            : 0U);
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
    if (((IData)(vlSelf->tb_open_list_queue__DOT__i_wrt) 
         & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
    } else if (vlSelf->tb_open_list_queue__DOT__i_wrt) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size)));
    } else if (vlSelf->tb_open_list_queue__DOT__i_read) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = (0xfU & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_sequent__TOP__13(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_sequent__TOP__13\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_open_list_queue__DOT__RSTn)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__i = 4U;
    }
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state 
        = ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn)
            ? vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state
            : 0U);
    vlSelf->tb_open_list_queue__DOT__o_ready_enq = 
        (0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state);
    vlSelf->tb_open_list_queue__DOT__o_ready_deq = 
        ((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state) 
         || (1U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state));
    vlSelf->tb_open_list_queue__DOT__o_ready_rep = 
        (0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state);
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state 
        = ((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state)
            ? ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))
                ? 1U : 0U) : 0U);
}

VL_INLINE_OPT void Vtb_open_list_queue___024root___nba_comb__TOP__2(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] = 0xffffffffU;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
        = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid;
    if (((IData)(vlSelf->tb_open_list_queue__DOT__i_wrt) 
         & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))) {
        if ((((vlSelf->tb_open_list_queue__DOT__i_node_f 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]) 
              & (vlSelf->tb_open_list_queue__DOT__i_node_f 
                 < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U])) 
             & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)) 
                | (vlSelf->tb_open_list_queue__DOT__i_node_f 
                   < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U])))) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
        } else {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid));
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] = 0xffffffffU;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
        }
    } else if (vlSelf->tb_open_list_queue__DOT__i_wrt) {
        if ((((vlSelf->tb_open_list_queue__DOT__i_node_f 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]) 
              & (vlSelf->tb_open_list_queue__DOT__i_node_f 
                 < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U])) 
             & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)) 
                | (vlSelf->tb_open_list_queue__DOT__i_node_f 
                   < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U])))) {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U];
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
                   | (1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        } else {
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U] 
                = vlSelf->tb_open_list_queue__DOT__i_node_f;
            vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
                = (1U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid));
        }
    } else if (vlSelf->tb_open_list_queue__DOT__i_read) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue = 0U;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | (1U & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__i_wrt)) 
                    | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
                       <= vlSelf->tb_open_list_queue__DOT__i_node_f))));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)) 
           | (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U] 
              < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 1U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 2U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = (4U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue 
        = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]) 
              << 3U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue 
        = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue)) 
           | ((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U] 
               < vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]) 
              << 3U));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue));
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue 
        = (8U | (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue));
    if ((1U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((1U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((2U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((2U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((4U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue) 
                & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue)) 
               & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else if ((4U & (((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue) 
                       & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue)) 
                      & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (8U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (8U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    } else if ((IData)(((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                            >> 3U)) & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                                       >> 3U)))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (8U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid)));
    } else {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid 
            = ((7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid)) 
               | (8U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid) 
                        << 1U)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid)) 
               & (~ (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xeU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (1U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                   >> 1U)) & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid) 
                                 >> 1U))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xdU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (2U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                   >> 2U)) & (~ ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid) 
                                 >> 2U))))) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U] 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U];
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = ((0xbU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid)) 
               | (4U & ((IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid) 
                        >> 1U)));
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U] = 0xffffffffU;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid 
            = (7U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid));
    }
}

void Vtb_open_list_queue___024root___timing_resume(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hccc57167__0.resume("@(negedge tb_open_list_queue.CLK)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2918854e__0.resume("@(posedge tb_open_list_queue.RSTn)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hccc570a6__0.resume("@(posedge tb_open_list_queue.CLK)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_open_list_queue___024root___timing_commit(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hccc57167__0.commit("@(negedge tb_open_list_queue.CLK)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2918854e__0.commit("@(posedge tb_open_list_queue.RSTn)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hccc570a6__0.commit("@(posedge tb_open_list_queue.CLK)");
    }
}

void Vtb_open_list_queue___024root___eval_triggers__act(Vtb_open_list_queue___024root* vlSelf);

bool Vtb_open_list_queue___024root___eval_phase__act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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

void Vtb_open_list_queue___024root___eval_nba(Vtb_open_list_queue___024root* vlSelf);

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
            VL_FATAL_MT("tb_open_list_queue.sv", 6, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb_open_list_queue.sv", 6, "", "Active region did not converge.");
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
