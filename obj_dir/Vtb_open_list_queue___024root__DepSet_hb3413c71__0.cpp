// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_open_list_queue.h for the primary calling header

#include "Vtb_open_list_queue__pch.h"
#include "Vtb_open_list_queue__Syms.h"
#include "Vtb_open_list_queue___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__2(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__0__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__1__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__2__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__3__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_f = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x75657565U;
    __Vtemp_1[2U] = 0x73745f71U;
    __Vtemp_1[3U] = 0x6e5f6c69U;
    __Vtemp_1[4U] = 0x5f6f7065U;
    __Vtemp_1[5U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    vlSelf->tb_open_list_queue__DOT__i_read = 0U;
    vlSelf->tb_open_list_queue__DOT__i_valid = 0U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = 0U;
    co_await vlSelf->__VtrigSched_h2918854e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.RSTn)", 
                                                       "tb_open_list_queue.sv", 
                                                       69);
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       70);
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_f = 5U;
    if ((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))) {
        VL_WRITEF_NX("Write data: %11d | Warning - The queue is full\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__0__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__0__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__0__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_valid = 1U;
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       95);
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_f = 2U;
    if ((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))) {
        VL_WRITEF_NX("Write data: %11d | Warning - The queue is full\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__1__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__1__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__1__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_valid = 1U;
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       95);
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_f = 3U;
    if ((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))) {
        VL_WRITEF_NX("Write data: %11d | Warning - The queue is full\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__2__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__2__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__2__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_valid = 1U;
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       95);
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_f = 7U;
    if ((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))) {
        VL_WRITEF_NX("Write data: %11d | Warning - The queue is full\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__3__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__3__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__3__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_valid = 1U;
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       95);
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    vlSelf->tb_open_list_queue__DOT__i_read = 1U;
    if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))) {
        VL_WRITEF_NX("Read data: %10#\n",0,32,vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]);
    } else {
        VL_WRITEF_NX("Error - The queue is empty\n",0);
    }
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    vlSelf->tb_open_list_queue__DOT__i_read = 0U;
    vlSelf->tb_open_list_queue__DOT__i_read = 1U;
    if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))) {
        VL_WRITEF_NX("Read data: %10#\n",0,32,vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]);
    } else {
        VL_WRITEF_NX("Error - The queue is empty\n",0);
    }
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    vlSelf->tb_open_list_queue__DOT__i_read = 0U;
    vlSelf->tb_open_list_queue__DOT__i_read = 1U;
    if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))) {
        VL_WRITEF_NX("Read data: %10#\n",0,32,vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]);
    } else {
        VL_WRITEF_NX("Error - The queue is empty\n",0);
    }
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    vlSelf->tb_open_list_queue__DOT__i_read = 0U;
    vlSelf->tb_open_list_queue__DOT__i_read = 1U;
    if ((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))) {
        VL_WRITEF_NX("Read data: %10#\n",0,32,vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]);
    } else {
        VL_WRITEF_NX("Error - The queue is empty\n",0);
    }
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    co_await vlSelf->__VtrigSched_hccc570a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       114);
    vlSelf->tb_open_list_queue__DOT__i_read = 0U;
    VL_FINISH_MT("tb_open_list_queue.sv", 84, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__act(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_open_list_queue___024root___eval_triggers__act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_open_list_queue__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_open_list_queue__DOT__CLK)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0 
        = vlSelf->tb_open_list_queue__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0 
        = vlSelf->tb_open_list_queue__DOT__RSTn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_open_list_queue___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_open_list_queue___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__4(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__5(void* voidSelf, bool even_cycle);

void Vtb_open_list_queue___024root___eval_nba(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vtb_open_list_queue___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vtb_open_list_queue___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vtb_open_list_queue___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(3)->addTask(&Vtb_open_list_queue___024root____Vthread__nba__3, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(4)->addTask(&Vtb_open_list_queue___024root____Vthread__nba__4, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vtb_open_list_queue___024root____Vthread__nba__5(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__4(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask4(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask4\n"); );
    // Body
    Verilated::mtaskId(4);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__5(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask5(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask5\n"); );
    // Body
    Verilated::mtaskId(5);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__6(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask6(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask6\n"); );
    // Body
    Verilated::mtaskId(6);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__7(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask7(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask7\n"); );
    // Body
    Verilated::mtaskId(7);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__12(Vtb_open_list_queue___024root* vlSelf);
void Vtb_open_list_queue___024root___nba_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask12(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask12\n"); );
    // Body
    Verilated::mtaskId(12);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__13(Vtb_open_list_queue___024root* vlSelf);
void Vtb_open_list_queue___024root___nba_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask13(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask13\n"); );
    // Body
    Verilated::mtaskId(13);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_comb__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_comb__TOP__2(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask14(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask14\n"); );
    // Body
    Verilated::mtaskId(14);
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__0\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_14.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask14(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__1\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__2\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__3\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__4(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__4\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask13(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__5(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__5\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask12(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
