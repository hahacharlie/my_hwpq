// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_open_list_queue.h for the primary calling header

#include "Vtb_open_list_queue__pch.h"
#include "Vtb_open_list_queue__Syms.h"
#include "Vtb_open_list_queue___024root.h"

void Vtb_open_list_queue___024root___ctor_var_reset(Vtb_open_list_queue___024root* vlSelf);

Vtb_open_list_queue___024root::Vtb_open_list_queue___024root(Vtb_open_list_queue__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , __Vm_mtaskstate_14(3U)
    , __Vm_mtaskstate_final__nba(6U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_open_list_queue___024root___ctor_var_reset(this);
}

void Vtb_open_list_queue___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_open_list_queue___024root::~Vtb_open_list_queue___024root() {
}
