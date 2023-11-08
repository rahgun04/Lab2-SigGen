// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay___024root.h"

VL_INLINE_OPT void Vsigdelay___024root___sequent__TOP__0(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__sigdelay__DOT__addressOffset;
    CData/*7:0*/ __Vdlyvdim0__sigdelay__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__sigdelay__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__sigdelay__DOT__ram__DOT__ram_array__v0;
    // Body
    __Vdly__sigdelay__DOT__addressOffset = vlSelf->sigdelay__DOT__addressOffset;
    __Vdlyvset__sigdelay__DOT__ram__DOT__ram_array__v0 = 0U;
    vlSelf->dout = vlSelf->sigdelay__DOT__ram__DOT__ram_array
        [vlSelf->sigdelay__DOT__address];
    if (vlSelf->rst) {
        __Vdly__sigdelay__DOT__addressOffset = (0xffU 
                                                & ((IData)(vlSelf->offset) 
                                                   * (IData)(vlSelf->incr)));
        vlSelf->sigdelay__DOT__address = 0U;
    } else {
        __Vdly__sigdelay__DOT__addressOffset = (0xffU 
                                                & ((IData)(vlSelf->sigdelay__DOT__addressOffset) 
                                                   + 
                                                   ((IData)(vlSelf->en)
                                                     ? (IData)(vlSelf->incr)
                                                     : 0U)));
        vlSelf->sigdelay__DOT__address = (0xffU & ((IData)(vlSelf->sigdelay__DOT__address) 
                                                   + 
                                                   ((IData)(vlSelf->en)
                                                     ? (IData)(vlSelf->incr)
                                                     : 0U)));
    }
    if (vlSelf->wen) {
        __Vdlyvval__sigdelay__DOT__ram__DOT__ram_array__v0 
            = vlSelf->sig;
        __Vdlyvset__sigdelay__DOT__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__sigdelay__DOT__ram__DOT__ram_array__v0 
            = vlSelf->sigdelay__DOT__addressOffset;
    }
    if (__Vdlyvset__sigdelay__DOT__ram__DOT__ram_array__v0) {
        vlSelf->sigdelay__DOT__ram__DOT__ram_array[__Vdlyvdim0__sigdelay__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__sigdelay__DOT__ram__DOT__ram_array__v0;
    }
    vlSelf->sigdelay__DOT__addressOffset = __Vdly__sigdelay__DOT__addressOffset;
}

void Vsigdelay___024root___eval(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsigdelay___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsigdelay___024root___eval_debug_assertions(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
