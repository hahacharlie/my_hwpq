// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_open_list_queue.h for the primary calling header

#ifndef VERILATED_VTB_OPEN_LIST_QUEUE___024ROOT_H_
#define VERILATED_VTB_OPEN_LIST_QUEUE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_timing.h"


class Vtb_open_list_queue__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_open_list_queue___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count;
    CData/*0:0*/ tb_open_list_queue__DOT__o_valid;
    SData/*15:0*/ tb_open_list_queue__DOT__i_node_i;
    SData/*15:0*/ tb_open_list_queue__DOT__i_node_j;
    SData/*15:0*/ tb_open_list_queue__DOT__o_node_i;
    SData/*15:0*/ tb_open_list_queue__DOT__o_node_j;
    IData/*31:0*/ tb_open_list_queue__DOT__i_node_f;
    IData/*31:0*/ tb_open_list_queue__DOT__o_node_f;
    QData/*63:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__0;
    QData/*63:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h8980632d__1;
    QData/*63:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__0;
    QData/*63:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_h9dc5a6d8__1;
    QData/*63:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT____Vlvbound_hc96805db__1;
    VlUnpacked<QData/*63:0*/, 10> tb_open_list_queue__DOT__u_open_list_queue__DOT__IB;
    VlUnpacked<QData/*63:0*/, 10> tb_open_list_queue__DOT__u_open_list_queue__DOT__OB;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    CData/*0:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__valid;
    CData/*0:0*/ tb_open_list_queue__DOT__i_wrt;
    CData/*0:0*/ tb_open_list_queue__DOT__i_read;
    CData/*2:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state;
    CData/*0:0*/ tb_open_list_queue__DOT__RSTn;
    CData/*0:0*/ tb_open_list_queue__DOT__CLK;
    CData/*0:0*/ tb_open_list_queue__DOT__i_valid;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_open_list_queue__DOT__data_i;
    SData/*15:0*/ tb_open_list_queue__DOT__data_j;
    IData/*31:0*/ tb_open_list_queue__DOT__data_f;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 10> __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__0;
    VlUnpacked<QData/*63:0*/, 10> __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__0;
    VlUnpacked<QData/*63:0*/, 10> __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__OB__1;
    VlUnpacked<QData/*63:0*/, 10> __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__u_open_list_queue__DOT__IB__1;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hccc560ca__0;
    VlTriggerScheduler __VtrigSched_h29188e73__0;
    VlTriggerScheduler __VtrigSched_hccc5600b__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_5;
    VlMTaskVertex __Vm_mtaskstate_8;
    VlMTaskVertex __Vm_mtaskstate_4;
    VlMTaskVertex __Vm_mtaskstate_6;
    VlMTaskVertex __Vm_mtaskstate_3;
    VlMTaskVertex __Vm_mtaskstate_final__nba;

    // INTERNAL VARIABLES
    Vtb_open_list_queue__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_open_list_queue___024root(Vtb_open_list_queue__Syms* symsp, const char* v__name);
    ~Vtb_open_list_queue___024root();
    VL_UNCOPYABLE(Vtb_open_list_queue___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
