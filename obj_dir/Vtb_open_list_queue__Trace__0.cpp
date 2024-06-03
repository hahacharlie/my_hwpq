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
                     | vlSelf->__Vm_traceActivity[5U]))) {
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
        bufp->chgSData(oldp+11,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [0U]))),16);
        bufp->chgIData(oldp+12,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [1U] >> 0x20U))),32);
        bufp->chgSData(oldp+13,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+14,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [1U]))),16);
        bufp->chgIData(oldp+15,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [2U] >> 0x20U))),32);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+17,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [2U]))),16);
        bufp->chgIData(oldp+18,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [3U] >> 0x20U))),32);
        bufp->chgSData(oldp+19,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [3U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+20,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [3U]))),16);
        bufp->chgIData(oldp+21,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [4U] >> 0x20U))),32);
        bufp->chgSData(oldp+22,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [4U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+23,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [4U]))),16);
        bufp->chgIData(oldp+24,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [5U] >> 0x20U))),32);
        bufp->chgSData(oldp+25,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [5U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [5U]))),16);
        bufp->chgIData(oldp+27,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [6U] >> 0x20U))),32);
        bufp->chgSData(oldp+28,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [6U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+29,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [6U]))),16);
        bufp->chgIData(oldp+30,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [7U] >> 0x20U))),32);
        bufp->chgSData(oldp+31,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [7U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [7U]))),16);
        bufp->chgIData(oldp+33,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [8U] >> 0x20U))),32);
        bufp->chgSData(oldp+34,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [8U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+35,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [8U]))),16);
        bufp->chgIData(oldp+36,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                         [9U] >> 0x20U))),32);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                    [9U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                   [9U]))),16);
        bufp->chgIData(oldp+39,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [0U] >> 0x20U))),32);
        bufp->chgSData(oldp+40,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+41,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [0U]))),16);
        bufp->chgIData(oldp+42,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [1U] >> 0x20U))),32);
        bufp->chgSData(oldp+43,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+44,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [1U]))),16);
        bufp->chgIData(oldp+45,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [2U] >> 0x20U))),32);
        bufp->chgSData(oldp+46,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+47,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [2U]))),16);
        bufp->chgIData(oldp+48,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [3U] >> 0x20U))),32);
        bufp->chgSData(oldp+49,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [3U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+50,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [3U]))),16);
        bufp->chgIData(oldp+51,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [4U] >> 0x20U))),32);
        bufp->chgSData(oldp+52,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [4U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+53,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [4U]))),16);
        bufp->chgIData(oldp+54,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [5U] >> 0x20U))),32);
        bufp->chgSData(oldp+55,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [5U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+56,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [5U]))),16);
        bufp->chgIData(oldp+57,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [6U] >> 0x20U))),32);
        bufp->chgSData(oldp+58,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [6U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+59,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [6U]))),16);
        bufp->chgIData(oldp+60,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [7U] >> 0x20U))),32);
        bufp->chgSData(oldp+61,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [7U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+62,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [7U]))),16);
        bufp->chgIData(oldp+63,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [8U] >> 0x20U))),32);
        bufp->chgSData(oldp+64,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [8U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+65,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [8U]))),16);
        bufp->chgIData(oldp+66,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                         [9U] >> 0x20U))),32);
        bufp->chgSData(oldp+67,((0xffffU & (IData)(
                                                   (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                    [9U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+68,((0xffffU & (IData)(
                                                   vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                   [9U]))),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+69,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
        bufp->chgBit(oldp+70,((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
        bufp->chgIData(oldp+71,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count),32);
        bufp->chgBit(oldp+73,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
        bufp->chgBit(oldp+74,((9U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
        bufp->chgBit(oldp+75,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__valid));
        bufp->chgCData(oldp+76,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state),3);
        bufp->chgIData(oldp+77,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr),32);
    }
    bufp->chgBit(oldp+79,(vlSelf->tb_open_list_queue__DOT__CLK));
    bufp->chgBit(oldp+80,(vlSelf->tb_open_list_queue__DOT__RSTn));
    bufp->chgCData(oldp+81,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state),3);
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
