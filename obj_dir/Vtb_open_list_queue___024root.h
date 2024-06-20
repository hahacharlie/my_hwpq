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
    VlWide<4>/*127:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue;
    VlWide<4>/*127:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid;
    CData/*0:0*/ tb_open_list_queue__DOT__i_wrt;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size;
    CData/*0:0*/ tb_open_list_queue__DOT__i_read;
    CData/*0:0*/ tb_open_list_queue__DOT__o_ready_deq;
    CData/*0:0*/ tb_open_list_queue__DOT__o_ready_enq;
    CData/*0:0*/ tb_open_list_queue__DOT__o_ready_rep;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__i;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state;
    IData/*31:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue;
    CData/*3:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue;
    IData/*31:0*/ tb_open_list_queue__DOT__i_node_f;
    VlWide<4>/*127:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue;
    VlWide<4>/*127:0*/ tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    CData/*0:0*/ tb_open_list_queue__DOT__RSTn;
    CData/*0:0*/ tb_open_list_queue__DOT__CLK;
    CData/*0:0*/ tb_open_list_queue__DOT__i_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_open_list_queue__DOT__RSTn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hccc57167__0;
    VlTriggerScheduler __VtrigSched_h2918854e__0;
    VlTriggerScheduler __VtrigSched_hccc570a6__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_14;
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
