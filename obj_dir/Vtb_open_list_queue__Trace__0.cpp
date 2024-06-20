// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_open_list_queue__Syms.h"


void Vtb_open_list_queue___024root__trace_chg_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_0\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U]),32);
    }
}

void Vtb_open_list_queue___024root__trace_chg_1_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_1\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_1_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_1_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_1_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U]),32);
        bufp->chgCData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid),4);
        bufp->chgCData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid),4);
        bufp->chgCData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue),4);
        bufp->chgCData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue),4);
    }
}

void Vtb_open_list_queue___024root__trace_chg_2_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_2\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_2_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_2_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_2_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 13);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue),4);
        bufp->chgCData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue),4);
        bufp->chgCData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]),32);
    }
}

void Vtb_open_list_queue___024root__trace_chg_3_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_3\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_3_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_3_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_3_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 19);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+5,(vlSelf->tb_open_list_queue__DOT__o_ready_deq));
    }
}

void Vtb_open_list_queue___024root__trace_chg_4_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_4\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_4_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_4_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_4_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 25);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_open_list_queue__DOT__o_ready_enq));
        bufp->chgBit(oldp+1,(vlSelf->tb_open_list_queue__DOT__o_ready_rep));
        bufp->chgIData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state),32);
    }
    bufp->chgBit(oldp+4,(vlSelf->tb_open_list_queue__DOT__CLK));
    bufp->chgBit(oldp+5,(vlSelf->tb_open_list_queue__DOT__RSTn));
}

void Vtb_open_list_queue___024root__trace_chg_5_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_5\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_5_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_5_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_5_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 31);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->tb_open_list_queue__DOT__i_wrt));
    bufp->chgBit(oldp+1,(vlSelf->tb_open_list_queue__DOT__i_read));
    bufp->chgBit(oldp+2,(vlSelf->tb_open_list_queue__DOT__i_valid));
    bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__i_node_f),32);
    bufp->chgBit(oldp+4,((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))));
    bufp->chgBit(oldp+5,((0U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))));
}

void Vtb_open_list_queue___024root__trace_chg_6_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_6\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_6_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_6_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_6_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 37);
    // Body
    bufp->chgBit(oldp+0,((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))));
    bufp->chgCData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size),4);
    bufp->chgCData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size),4);
    bufp->chgCData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid),4);
    bufp->chgCData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid),4);
    bufp->chgIData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state),32);
}

void Vtb_open_list_queue___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_cleanup\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
