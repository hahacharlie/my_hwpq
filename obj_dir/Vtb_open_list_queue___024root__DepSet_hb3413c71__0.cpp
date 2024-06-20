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

void Vtb_open_list_queue___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);
void Vtb_open_list_queue___024root____Vthread__nba__4(void* voidSelf, bool even_cycle);

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
    Vtb_open_list_queue___024root____Vthread__nba__4(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__1(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask1(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask1\n"); );
    // Body
    Verilated::mtaskId(1);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__3(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask3(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask3\n"); );
    // Body
    Verilated::mtaskId(3);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___nba_sequent__TOP__4(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask4(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask4\n"); );
    // Body
    Verilated::mtaskId(4);
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__4(vlSelf);
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__6(vlSelf);
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___act_comb__TOP__0(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask8(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask8\n"); );
    // Body
    Verilated::mtaskId(8);
    if ((0x32ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root___act_comb__TOP__1(Vtb_open_list_queue___024root* vlSelf);

void Vtb_open_list_queue___024root__nba_mtask9(Vtb_open_list_queue___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__nba_mtask9\n"); );
    // Body
    Verilated::mtaskId(9);
    if ((0x33ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_open_list_queue___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_open_list_queue___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__0\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_open_list_queue___024root__nba_mtask1(vlSelf);
    vlSelf->__Vm_mtaskstate_3.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_4.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_6.signalUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__1\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_5.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask8(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__2\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_4.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__3\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_6.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtb_open_list_queue___024root____Vthread__nba__4(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root____Vthread__nba__4\n"); );
    // Body
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_3.waitUntilUpstreamDone(even_cycle);
    Vtb_open_list_queue___024root__nba_mtask3(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
