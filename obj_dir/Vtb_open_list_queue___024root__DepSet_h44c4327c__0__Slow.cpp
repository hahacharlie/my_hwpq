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
            VL_FATAL_MT("tb_open_list_queue.sv", 9, "", "Settle region did not converge.");
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
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_open_list_queue.u_open_list_queue.OB or [hybrid] tb_open_list_queue.u_open_list_queue.IB)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_open_list_queue___024root___stl_sequent__TOP__0(Vtb_open_list_queue___024root* vlSelf);
void Vtb_open_list_queue___024root___act_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_open_list_queue___024root___eval_stl(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_open_list_queue___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_open_list_queue.u_open_list_queue.OB or [hybrid] tb_open_list_queue.u_open_list_queue.IB)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_open_list_queue.CLK or negedge tb_open_list_queue.RSTn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_open_list_queue.CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_open_list_queue.RSTn)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tb_open_list_queue.CLK)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_open_list_queue.u_open_list_queue.OB or [hybrid] tb_open_list_queue.u_open_list_queue.IB)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_open_list_queue.CLK or negedge tb_open_list_queue.RSTn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_open_list_queue.CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_open_list_queue.RSTn)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tb_open_list_queue.CLK)\n");
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
    vlSelf->tb_open_list_queue__DOT__i_node_i = VL_RAND_RESET_I(16);
    vlSelf->tb_open_list_queue__DOT__i_node_j = VL_RAND_RESET_I(16);
    vlSelf->tb_open_list_queue__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__o_node_f = VL_RAND_RESET_I(32);
    vlSelf->tb_open_list_queue__DOT__o_node_i = VL_RAND_RESET_I(16);
    vlSelf->tb_open_list_queue__DOT__o_node_j = VL_RAND_RESET_I(16);
    vlSelf->tb_open_list_queue__DOT__data_f = VL_RAND_RESET_I(32);
    vlSelf->tb_open_list_queue__DOT__data_i = VL_RAND_RESET_I(16);
    vlSelf->tb_open_list_queue__DOT__data_j = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count = 0;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count = 0;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr = 0;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr = 0;
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__1[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__1[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
