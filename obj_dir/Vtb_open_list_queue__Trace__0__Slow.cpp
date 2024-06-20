// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_open_list_queue__Syms.h"


VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_init_sub__TOP__0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_open_list_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"QUEUE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MAP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MAP_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,4,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,4,"RSTn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,5,"i_wrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,5,"i_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,5,"i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,5,"i_node_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,3,"o_ready_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,4,"o_ready_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,4,"o_ready_rep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,5,"o_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,5,"o_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,6,"o_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,3,"o_node_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_open_list_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"QUEUE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MAP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MAP_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"MAX_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,4,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,4,"RSTn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,5,"i_wrt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,5,"i_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,5,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,5,"i_node_f",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,4,"o_ready_deq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,3,"o_ready_enq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,4,"o_ready_rep",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,5,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,5,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,6,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,3,"o_node_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"l_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,6,"next_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,6,"curr_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("inQueue", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+16,2,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,2,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,2,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,3,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nextInQueue", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("outQueue", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+20,3,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,3,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,3,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,3,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nextOutQueue", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,1,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,1,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+40,6,"inQueueValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,1,"nextInQueueValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,6,"outQueueValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,1,"nextOutQueueValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,1,"lessThanPrevInQueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,1,"lessThanNextInQueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,2,"lessThanSameOutQueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,2,"lessThanNextOutQueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,2,"lessThanNextNextOutQueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,4,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+48,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+28,4,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,6,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_init_top(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_init_top\n"); );
    // Body
    Vtb_open_list_queue___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_register(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_open_list_queue___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_1, 1U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_1, 1U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_2, 2U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_2, 2U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_3, 3U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_3, 3U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_4, 4U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_4, 4U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_5, 5U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_5, 5U, vlSelf);
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_6, 6U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_6, 6U, vlSelf);
    tracep->addCleanupCb(&Vtb_open_list_queue___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_const_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_const_0\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_const_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+43,(4U),32);
    bufp->fullIData(oldp+44,(0x20U),32);
    bufp->fullIData(oldp+45,(0x10U),32);
    bufp->fullIData(oldp+46,(0xffffffffU),32);
    bufp->fullIData(oldp+47,(2U),32);
    bufp->fullIData(oldp+48,(3U),32);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_0\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_0_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[0U]),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[1U]),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[2U]),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueue[3U]),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[0U]),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[1U]),32);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_1_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_1\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_1_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_1_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_1_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+7,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[2U]),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueue[3U]),32);
    bufp->fullCData(oldp+9,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextInQueueValid),4);
    bufp->fullCData(oldp+10,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__nextOutQueueValid),4);
    bufp->fullCData(oldp+11,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanPrevInQueue),4);
    bufp->fullCData(oldp+12,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextInQueue),4);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_2_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_2\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_2_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_2_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_2_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+13,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanSameOutQueue),4);
    bufp->fullCData(oldp+14,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextOutQueue),4);
    bufp->fullCData(oldp+15,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__lessThanNextNextOutQueue),4);
    bufp->fullIData(oldp+16,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[0U]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[1U]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[2U]),32);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_3_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_3\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_3_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_3_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_3_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+19,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueue[3U]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[0U]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[1U]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[2U]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueue[3U]),32);
    bufp->fullBit(oldp+24,(vlSelf->tb_open_list_queue__DOT__o_ready_deq));
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_4_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_4\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_4_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_4_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_4_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+25,(vlSelf->tb_open_list_queue__DOT__o_ready_enq));
    bufp->fullBit(oldp+26,(vlSelf->tb_open_list_queue__DOT__o_ready_rep));
    bufp->fullIData(oldp+27,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__i),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_state),32);
    bufp->fullBit(oldp+29,(vlSelf->tb_open_list_queue__DOT__CLK));
    bufp->fullBit(oldp+30,(vlSelf->tb_open_list_queue__DOT__RSTn));
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_5_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_5\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_5_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_5_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_5_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+31,(vlSelf->tb_open_list_queue__DOT__i_wrt));
    bufp->fullBit(oldp+32,(vlSelf->tb_open_list_queue__DOT__i_read));
    bufp->fullBit(oldp+33,(vlSelf->tb_open_list_queue__DOT__i_valid));
    bufp->fullIData(oldp+34,(vlSelf->tb_open_list_queue__DOT__i_node_f),32);
    bufp->fullBit(oldp+35,((4U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))));
    bufp->fullBit(oldp+36,((0U == (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size))));
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_6_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_6\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_6_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_6_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_6_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+37,((1U & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid))));
    bufp->fullCData(oldp+38,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_size),4);
    bufp->fullCData(oldp+39,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__curr_size),4);
    bufp->fullCData(oldp+40,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__inQueueValid),4);
    bufp->fullCData(oldp+41,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__outQueueValid),4);
    bufp->fullIData(oldp+42,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state),32);
}
