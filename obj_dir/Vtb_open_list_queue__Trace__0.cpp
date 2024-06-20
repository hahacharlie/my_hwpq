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
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_open_list_queue__DOT__i_wrt));
        bufp->chgBit(oldp+1,(vlSelf->tb_open_list_queue__DOT__i_valid));
        bufp->chgIData(oldp+2,(vlSelf->tb_open_list_queue__DOT__i_node_f),32);
        bufp->chgSData(oldp+3,(vlSelf->tb_open_list_queue__DOT__i_node_i),16);
        bufp->chgSData(oldp+4,(vlSelf->tb_open_list_queue__DOT__i_node_j),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+5,(vlSelf->tb_open_list_queue__DOT__o_valid));
        bufp->chgIData(oldp+6,(vlSelf->tb_open_list_queue__DOT__o_node_f),32);
        bufp->chgSData(oldp+7,(vlSelf->tb_open_list_queue__DOT__o_node_i),16);
        bufp->chgSData(oldp+8,(vlSelf->tb_open_list_queue__DOT__o_node_j),16);
        bufp->chgIData(oldp+9,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [0U] >> 0x20U))),32);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [0U] 
                                                    >> 0x10U)))),16);
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 12);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [0U]))),16);
        bufp->chgIData(oldp+1,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [1U] >> 0x20U))),32);
        bufp->chgSData(oldp+2,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [1U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+3,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [1U]))),16);
        bufp->chgIData(oldp+4,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [2U] >> 0x20U))),32);
        bufp->chgSData(oldp+5,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [2U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [2U]))),16);
        bufp->chgIData(oldp+7,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [3U] >> 0x20U))),32);
        bufp->chgSData(oldp+8,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [3U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [3U]))),16);
        bufp->chgIData(oldp+10,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [4U] >> 0x20U))),32);
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 23);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [4U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+1,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [4U]))),16);
        bufp->chgIData(oldp+2,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [5U] >> 0x20U))),32);
        bufp->chgSData(oldp+3,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [5U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+4,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [5U]))),16);
        bufp->chgIData(oldp+5,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [6U] >> 0x20U))),32);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [6U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [6U]))),16);
        bufp->chgIData(oldp+8,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [7U] >> 0x20U))),32);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [7U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [7U]))),16);
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 34);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+0,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [8U] >> 0x20U))),32);
        bufp->chgSData(oldp+1,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [8U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+2,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [8U]))),16);
        bufp->chgIData(oldp+3,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                        [9U] >> 0x20U))),32);
        bufp->chgSData(oldp+4,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [9U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+5,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                  [9U]))),16);
        bufp->chgIData(oldp+6,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [0U] >> 0x20U))),32);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [0U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [0U]))),16);
        bufp->chgIData(oldp+9,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [1U] >> 0x20U))),32);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [1U] 
                                                    >> 0x10U)))),16);
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 45);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [1U]))),16);
        bufp->chgIData(oldp+1,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [2U] >> 0x20U))),32);
        bufp->chgSData(oldp+2,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [2U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+3,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [2U]))),16);
        bufp->chgIData(oldp+4,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [3U] >> 0x20U))),32);
        bufp->chgSData(oldp+5,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [3U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [3U]))),16);
        bufp->chgIData(oldp+7,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [4U] >> 0x20U))),32);
        bufp->chgSData(oldp+8,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [4U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [4U]))),16);
        bufp->chgIData(oldp+10,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [5U] >> 0x20U))),32);
    }
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 56);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [5U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+1,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [5U]))),16);
        bufp->chgIData(oldp+2,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [6U] >> 0x20U))),32);
        bufp->chgSData(oldp+3,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [6U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+4,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [6U]))),16);
        bufp->chgIData(oldp+5,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [7U] >> 0x20U))),32);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [7U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [7U]))),16);
        bufp->chgIData(oldp+8,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [8U] >> 0x20U))),32);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [8U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [8U]))),16);
    }
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 67);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+0,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                        [9U] >> 0x20U))),32);
        bufp->chgSData(oldp+1,((0xffffU & (IData)((
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [9U] 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+2,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                  [9U]))),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+3,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
        bufp->chgBit(oldp+4,((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
        bufp->chgIData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+6,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count),32);
        bufp->chgBit(oldp+7,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
        bufp->chgBit(oldp+8,((9U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
    }
    bufp->chgBit(oldp+9,(vlSelf->tb_open_list_queue__DOT__CLK));
    bufp->chgBit(oldp+10,(vlSelf->tb_open_list_queue__DOT__RSTn));
}

void Vtb_open_list_queue___024root__trace_chg_7_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_open_list_queue___024root__trace_chg_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_7\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_open_list_queue___024root__trace_chg_7_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_open_list_queue___024root__trace_chg_7_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_chg_7_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 78);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__valid));
    bufp->chgCData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state),3);
    bufp->chgCData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state),3);
    bufp->chgIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr),32);
    bufp->chgIData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
