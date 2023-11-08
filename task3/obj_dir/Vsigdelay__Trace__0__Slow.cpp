// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+6,"offset", false,-1, 7,0);
    tracep->declBus(c+7,"sig", false,-1, 7,0);
    tracep->declBus(c+8,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+11,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+6,"offset", false,-1, 7,0);
    tracep->declBus(c+7,"sig", false,-1, 7,0);
    tracep->declBus(c+8,"dout", false,-1, 7,0);
    tracep->declBus(c+9,"address", false,-1, 7,0);
    tracep->declBus(c+10,"addressOffset", false,-1, 7,0);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+6,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"count", false,-1, 7,0);
    tracep->declBus(c+10,"countOffset", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+11,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+9,"addrout", false,-1, 7,0);
    tracep->declBus(c+8,"dataout", false,-1, 7,0);
    tracep->declBus(c+10,"addrin", false,-1, 7,0);
    tracep->declBus(c+7,"datain", false,-1, 7,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullBit(oldp+4,(vlSelf->wen));
    bufp->fullCData(oldp+5,(vlSelf->incr),8);
    bufp->fullCData(oldp+6,(vlSelf->offset),8);
    bufp->fullCData(oldp+7,(vlSelf->sig),8);
    bufp->fullCData(oldp+8,(vlSelf->dout),8);
    bufp->fullCData(oldp+9,(vlSelf->sigdelay__DOT__address),8);
    bufp->fullCData(oldp+10,(vlSelf->sigdelay__DOT__addressOffset),8);
    bufp->fullIData(oldp+11,(8U),32);
}
