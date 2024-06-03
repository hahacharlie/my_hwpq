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
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__0__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__0__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_j = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__1__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__1__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__1__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_j = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__2__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__2__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__2__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_j = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__3__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__3__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__3__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_j = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__4__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__4__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__4__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_j = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__5__i_data_f;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_f = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__5__i_data_i;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_i = 0;
    IData/*31:0*/ __Vtask_tb_open_list_queue__DOT__write__5__i_data_j;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_j = 0;
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
    vlSelf->tb_open_list_queue__DOT__i_valid = 0U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = 0U;
    vlSelf->tb_open_list_queue__DOT__i_node_i = 0U;
    vlSelf->tb_open_list_queue__DOT__i_node_j = 0U;
    co_await vlSelf->__VtrigSched_h29188e73__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.RSTn)", 
                                                       "tb_open_list_queue.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_j = 5U;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_i = 5U;
    __Vtask_tb_open_list_queue__DOT__write__0__i_data_f = 0xcU;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__0__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__0__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__0__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__0__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__0__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_j = 3U;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_i = 3U;
    __Vtask_tb_open_list_queue__DOT__write__1__i_data_f = 1U;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__1__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__1__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__1__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__1__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__1__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_j = 1U;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_i = 1U;
    __Vtask_tb_open_list_queue__DOT__write__2__i_data_f = 2U;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__2__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__2__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__2__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__2__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__2__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_j = 6U;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_i = 6U;
    __Vtask_tb_open_list_queue__DOT__write__3__i_data_f = 0xeU;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__3__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__3__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__3__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__3__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__3__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_j = 4U;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_i = 4U;
    __Vtask_tb_open_list_queue__DOT__write__4__i_data_f = 0xcU;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__4__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__4__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__4__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__4__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__4__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_j = 2U;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_i = 2U;
    __Vtask_tb_open_list_queue__DOT__write__5__i_data_f = 3U;
    if ((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)) {
        VL_WRITEF_NX("Error - The queue is full | Data: %11d\n",0,
                     32,__Vtask_tb_open_list_queue__DOT__write__5__i_data_f);
    } else {
        VL_WRITEF_NX("Write data: %11d\n",0,32,__Vtask_tb_open_list_queue__DOT__write__5__i_data_f);
    }
    vlSelf->tb_open_list_queue__DOT__i_wrt = 1U;
    vlSelf->tb_open_list_queue__DOT__i_node_f = __Vtask_tb_open_list_queue__DOT__write__5__i_data_f;
    vlSelf->tb_open_list_queue__DOT__i_node_i = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__5__i_data_i);
    vlSelf->tb_open_list_queue__DOT__i_node_j = (0xffffU 
                                                 & __Vtask_tb_open_list_queue__DOT__write__5__i_data_j);
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_open_list_queue__DOT__i_wrt = 0U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hccc5600b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_open_list_queue.CLK)", 
                                                       "tb_open_list_queue.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_open_list_queue.sv", 92, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_open_list_queue___024root___dump_triggers__act(Vtb_open_list_queue___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_open_list_queue___024root___eval_triggers__act(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB.neq(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__1) 
                                     | vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB.neq(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__1)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_open_list_queue__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0))) 
                                     | ((~ (IData)(vlSelf->tb_open_list_queue__DOT__RSTn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->tb_open_list_queue__DOT__CLK)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_open_list_queue__DOT__RSTn) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tb_open_list_queue__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__1.assign(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__1.assign(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB);
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0 
        = vlSelf->tb_open_list_queue__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0 
        = vlSelf->tb_open_list_queue__DOT__RSTn;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_open_list_queue___024root___dump_triggers__act(vlSelf);
    }
#endif
}
