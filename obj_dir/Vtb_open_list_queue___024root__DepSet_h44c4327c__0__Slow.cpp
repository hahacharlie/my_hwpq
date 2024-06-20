// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_open_list_queue.h for the primary calling header

#include "Vtb_open_list_queue__pch.h"
#include "Vtb_open_list_queue___024root.h"

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_static(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_final(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__stl(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_open_list_queue___024root___eval_phase__stl(Vtb_open_list_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_settle(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_open_list_queue___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_open_list_queue.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_open_list_queue___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__stl(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_open_list_queue___024root___stl_sequent__TOP__0(Vtb_open_list_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_stl(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_open_list_queue___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_open_list_queue___024root___stl_sequent__TOP__0(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__o_ready_enq = 
        (0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state);
    vlSelf->tb_open_list_queue__DOT__o_ready_deq = 
        ((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state) 
         || (1U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state));
    if ((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state)) {
        vlSelf->tb_open_list_queue__DOT__o_ready_rep = 1U;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state 
            = ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__i_read))
                ? 1U : 0U);
    } else {
        vlSelf->tb_open_list_queue__DOT__o_ready_rep = 0U;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size 
            = vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 0U;
    }
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

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_triggers__stl(Vtb_open_list_queue___024root* vlSelf);

VL_ATTR_COLD bool Vtb_open_list_queue___024root___eval_phase__stl(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_open_list_queue___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_open_list_queue___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_open_list_queue.CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_open_list_queue.CLK)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_open_list_queue.RSTn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__nba(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_open_list_queue.CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_open_list_queue.CLK)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_open_list_queue.RSTn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_open_list_queue___024root___ctor_var_reset(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_open_list_queue__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__RSTn = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__i_wrt = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__i_read = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__i_node_f = VL_RAND_RESET_I(32);
    vlSelf->tb_open_list_queue__DOT__o_ready_deq = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__o_ready_enq = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__o_ready_rep = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue);
    VL_RAND_RESET_W(128, vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue);
    VL_RAND_RESET_W(128, vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue);
    VL_RAND_RESET_W(128, vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue = VL_RAND_RESET_I(4);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state = 0;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
