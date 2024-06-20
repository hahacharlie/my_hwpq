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
    tracep->declBus(c+83,0,"QUEUE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MAP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MAP_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,6,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,6,"RSTn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_wrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"i_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_node_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"i_node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+70,6,"o_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,6,"o_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"o_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"o_node_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"o_node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"o_node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"data_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"data_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("u_open_list_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"QUEUE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MAP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MAP_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"MAX_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,6,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,6,"RSTn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_wrt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"i_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_node_f",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_node_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"i_node_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+70,6,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,6,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"o_node_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"o_node_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"o_node_j",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("IB", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,1,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+13,1,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,1,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,1,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,1,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,1,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,1,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+19,1,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,1,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,1,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+22,1,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,2,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,2,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+25,2,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,2,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,2,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+28,2,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,2,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,2,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,2,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,2,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,2,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+34,3,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,3,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,3,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+37,3,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,3,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,3,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("OB", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+40,3,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,3,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,3,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+43,3,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,3,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,4,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+46,4,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,4,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,4,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+49,4,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,4,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,4,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+52,4,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,4,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,4,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+55,4,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,5,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,5,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+58,5,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,5,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,5,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+61,5,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,5,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,5,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+64,5,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,5,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,5,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+67,6,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,6,"node_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,6,"node_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+73,6,"ib_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,6,"ob_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+74,6,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,6,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,7,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,7,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,7,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("STATE_OPERATION", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,7,"itr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,7,"itr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
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
VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_open_list_queue___024root__trace_chg_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
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
    tracep->addFullCb(&Vtb_open_list_queue___024root__trace_full_7, 7U, vlSelf);
    tracep->addChgCb(&Vtb_open_list_queue___024root__trace_chg_7, 7U, vlSelf);
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
    bufp->fullIData(oldp+83,(0xaU),32);
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullIData(oldp+85,(0x10U),32);
    bufp->fullBit(oldp+86,(vlSelf->tb_open_list_queue__DOT__i_read));
    bufp->fullIData(oldp+87,(vlSelf->tb_open_list_queue__DOT__data_f),32);
    bufp->fullSData(oldp+88,(vlSelf->tb_open_list_queue__DOT__data_i),16);
    bufp->fullSData(oldp+89,(vlSelf->tb_open_list_queue__DOT__data_j),16);
    bufp->fullIData(oldp+90,(0xffffffffU),32);
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
    bufp->fullBit(oldp+1,(vlSelf->tb_open_list_queue__DOT__i_wrt));
    bufp->fullBit(oldp+2,(vlSelf->tb_open_list_queue__DOT__i_valid));
    bufp->fullIData(oldp+3,(vlSelf->tb_open_list_queue__DOT__i_node_f),32);
    bufp->fullSData(oldp+4,(vlSelf->tb_open_list_queue__DOT__i_node_i),16);
    bufp->fullSData(oldp+5,(vlSelf->tb_open_list_queue__DOT__i_node_j),16);
    bufp->fullBit(oldp+6,(vlSelf->tb_open_list_queue__DOT__o_valid));
    bufp->fullIData(oldp+7,(vlSelf->tb_open_list_queue__DOT__o_node_f),32);
    bufp->fullSData(oldp+8,(vlSelf->tb_open_list_queue__DOT__o_node_i),16);
    bufp->fullSData(oldp+9,(vlSelf->tb_open_list_queue__DOT__o_node_j),16);
    bufp->fullIData(oldp+10,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [0U] >> 0x20U))),32);
    bufp->fullSData(oldp+11,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [0U] 
                                                 >> 0x10U)))),16);
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
    bufp->fullSData(oldp+12,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [0U]))),16);
    bufp->fullIData(oldp+13,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [1U] >> 0x20U))),32);
    bufp->fullSData(oldp+14,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [1U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+15,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [1U]))),16);
    bufp->fullIData(oldp+16,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [2U] >> 0x20U))),32);
    bufp->fullSData(oldp+17,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+18,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [2U]))),16);
    bufp->fullIData(oldp+19,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [3U] >> 0x20U))),32);
    bufp->fullSData(oldp+20,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [3U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+21,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [3U]))),16);
    bufp->fullIData(oldp+22,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [4U] >> 0x20U))),32);
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
    bufp->fullSData(oldp+23,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [4U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+24,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [4U]))),16);
    bufp->fullIData(oldp+25,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [5U] >> 0x20U))),32);
    bufp->fullSData(oldp+26,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [5U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+27,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [5U]))),16);
    bufp->fullIData(oldp+28,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [6U] >> 0x20U))),32);
    bufp->fullSData(oldp+29,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [6U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+30,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [6U]))),16);
    bufp->fullIData(oldp+31,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [7U] >> 0x20U))),32);
    bufp->fullSData(oldp+32,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [7U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+33,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [7U]))),16);
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
    bufp->fullIData(oldp+34,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [8U] >> 0x20U))),32);
    bufp->fullSData(oldp+35,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [8U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+36,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [8U]))),16);
    bufp->fullIData(oldp+37,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                      [9U] >> 0x20U))),32);
    bufp->fullSData(oldp+38,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                 [9U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+39,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__IB
                                                [9U]))),16);
    bufp->fullIData(oldp+40,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [0U] >> 0x20U))),32);
    bufp->fullSData(oldp+41,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [0U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+42,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [0U]))),16);
    bufp->fullIData(oldp+43,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [1U] >> 0x20U))),32);
    bufp->fullSData(oldp+44,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [1U] 
                                                 >> 0x10U)))),16);
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
    bufp->fullSData(oldp+45,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [1U]))),16);
    bufp->fullIData(oldp+46,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [2U] >> 0x20U))),32);
    bufp->fullSData(oldp+47,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+48,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [2U]))),16);
    bufp->fullIData(oldp+49,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [3U] >> 0x20U))),32);
    bufp->fullSData(oldp+50,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [3U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+51,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [3U]))),16);
    bufp->fullIData(oldp+52,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [4U] >> 0x20U))),32);
    bufp->fullSData(oldp+53,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [4U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+54,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [4U]))),16);
    bufp->fullIData(oldp+55,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [5U] >> 0x20U))),32);
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
    bufp->fullSData(oldp+56,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [5U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+57,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [5U]))),16);
    bufp->fullIData(oldp+58,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [6U] >> 0x20U))),32);
    bufp->fullSData(oldp+59,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [6U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+60,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [6U]))),16);
    bufp->fullIData(oldp+61,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [7U] >> 0x20U))),32);
    bufp->fullSData(oldp+62,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [7U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+63,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [7U]))),16);
    bufp->fullIData(oldp+64,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [8U] >> 0x20U))),32);
    bufp->fullSData(oldp+65,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [8U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+66,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [8U]))),16);
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
    bufp->fullIData(oldp+67,((IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                      [9U] >> 0x20U))),32);
    bufp->fullSData(oldp+68,((0xffffU & (IData)((vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                 [9U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+69,((0xffffU & (IData)(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__OB
                                                [9U]))),16);
    bufp->fullBit(oldp+70,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
    bufp->fullBit(oldp+71,((0xaU == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count)));
    bufp->fullIData(oldp+72,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ob_count),32);
    bufp->fullIData(oldp+73,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count),32);
    bufp->fullBit(oldp+74,((0U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
    bufp->fullBit(oldp+75,((9U == vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__ib_count)));
    bufp->fullBit(oldp+76,(vlSelf->tb_open_list_queue__DOT__CLK));
    bufp->fullBit(oldp+77,(vlSelf->tb_open_list_queue__DOT__RSTn));
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_7_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_7\n"); );
    // Init
    Vtb_open_list_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_open_list_queue___024root*>(voidSelf);
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_open_list_queue___024root__trace_full_7_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_open_list_queue___024root__trace_full_7_sub_0(Vtb_open_list_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_open_list_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_open_list_queue___024root__trace_full_7_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+78,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__valid));
    bufp->fullCData(oldp+79,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__current_state),3);
    bufp->fullCData(oldp+80,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__next_state),3);
    bufp->fullIData(oldp+81,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk1__DOT__itr),32);
    bufp->fullIData(oldp+82,(vlSelf->tb_open_list_queue__DOT__u_open_list_queue__DOT__STATE_OPERATION__DOT__unnamedblk2__DOT__itr),32);
}
