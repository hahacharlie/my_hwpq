// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_open_list_queue.h for the primary calling header

#include "Vtb_open_list_queue__pch.h"
#include "Vtb_open_list_queue__Syms.h"
#include "Vtb_open_list_queue___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__stl(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_triggers__stl(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB.neq(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__0) 
                                     | vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB.neq(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__0.assign(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__0.assign(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_open_list_queue___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
