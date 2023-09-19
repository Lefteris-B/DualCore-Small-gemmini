// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3760(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3760\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_3 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_3 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_3 = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT___T_4) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stalling_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stalling_2) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_1) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stalling_3) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_3 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_2) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___p_io_out_ready_T_12)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__valids_3)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT___T_4) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stalling_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stalling_2) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_1) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stalling_3) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_3 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_2) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___p_io_out_ready_T_51)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__valids_3)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT___T_4) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stalling_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stalling_2) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_1) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stalling_3) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_3 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_2) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___p_io_out_ready_T_38)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__valids_3)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_910) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_298)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_issued)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3761(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3761\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_3 = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT___T_4) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stalling_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stalling_2) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_1) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stalling_3) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_3 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_2) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___p_io_out_ready_T_25)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__valids_3)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (0x20000U | ((0xffe0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                       [0U][0U] >> 1U)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] = 0U;
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (0x40000U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode) 
                           << 0x12U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)) 
                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_59)) 
                     | (~ (IData)((0x23U == (0x33U 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_973)
                        ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_complete_on_issue))
                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_762) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_valid))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_909) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_297)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_issued)));
}

extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hd0572db1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3762(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3762\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h0acf03b3__0;
    VlWide<64>/*2047:0*/ __Vtemp_hd0fc2fca__0;
    VlWide<64>/*2047:0*/ __Vtemp_hbf2a87df__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_876) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_63)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_issued)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_908) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_296)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_issued)));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hd0fc2fca__0, VTestDriver__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hbf2a87df__0, VTestDriver__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    __Vtemp_h0acf03b3__0[1U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[1U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[1U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_h0acf03b3__0[2U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[2U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[2U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_h0acf03b3__0[3U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[3U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[3U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_h0acf03b3__0[4U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[4U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[4U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_h0acf03b3__0[5U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[5U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[5U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_h0acf03b3__0[6U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[6U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[6U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_h0acf03b3__0[7U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[7U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[7U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_h0acf03b3__0[8U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[8U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[8U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_h0acf03b3__0[9U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hd0fc2fca__0[9U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hbf2a87df__0[9U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_h0acf03b3__0[0xaU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xaU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_h0acf03b3__0[0xbU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xbU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_h0acf03b3__0[0xcU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xcU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_h0acf03b3__0[0xdU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xdU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_h0acf03b3__0[0xeU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xeU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_h0acf03b3__0[0xfU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hd0fc2fca__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hbf2a87df__0[0xfU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_h0acf03b3__0[0x10U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_h0acf03b3__0[0x11U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x11U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x11U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_h0acf03b3__0[0x12U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x12U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x12U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_h0acf03b3__0[0x13U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x13U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x13U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_h0acf03b3__0[0x14U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x14U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x14U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_h0acf03b3__0[0x15U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x15U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x15U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_h0acf03b3__0[0x16U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x16U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x16U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_h0acf03b3__0[0x17U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x17U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x17U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_h0acf03b3__0[0x18U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x18U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x18U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_h0acf03b3__0[0x19U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x19U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x19U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_h0acf03b3__0[0x1aU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1aU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1aU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_h0acf03b3__0[0x1bU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1bU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1bU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_h0acf03b3__0[0x1cU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1cU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1cU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_h0acf03b3__0[0x1dU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1dU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1dU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_h0acf03b3__0[0x1eU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1eU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1eU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_h0acf03b3__0[0x1fU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x1fU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x1fU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_h0acf03b3__0[0x20U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hd0fc2fca__0[0x20U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hbf2a87df__0[0x20U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hd0fc2fca__0[0U] : 
                      VTestDriver__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hbf2a87df__0[0U]
                         : VTestDriver__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h0acf03b3__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h0acf03b3__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h0acf03b3__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h0acf03b3__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h0acf03b3__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h0acf03b3__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h0acf03b3__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h0acf03b3__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h0acf03b3__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h0acf03b3__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h0acf03b3__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h0acf03b3__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h0acf03b3__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h0acf03b3__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h0acf03b3__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h0acf03b3__0[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_h0acf03b3__0[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_h0acf03b3__0[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_h0acf03b3__0[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_h0acf03b3__0[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_h0acf03b3__0[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_h0acf03b3__0[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_h0acf03b3__0[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_h0acf03b3__0[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_h0acf03b3__0[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_h0acf03b3__0[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_h0acf03b3__0[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_h0acf03b3__0[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_h0acf03b3__0[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_h0acf03b3__0[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_h0acf03b3__0[0x1fU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x20U] 
        = __Vtemp_h0acf03b3__0[0x20U];
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid) 
                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid))) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[4U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[5U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[6U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[7U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[8U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[8U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[9U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[9U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0xaU] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[0xaU];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0xbU] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[0xbU];
        if ((5U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[1U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[2U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[3U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[3U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[4U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[4U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[5U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[5U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[6U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[6U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[7U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[7U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[8U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[8U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[9U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[9U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[0xaU] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0xaU];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0[0xbU] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT____Vlvbound_hc360a312__0[0xbU];
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__enq_ptr_value;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3763(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3763\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h8c747d46__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4f89669__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_h65bdd0f6__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_907) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_295)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_issued)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__state 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T_5) 
              | ((~ ((0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_dram_addr) 
                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___T_1) 
                         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__next_j))))) 
                        & (0U == (0xffffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__next_j))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__k)
                                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_k_T_5)
                                                  ? 0U
                                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT___next_k_T_4))))))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__state))));
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb4f89669__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h65bdd0f6__0, __Vtemp_hd2b6c582__1, 
                  (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vtemp_h8c747d46__0[1U] = 0U;
        __Vtemp_h8c747d46__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        __Vtemp_h8c747d46__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                         ? __Vtemp_hb4f89669__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                     ? 
                                                    __Vtemp_h65bdd0f6__0[1U]
                                                     : 0U)));
        __Vtemp_h8c747d46__0[2U] = (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                               ? __Vtemp_hb4f89669__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                 ? 
                                                __Vtemp_h65bdd0f6__0[2U]
                                                 : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                    ? __Vtemp_hb4f89669__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                      ? __Vtemp_h65bdd0f6__0[0U] : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h8c747d46__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h8c747d46__0[2U];
}

extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_h3892cc72_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851b57_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h478702bb_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d99c76_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_h81905067_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a540f1_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h881bc0c4_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d99c4e_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3764(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3764\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4091411e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_heab3efe7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_h65bdd0f6__0;
    VlWide<9>/*287:0*/ __Vtemp_haf813950__0;
    VlWide<33>/*1055:0*/ __Vtemp_h21c49aeb__0;
    VlWide<33>/*1055:0*/ __Vtemp_h3aa7381e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h2ca75e3e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h20e071c9__0;
    VlWide<17>/*543:0*/ __Vtemp_h7708f120__0;
    VlWide<33>/*1055:0*/ __Vtemp_h8bd6d5f3__0;
    VlWide<33>/*1055:0*/ __Vtemp_h813d0a1b__0;
    VlWide<33>/*1055:0*/ __Vtemp_hdeb9468e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h245f7eb6__0;
    // Body
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_heab3efe7__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h65bdd0f6__0, __Vtemp_hd2b6c582__1, 
                  (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h4091411e__0[1U] = 0U;
        __Vtemp_h4091411e__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        __Vtemp_h4091411e__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                         ? __Vtemp_heab3efe7__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                     ? 
                                                    __Vtemp_h65bdd0f6__0[1U]
                                                     : 0U)));
        __Vtemp_h4091411e__0[2U] = (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                               ? __Vtemp_heab3efe7__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                 ? 
                                                __Vtemp_h65bdd0f6__0[2U]
                                                 : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                    ? __Vtemp_heab3efe7__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                      ? __Vtemp_h65bdd0f6__0[0U] : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h4091411e__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h4091411e__0[2U];
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376) {
        __Vtemp_h21c49aeb__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode) 
                                          << 1U));
        __Vtemp_h8bd6d5f3__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size) 
                                          << 1U));
    } else {
        __Vtemp_h21c49aeb__0[0U] = 0U;
        __Vtemp_h8bd6d5f3__0[0U] = 0U;
    }
    __Vtemp_h21c49aeb__0[1U] = 0U;
    __Vtemp_h21c49aeb__0[2U] = 0U;
    __Vtemp_h21c49aeb__0[3U] = 0U;
    __Vtemp_h21c49aeb__0[4U] = 0U;
    __Vtemp_h21c49aeb__0[5U] = 0U;
    __Vtemp_h21c49aeb__0[6U] = 0U;
    __Vtemp_h21c49aeb__0[7U] = 0U;
    __Vtemp_h21c49aeb__0[8U] = 0U;
    __Vtemp_h21c49aeb__0[9U] = 0U;
    __Vtemp_h21c49aeb__0[0xaU] = 0U;
    __Vtemp_h21c49aeb__0[0xbU] = 0U;
    __Vtemp_h21c49aeb__0[0xcU] = 0U;
    __Vtemp_h21c49aeb__0[0xdU] = 0U;
    __Vtemp_h21c49aeb__0[0xeU] = 0U;
    __Vtemp_h21c49aeb__0[0xfU] = 0U;
    __Vtemp_h21c49aeb__0[0x10U] = 0U;
    __Vtemp_h21c49aeb__0[0x11U] = 0U;
    __Vtemp_h21c49aeb__0[0x12U] = 0U;
    __Vtemp_h21c49aeb__0[0x13U] = 0U;
    __Vtemp_h21c49aeb__0[0x14U] = 0U;
    __Vtemp_h21c49aeb__0[0x15U] = 0U;
    __Vtemp_h21c49aeb__0[0x16U] = 0U;
    __Vtemp_h21c49aeb__0[0x17U] = 0U;
    __Vtemp_h21c49aeb__0[0x18U] = 0U;
    __Vtemp_h21c49aeb__0[0x19U] = 0U;
    __Vtemp_h21c49aeb__0[0x1aU] = 0U;
    __Vtemp_h21c49aeb__0[0x1bU] = 0U;
    __Vtemp_h21c49aeb__0[0x1cU] = 0U;
    __Vtemp_h21c49aeb__0[0x1dU] = 0U;
    __Vtemp_h21c49aeb__0[0x1eU] = 0U;
    __Vtemp_h21c49aeb__0[0x1fU] = 0U;
    __Vtemp_h21c49aeb__0[0x20U] = 0U;
    __Vtemp_h3aa7381e__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                << 2U);
    __Vtemp_h3aa7381e__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                >> 0x1eU);
    __Vtemp_h3aa7381e__0[2U] = 0U;
    __Vtemp_h3aa7381e__0[3U] = 0U;
    __Vtemp_h3aa7381e__0[4U] = 0U;
    __Vtemp_h3aa7381e__0[5U] = 0U;
    __Vtemp_h3aa7381e__0[6U] = 0U;
    __Vtemp_h3aa7381e__0[7U] = 0U;
    __Vtemp_h3aa7381e__0[8U] = 0U;
    __Vtemp_h3aa7381e__0[9U] = 0U;
    __Vtemp_h3aa7381e__0[0xaU] = 0U;
    __Vtemp_h3aa7381e__0[0xbU] = 0U;
    __Vtemp_h3aa7381e__0[0xcU] = 0U;
    __Vtemp_h3aa7381e__0[0xdU] = 0U;
    __Vtemp_h3aa7381e__0[0xeU] = 0U;
    __Vtemp_h3aa7381e__0[0xfU] = 0U;
    __Vtemp_h3aa7381e__0[0x10U] = 0U;
    __Vtemp_h3aa7381e__0[0x11U] = 0U;
    __Vtemp_h3aa7381e__0[0x12U] = 0U;
    __Vtemp_h3aa7381e__0[0x13U] = 0U;
    __Vtemp_h3aa7381e__0[0x14U] = 0U;
    __Vtemp_h3aa7381e__0[0x15U] = 0U;
    __Vtemp_h3aa7381e__0[0x16U] = 0U;
    __Vtemp_h3aa7381e__0[0x17U] = 0U;
    __Vtemp_h3aa7381e__0[0x18U] = 0U;
    __Vtemp_h3aa7381e__0[0x19U] = 0U;
    __Vtemp_h3aa7381e__0[0x1aU] = 0U;
    __Vtemp_h3aa7381e__0[0x1bU] = 0U;
    __Vtemp_h3aa7381e__0[0x1cU] = 0U;
    __Vtemp_h3aa7381e__0[0x1dU] = 0U;
    __Vtemp_h3aa7381e__0[0x1eU] = 0U;
    __Vtemp_h3aa7381e__0[0x1fU] = 0U;
    __Vtemp_h3aa7381e__0[0x20U] = 0U;
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h2ca75e3e__0, __Vtemp_h21c49aeb__0, __Vtemp_h3aa7381e__0);
    VL_SHIFTL_WWI(1039,1039,9, __Vtemp_h20e071c9__0, VTestDriver__ConstPool__CONST_h3892cc72_0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    __Vtemp_haf813950__0[1U] = (VTestDriver__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h2ca75e3e__0[1U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h20e071c9__0[1U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_haf813950__0[2U] = (VTestDriver__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h2ca75e3e__0[2U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h20e071c9__0[2U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_haf813950__0[3U] = (VTestDriver__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h2ca75e3e__0[3U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h20e071c9__0[3U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_haf813950__0[4U] = (VTestDriver__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h2ca75e3e__0[4U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h20e071c9__0[4U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_haf813950__0[5U] = (VTestDriver__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h2ca75e3e__0[5U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h20e071c9__0[5U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_haf813950__0[6U] = (VTestDriver__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h2ca75e3e__0[6U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h20e071c9__0[6U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_haf813950__0[7U] = (VTestDriver__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h2ca75e3e__0[7U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h20e071c9__0[7U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_haf813950__0[8U] = (VTestDriver__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h2ca75e3e__0[8U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h20e071c9__0[8U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h2ca75e3e__0[0U])
                       : VTestDriver__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h20e071c9__0[0U])
                         : VTestDriver__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_haf813950__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_haf813950__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_haf813950__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_haf813950__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_haf813950__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_haf813950__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_haf813950__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_haf813950__0[8U];
    __Vtemp_h8bd6d5f3__0[1U] = 0U;
    __Vtemp_h8bd6d5f3__0[2U] = 0U;
    __Vtemp_h8bd6d5f3__0[3U] = 0U;
    __Vtemp_h8bd6d5f3__0[4U] = 0U;
    __Vtemp_h8bd6d5f3__0[5U] = 0U;
    __Vtemp_h8bd6d5f3__0[6U] = 0U;
    __Vtemp_h8bd6d5f3__0[7U] = 0U;
    __Vtemp_h8bd6d5f3__0[8U] = 0U;
    __Vtemp_h8bd6d5f3__0[9U] = 0U;
    __Vtemp_h8bd6d5f3__0[0xaU] = 0U;
    __Vtemp_h8bd6d5f3__0[0xbU] = 0U;
    __Vtemp_h8bd6d5f3__0[0xcU] = 0U;
    __Vtemp_h8bd6d5f3__0[0xdU] = 0U;
    __Vtemp_h8bd6d5f3__0[0xeU] = 0U;
    __Vtemp_h8bd6d5f3__0[0xfU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x10U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x11U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x12U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x13U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x14U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x15U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x16U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x17U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x18U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x19U] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1aU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1bU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1cU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1dU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1eU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x1fU] = 0U;
    __Vtemp_h8bd6d5f3__0[0x20U] = 0U;
    __Vtemp_h813d0a1b__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                << 3U);
    __Vtemp_h813d0a1b__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_h813d0a1b__0[2U] = 0U;
    __Vtemp_h813d0a1b__0[3U] = 0U;
    __Vtemp_h813d0a1b__0[4U] = 0U;
    __Vtemp_h813d0a1b__0[5U] = 0U;
    __Vtemp_h813d0a1b__0[6U] = 0U;
    __Vtemp_h813d0a1b__0[7U] = 0U;
    __Vtemp_h813d0a1b__0[8U] = 0U;
    __Vtemp_h813d0a1b__0[9U] = 0U;
    __Vtemp_h813d0a1b__0[0xaU] = 0U;
    __Vtemp_h813d0a1b__0[0xbU] = 0U;
    __Vtemp_h813d0a1b__0[0xcU] = 0U;
    __Vtemp_h813d0a1b__0[0xdU] = 0U;
    __Vtemp_h813d0a1b__0[0xeU] = 0U;
    __Vtemp_h813d0a1b__0[0xfU] = 0U;
    __Vtemp_h813d0a1b__0[0x10U] = 0U;
    __Vtemp_h813d0a1b__0[0x11U] = 0U;
    __Vtemp_h813d0a1b__0[0x12U] = 0U;
    __Vtemp_h813d0a1b__0[0x13U] = 0U;
    __Vtemp_h813d0a1b__0[0x14U] = 0U;
    __Vtemp_h813d0a1b__0[0x15U] = 0U;
    __Vtemp_h813d0a1b__0[0x16U] = 0U;
    __Vtemp_h813d0a1b__0[0x17U] = 0U;
    __Vtemp_h813d0a1b__0[0x18U] = 0U;
    __Vtemp_h813d0a1b__0[0x19U] = 0U;
    __Vtemp_h813d0a1b__0[0x1aU] = 0U;
    __Vtemp_h813d0a1b__0[0x1bU] = 0U;
    __Vtemp_h813d0a1b__0[0x1cU] = 0U;
    __Vtemp_h813d0a1b__0[0x1dU] = 0U;
    __Vtemp_h813d0a1b__0[0x1eU] = 0U;
    __Vtemp_h813d0a1b__0[0x1fU] = 0U;
    __Vtemp_h813d0a1b__0[0x20U] = 0U;
    VL_SHIFTL_WWW(1028,1028,1028, __Vtemp_hdeb9468e__0, __Vtemp_h8bd6d5f3__0, __Vtemp_h813d0a1b__0);
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_h245f7eb6__0, VTestDriver__ConstPool__CONST_h81905067_0, 
                  (0x3f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h7708f120__0[1U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[1U] 
                                               & __Vtemp_hdeb9468e__0[1U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h245f7eb6__0[1U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[1U])))));
    __Vtemp_h7708f120__0[2U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[2U] 
                                               & __Vtemp_hdeb9468e__0[2U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h245f7eb6__0[2U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[2U])))));
    __Vtemp_h7708f120__0[3U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[3U] 
                                               & __Vtemp_hdeb9468e__0[3U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h245f7eb6__0[3U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[3U])))));
    __Vtemp_h7708f120__0[4U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[4U] 
                                               & __Vtemp_hdeb9468e__0[4U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h245f7eb6__0[4U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[4U])))));
    __Vtemp_h7708f120__0[5U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[5U] 
                                               & __Vtemp_hdeb9468e__0[5U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h245f7eb6__0[5U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[5U])))));
    __Vtemp_h7708f120__0[6U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[6U] 
                                               & __Vtemp_hdeb9468e__0[6U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h245f7eb6__0[6U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[6U])))));
    __Vtemp_h7708f120__0[7U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[7U] 
                                               & __Vtemp_hdeb9468e__0[7U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h245f7eb6__0[7U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[7U])))));
    __Vtemp_h7708f120__0[8U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[8U] 
                                               & __Vtemp_hdeb9468e__0[8U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h245f7eb6__0[8U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[8U])))));
    __Vtemp_h7708f120__0[9U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[9U] 
                                               & __Vtemp_hdeb9468e__0[9U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[9U] 
                                                 & __Vtemp_h245f7eb6__0[9U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[9U])))));
    __Vtemp_h7708f120__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                                                 & __Vtemp_hdeb9468e__0[0xaU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                                                   & __Vtemp_h245f7eb6__0[0xaU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU])))));
    __Vtemp_h7708f120__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                                                 & __Vtemp_hdeb9468e__0[0xbU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                                                   & __Vtemp_h245f7eb6__0[0xbU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU])))));
    __Vtemp_h7708f120__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                                                 & __Vtemp_hdeb9468e__0[0xcU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                                                   & __Vtemp_h245f7eb6__0[0xcU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU])))));
    __Vtemp_h7708f120__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                                                 & __Vtemp_hdeb9468e__0[0xdU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                                                   & __Vtemp_h245f7eb6__0[0xdU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU])))));
    __Vtemp_h7708f120__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                                                 & __Vtemp_hdeb9468e__0[0xeU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                                                   & __Vtemp_h245f7eb6__0[0xeU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU])))));
    __Vtemp_h7708f120__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                                                 & __Vtemp_hdeb9468e__0[0xfU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                                                   & __Vtemp_h245f7eb6__0[0xfU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU])))));
    __Vtemp_h7708f120__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                                               ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                                                  & __Vtemp_hdeb9468e__0[0x10U])
                                               : VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                                                 & __Vtemp_h245f7eb6__0[0x10U])
                                                 : 
                                                VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h00a540f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1376)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0U] 
                          & __Vtemp_hdeb9468e__0[0U])
                       : VTestDriver__ConstPool__CONST_h881bc0c4_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1391)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h245f7eb6__0[0U])
                         : VTestDriver__ConstPool__CONST_h881bc0c4_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h7708f120__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h7708f120__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h7708f120__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h7708f120__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h7708f120__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h7708f120__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h7708f120__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h7708f120__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h7708f120__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h7708f120__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h7708f120__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h7708f120__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h7708f120__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h7708f120__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h7708f120__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h7708f120__0[0x10U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3765(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3765\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
            = (0x7ffffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                          ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))
                                          : 0ULL)) 
                                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                            ? (1ULL 
                                               << (0x3fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))
                                            : 0ULL))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
            = (0x7ffffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                          ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))
                                          : 0ULL)) 
                                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                            ? (1ULL 
                                               << (0x3fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))
                                            : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__state 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___T_5) 
              | ((~ ((0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_dram_addr) 
                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___T_1) 
                         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__next_i))))) 
                        & (0U == (0xffffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__next_i))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__k)
                                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___next_k_T_5)
                                                  ? 0U
                                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT___next_k_T_4))))))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__state))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3766(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3766\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1513) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1482) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_2)
                             ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U))) 
                                        >> 4U))) : 0U)
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2) 
                                - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1482) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_in_1_d_valid) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter))
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    (0xffffffU 
                                                     & (((IData)(0xfffU) 
                                                         << 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 5U))) 
                                                        >> 3U)))
                                                    : 0U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3767(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3767\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_in_1_d_valid) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1513) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1482) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_1)
                             ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U))) 
                                        >> 4U))) : 0U)
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1) 
                                - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3768(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3768\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_ha7db18fc__0;
    VlWide<33>/*1055:0*/ __Vtemp_hd5ea69ae__0;
    VlWide<33>/*1055:0*/ __Vtemp_h2c22f5d7__0;
    VlWide<33>/*1055:0*/ __Vtemp_h18674251__0;
    VlWide<33>/*1055:0*/ __Vtemp_h20e071c9__0;
    VlWide<17>/*543:0*/ __Vtemp_h603e9032__0;
    VlWide<33>/*1055:0*/ __Vtemp_hfb219537__0;
    VlWide<33>/*1055:0*/ __Vtemp_he140b38e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h39fff50a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h245f7eb6__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1482) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364) {
        __Vtemp_hd5ea69ae__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode) 
                                          << 1U));
        __Vtemp_hfb219537__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size) 
                                          << 1U));
    } else {
        __Vtemp_hd5ea69ae__0[0U] = 0U;
        __Vtemp_hfb219537__0[0U] = 0U;
    }
    __Vtemp_hd5ea69ae__0[1U] = 0U;
    __Vtemp_hd5ea69ae__0[2U] = 0U;
    __Vtemp_hd5ea69ae__0[3U] = 0U;
    __Vtemp_hd5ea69ae__0[4U] = 0U;
    __Vtemp_hd5ea69ae__0[5U] = 0U;
    __Vtemp_hd5ea69ae__0[6U] = 0U;
    __Vtemp_hd5ea69ae__0[7U] = 0U;
    __Vtemp_hd5ea69ae__0[8U] = 0U;
    __Vtemp_hd5ea69ae__0[9U] = 0U;
    __Vtemp_hd5ea69ae__0[0xaU] = 0U;
    __Vtemp_hd5ea69ae__0[0xbU] = 0U;
    __Vtemp_hd5ea69ae__0[0xcU] = 0U;
    __Vtemp_hd5ea69ae__0[0xdU] = 0U;
    __Vtemp_hd5ea69ae__0[0xeU] = 0U;
    __Vtemp_hd5ea69ae__0[0xfU] = 0U;
    __Vtemp_hd5ea69ae__0[0x10U] = 0U;
    __Vtemp_hd5ea69ae__0[0x11U] = 0U;
    __Vtemp_hd5ea69ae__0[0x12U] = 0U;
    __Vtemp_hd5ea69ae__0[0x13U] = 0U;
    __Vtemp_hd5ea69ae__0[0x14U] = 0U;
    __Vtemp_hd5ea69ae__0[0x15U] = 0U;
    __Vtemp_hd5ea69ae__0[0x16U] = 0U;
    __Vtemp_hd5ea69ae__0[0x17U] = 0U;
    __Vtemp_hd5ea69ae__0[0x18U] = 0U;
    __Vtemp_hd5ea69ae__0[0x19U] = 0U;
    __Vtemp_hd5ea69ae__0[0x1aU] = 0U;
    __Vtemp_hd5ea69ae__0[0x1bU] = 0U;
    __Vtemp_hd5ea69ae__0[0x1cU] = 0U;
    __Vtemp_hd5ea69ae__0[0x1dU] = 0U;
    __Vtemp_hd5ea69ae__0[0x1eU] = 0U;
    __Vtemp_hd5ea69ae__0[0x1fU] = 0U;
    __Vtemp_hd5ea69ae__0[0x20U] = 0U;
    __Vtemp_h2c22f5d7__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                << 2U);
    __Vtemp_h2c22f5d7__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                >> 0x1eU);
    __Vtemp_h2c22f5d7__0[2U] = 0U;
    __Vtemp_h2c22f5d7__0[3U] = 0U;
    __Vtemp_h2c22f5d7__0[4U] = 0U;
    __Vtemp_h2c22f5d7__0[5U] = 0U;
    __Vtemp_h2c22f5d7__0[6U] = 0U;
    __Vtemp_h2c22f5d7__0[7U] = 0U;
    __Vtemp_h2c22f5d7__0[8U] = 0U;
    __Vtemp_h2c22f5d7__0[9U] = 0U;
    __Vtemp_h2c22f5d7__0[0xaU] = 0U;
    __Vtemp_h2c22f5d7__0[0xbU] = 0U;
    __Vtemp_h2c22f5d7__0[0xcU] = 0U;
    __Vtemp_h2c22f5d7__0[0xdU] = 0U;
    __Vtemp_h2c22f5d7__0[0xeU] = 0U;
    __Vtemp_h2c22f5d7__0[0xfU] = 0U;
    __Vtemp_h2c22f5d7__0[0x10U] = 0U;
    __Vtemp_h2c22f5d7__0[0x11U] = 0U;
    __Vtemp_h2c22f5d7__0[0x12U] = 0U;
    __Vtemp_h2c22f5d7__0[0x13U] = 0U;
    __Vtemp_h2c22f5d7__0[0x14U] = 0U;
    __Vtemp_h2c22f5d7__0[0x15U] = 0U;
    __Vtemp_h2c22f5d7__0[0x16U] = 0U;
    __Vtemp_h2c22f5d7__0[0x17U] = 0U;
    __Vtemp_h2c22f5d7__0[0x18U] = 0U;
    __Vtemp_h2c22f5d7__0[0x19U] = 0U;
    __Vtemp_h2c22f5d7__0[0x1aU] = 0U;
    __Vtemp_h2c22f5d7__0[0x1bU] = 0U;
    __Vtemp_h2c22f5d7__0[0x1cU] = 0U;
    __Vtemp_h2c22f5d7__0[0x1dU] = 0U;
    __Vtemp_h2c22f5d7__0[0x1eU] = 0U;
    __Vtemp_h2c22f5d7__0[0x1fU] = 0U;
    __Vtemp_h2c22f5d7__0[0x20U] = 0U;
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h18674251__0, __Vtemp_hd5ea69ae__0, __Vtemp_h2c22f5d7__0);
    VL_SHIFTL_WWI(1039,1039,9, __Vtemp_h20e071c9__0, VTestDriver__ConstPool__CONST_h3892cc72_0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    __Vtemp_ha7db18fc__0[1U] = (VTestDriver__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h18674251__0[1U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h20e071c9__0[1U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_ha7db18fc__0[2U] = (VTestDriver__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h18674251__0[2U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h20e071c9__0[2U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_ha7db18fc__0[3U] = (VTestDriver__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h18674251__0[3U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h20e071c9__0[3U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_ha7db18fc__0[4U] = (VTestDriver__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h18674251__0[4U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h20e071c9__0[4U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_ha7db18fc__0[5U] = (VTestDriver__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h18674251__0[5U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h20e071c9__0[5U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_ha7db18fc__0[6U] = (VTestDriver__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h18674251__0[6U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h20e071c9__0[6U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_ha7db18fc__0[7U] = (VTestDriver__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h18674251__0[7U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h20e071c9__0[7U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_ha7db18fc__0[8U] = (VTestDriver__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h18674251__0[8U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h20e071c9__0[8U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h18674251__0[0U])
                       : VTestDriver__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h20e071c9__0[0U])
                         : VTestDriver__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_ha7db18fc__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_ha7db18fc__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_ha7db18fc__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_ha7db18fc__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_ha7db18fc__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_ha7db18fc__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_ha7db18fc__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_ha7db18fc__0[8U];
    __Vtemp_hfb219537__0[1U] = 0U;
    __Vtemp_hfb219537__0[2U] = 0U;
    __Vtemp_hfb219537__0[3U] = 0U;
    __Vtemp_hfb219537__0[4U] = 0U;
    __Vtemp_hfb219537__0[5U] = 0U;
    __Vtemp_hfb219537__0[6U] = 0U;
    __Vtemp_hfb219537__0[7U] = 0U;
    __Vtemp_hfb219537__0[8U] = 0U;
    __Vtemp_hfb219537__0[9U] = 0U;
    __Vtemp_hfb219537__0[0xaU] = 0U;
    __Vtemp_hfb219537__0[0xbU] = 0U;
    __Vtemp_hfb219537__0[0xcU] = 0U;
    __Vtemp_hfb219537__0[0xdU] = 0U;
    __Vtemp_hfb219537__0[0xeU] = 0U;
    __Vtemp_hfb219537__0[0xfU] = 0U;
    __Vtemp_hfb219537__0[0x10U] = 0U;
    __Vtemp_hfb219537__0[0x11U] = 0U;
    __Vtemp_hfb219537__0[0x12U] = 0U;
    __Vtemp_hfb219537__0[0x13U] = 0U;
    __Vtemp_hfb219537__0[0x14U] = 0U;
    __Vtemp_hfb219537__0[0x15U] = 0U;
    __Vtemp_hfb219537__0[0x16U] = 0U;
    __Vtemp_hfb219537__0[0x17U] = 0U;
    __Vtemp_hfb219537__0[0x18U] = 0U;
    __Vtemp_hfb219537__0[0x19U] = 0U;
    __Vtemp_hfb219537__0[0x1aU] = 0U;
    __Vtemp_hfb219537__0[0x1bU] = 0U;
    __Vtemp_hfb219537__0[0x1cU] = 0U;
    __Vtemp_hfb219537__0[0x1dU] = 0U;
    __Vtemp_hfb219537__0[0x1eU] = 0U;
    __Vtemp_hfb219537__0[0x1fU] = 0U;
    __Vtemp_hfb219537__0[0x20U] = 0U;
    __Vtemp_he140b38e__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                << 3U);
    __Vtemp_he140b38e__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_he140b38e__0[2U] = 0U;
    __Vtemp_he140b38e__0[3U] = 0U;
    __Vtemp_he140b38e__0[4U] = 0U;
    __Vtemp_he140b38e__0[5U] = 0U;
    __Vtemp_he140b38e__0[6U] = 0U;
    __Vtemp_he140b38e__0[7U] = 0U;
    __Vtemp_he140b38e__0[8U] = 0U;
    __Vtemp_he140b38e__0[9U] = 0U;
    __Vtemp_he140b38e__0[0xaU] = 0U;
    __Vtemp_he140b38e__0[0xbU] = 0U;
    __Vtemp_he140b38e__0[0xcU] = 0U;
    __Vtemp_he140b38e__0[0xdU] = 0U;
    __Vtemp_he140b38e__0[0xeU] = 0U;
    __Vtemp_he140b38e__0[0xfU] = 0U;
    __Vtemp_he140b38e__0[0x10U] = 0U;
    __Vtemp_he140b38e__0[0x11U] = 0U;
    __Vtemp_he140b38e__0[0x12U] = 0U;
    __Vtemp_he140b38e__0[0x13U] = 0U;
    __Vtemp_he140b38e__0[0x14U] = 0U;
    __Vtemp_he140b38e__0[0x15U] = 0U;
    __Vtemp_he140b38e__0[0x16U] = 0U;
    __Vtemp_he140b38e__0[0x17U] = 0U;
    __Vtemp_he140b38e__0[0x18U] = 0U;
    __Vtemp_he140b38e__0[0x19U] = 0U;
    __Vtemp_he140b38e__0[0x1aU] = 0U;
    __Vtemp_he140b38e__0[0x1bU] = 0U;
    __Vtemp_he140b38e__0[0x1cU] = 0U;
    __Vtemp_he140b38e__0[0x1dU] = 0U;
    __Vtemp_he140b38e__0[0x1eU] = 0U;
    __Vtemp_he140b38e__0[0x1fU] = 0U;
    __Vtemp_he140b38e__0[0x20U] = 0U;
    VL_SHIFTL_WWW(1028,1028,1028, __Vtemp_h39fff50a__0, __Vtemp_hfb219537__0, __Vtemp_he140b38e__0);
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_h245f7eb6__0, VTestDriver__ConstPool__CONST_h81905067_0, 
                  (0x3f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h603e9032__0[1U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[1U] 
                                               & __Vtemp_h39fff50a__0[1U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h245f7eb6__0[1U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[1U])))));
    __Vtemp_h603e9032__0[2U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[2U] 
                                               & __Vtemp_h39fff50a__0[2U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h245f7eb6__0[2U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[2U])))));
    __Vtemp_h603e9032__0[3U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[3U] 
                                               & __Vtemp_h39fff50a__0[3U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h245f7eb6__0[3U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[3U])))));
    __Vtemp_h603e9032__0[4U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[4U] 
                                               & __Vtemp_h39fff50a__0[4U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h245f7eb6__0[4U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[4U])))));
    __Vtemp_h603e9032__0[5U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[5U] 
                                               & __Vtemp_h39fff50a__0[5U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h245f7eb6__0[5U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[5U])))));
    __Vtemp_h603e9032__0[6U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[6U] 
                                               & __Vtemp_h39fff50a__0[6U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h245f7eb6__0[6U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[6U])))));
    __Vtemp_h603e9032__0[7U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[7U] 
                                               & __Vtemp_h39fff50a__0[7U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h245f7eb6__0[7U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[7U])))));
    __Vtemp_h603e9032__0[8U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[8U] 
                                               & __Vtemp_h39fff50a__0[8U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h245f7eb6__0[8U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[8U])))));
    __Vtemp_h603e9032__0[9U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h881bc0c4_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[9U] 
                                               & __Vtemp_h39fff50a__0[9U])
                                            : VTestDriver__ConstPool__CONST_h881bc0c4_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[9U] 
                                                 & __Vtemp_h245f7eb6__0[9U])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[9U])))));
    __Vtemp_h603e9032__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                                                 & __Vtemp_h39fff50a__0[0xaU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                                                   & __Vtemp_h245f7eb6__0[0xaU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xaU])))));
    __Vtemp_h603e9032__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                                                 & __Vtemp_h39fff50a__0[0xbU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                                                   & __Vtemp_h245f7eb6__0[0xbU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xbU])))));
    __Vtemp_h603e9032__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                                                 & __Vtemp_h39fff50a__0[0xcU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                                                   & __Vtemp_h245f7eb6__0[0xcU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xcU])))));
    __Vtemp_h603e9032__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                                                 & __Vtemp_h39fff50a__0[0xdU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                                                   & __Vtemp_h245f7eb6__0[0xdU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xdU])))));
    __Vtemp_h603e9032__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                                                 & __Vtemp_h39fff50a__0[0xeU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                                                   & __Vtemp_h245f7eb6__0[0xeU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xeU])))));
    __Vtemp_h603e9032__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                              ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                                                 & __Vtemp_h39fff50a__0[0xfU])
                                              : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                                                   & __Vtemp_h245f7eb6__0[0xfU])
                                                : VTestDriver__ConstPool__CONST_h881bc0c4_0[0xfU])))));
    __Vtemp_h603e9032__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a540f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                                               ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                                                  & __Vtemp_h39fff50a__0[0x10U])
                                               : VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                                                 & __Vtemp_h245f7eb6__0[0x10U])
                                                 : 
                                                VTestDriver__ConstPool__CONST_h881bc0c4_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h00a540f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h881bc0c4_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1364)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c4e_0[0U] 
                          & __Vtemp_h39fff50a__0[0U])
                       : VTestDriver__ConstPool__CONST_h881bc0c4_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1379)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h245f7eb6__0[0U])
                         : VTestDriver__ConstPool__CONST_h881bc0c4_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h603e9032__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h603e9032__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h603e9032__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h603e9032__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h603e9032__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h603e9032__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h603e9032__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h603e9032__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h603e9032__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h603e9032__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h603e9032__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h603e9032__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h603e9032__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h603e9032__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h603e9032__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h603e9032__0[0x10U];
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54009_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a4c3f1_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hf974e5b2_0;
extern const VlWide<13>/*415:0*/ VTestDriver__ConstPool__CONST_h1bb950d3_0;
extern const VlWide<13>/*415:0*/ VTestDriver__ConstPool__CONST_h26e44f64_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54001_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3769(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3769\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_he27da9b4__0;
    VlWide<17>/*543:0*/ __Vtemp_h84c39659__0;
    VlWide<17>/*543:0*/ __Vtemp_hd4e6e053__0;
    VlWide<17>/*543:0*/ __Vtemp_h5d106d2f__0;
    VlWide<17>/*543:0*/ __Vtemp_h680547c5__0;
    VlWide<13>/*415:0*/ __Vtemp_h5271aebf__0;
    VlWide<17>/*543:0*/ __Vtemp_h5f59aadf__0;
    VlWide<17>/*543:0*/ __Vtemp_hb3427451__0;
    VlWide<17>/*543:0*/ __Vtemp_ha41d3038__0;
    VlWide<17>/*543:0*/ __Vtemp_hc2df005f__0;
    VlWide<7>/*223:0*/ __Vtemp_hb0cecc47__0;
    VlWide<17>/*543:0*/ __Vtemp_h95856cdb__0;
    VlWide<17>/*543:0*/ __Vtemp_hcf5bd99c__0;
    VlWide<17>/*543:0*/ __Vtemp_ha131bd20__0;
    VlWide<17>/*543:0*/ __Vtemp_h680547c5__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333) {
        __Vtemp_h84c39659__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode) 
                                          << 1U));
        __Vtemp_h5f59aadf__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size) 
                                          << 1U));
    } else {
        __Vtemp_h84c39659__0[0U] = 0U;
        __Vtemp_h5f59aadf__0[0U] = 0U;
    }
    __Vtemp_h84c39659__0[1U] = 0U;
    __Vtemp_h84c39659__0[2U] = 0U;
    __Vtemp_h84c39659__0[3U] = 0U;
    __Vtemp_h84c39659__0[4U] = 0U;
    __Vtemp_h84c39659__0[5U] = 0U;
    __Vtemp_h84c39659__0[6U] = 0U;
    __Vtemp_h84c39659__0[7U] = 0U;
    __Vtemp_h84c39659__0[8U] = 0U;
    __Vtemp_h84c39659__0[9U] = 0U;
    __Vtemp_h84c39659__0[0xaU] = 0U;
    __Vtemp_h84c39659__0[0xbU] = 0U;
    __Vtemp_h84c39659__0[0xcU] = 0U;
    __Vtemp_h84c39659__0[0xdU] = 0U;
    __Vtemp_h84c39659__0[0xeU] = 0U;
    __Vtemp_h84c39659__0[0xfU] = 0U;
    __Vtemp_h84c39659__0[0x10U] = 0U;
    __Vtemp_hd4e6e053__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                << 2U);
    __Vtemp_hd4e6e053__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                >> 0x1eU);
    __Vtemp_hd4e6e053__0[2U] = 0U;
    __Vtemp_hd4e6e053__0[3U] = 0U;
    __Vtemp_hd4e6e053__0[4U] = 0U;
    __Vtemp_hd4e6e053__0[5U] = 0U;
    __Vtemp_hd4e6e053__0[6U] = 0U;
    __Vtemp_hd4e6e053__0[7U] = 0U;
    __Vtemp_hd4e6e053__0[8U] = 0U;
    __Vtemp_hd4e6e053__0[9U] = 0U;
    __Vtemp_hd4e6e053__0[0xaU] = 0U;
    __Vtemp_hd4e6e053__0[0xbU] = 0U;
    __Vtemp_hd4e6e053__0[0xcU] = 0U;
    __Vtemp_hd4e6e053__0[0xdU] = 0U;
    __Vtemp_hd4e6e053__0[0xeU] = 0U;
    __Vtemp_hd4e6e053__0[0xfU] = 0U;
    __Vtemp_hd4e6e053__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h5d106d2f__0, __Vtemp_h84c39659__0, __Vtemp_hd4e6e053__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h680547c5__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_he27da9b4__0[1U] = 0U;
        __Vtemp_he27da9b4__0[2U] = 0U;
        __Vtemp_he27da9b4__0[3U] = 0U;
        __Vtemp_he27da9b4__0[4U] = 0U;
        __Vtemp_he27da9b4__0[5U] = 0U;
        __Vtemp_he27da9b4__0[6U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_he27da9b4__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h5d106d2f__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h680547c5__0[1U])
                                                     : 0U)));
        __Vtemp_he27da9b4__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h5d106d2f__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h680547c5__0[2U])
                                                     : 0U)));
        __Vtemp_he27da9b4__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h5d106d2f__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h680547c5__0[3U])
                                                     : 0U)));
        __Vtemp_he27da9b4__0[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                            & __Vtemp_h5d106d2f__0[4U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                     & __Vtemp_h680547c5__0[4U])
                                                     : 0U)));
        __Vtemp_he27da9b4__0[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                            & __Vtemp_h5d106d2f__0[5U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                     & __Vtemp_h680547c5__0[5U])
                                                     : 0U)));
        __Vtemp_he27da9b4__0[6U] = (0xfffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                                   & __Vtemp_h5d106d2f__0[6U])
                                                   : 0U)) 
                                              & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                   & __Vtemp_h680547c5__0[6U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h5d106d2f__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h680547c5__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_he27da9b4__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_he27da9b4__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_he27da9b4__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_he27da9b4__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_he27da9b4__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_he27da9b4__0[6U];
    __Vtemp_h5f59aadf__0[1U] = 0U;
    __Vtemp_h5f59aadf__0[2U] = 0U;
    __Vtemp_h5f59aadf__0[3U] = 0U;
    __Vtemp_h5f59aadf__0[4U] = 0U;
    __Vtemp_h5f59aadf__0[5U] = 0U;
    __Vtemp_h5f59aadf__0[6U] = 0U;
    __Vtemp_h5f59aadf__0[7U] = 0U;
    __Vtemp_h5f59aadf__0[8U] = 0U;
    __Vtemp_h5f59aadf__0[9U] = 0U;
    __Vtemp_h5f59aadf__0[0xaU] = 0U;
    __Vtemp_h5f59aadf__0[0xbU] = 0U;
    __Vtemp_h5f59aadf__0[0xcU] = 0U;
    __Vtemp_h5f59aadf__0[0xdU] = 0U;
    __Vtemp_h5f59aadf__0[0xeU] = 0U;
    __Vtemp_h5f59aadf__0[0xfU] = 0U;
    __Vtemp_h5f59aadf__0[0x10U] = 0U;
    __Vtemp_hb3427451__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                << 3U);
    __Vtemp_hb3427451__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_hb3427451__0[2U] = 0U;
    __Vtemp_hb3427451__0[3U] = 0U;
    __Vtemp_hb3427451__0[4U] = 0U;
    __Vtemp_hb3427451__0[5U] = 0U;
    __Vtemp_hb3427451__0[6U] = 0U;
    __Vtemp_hb3427451__0[7U] = 0U;
    __Vtemp_hb3427451__0[8U] = 0U;
    __Vtemp_hb3427451__0[9U] = 0U;
    __Vtemp_hb3427451__0[0xaU] = 0U;
    __Vtemp_hb3427451__0[0xbU] = 0U;
    __Vtemp_hb3427451__0[0xcU] = 0U;
    __Vtemp_hb3427451__0[0xdU] = 0U;
    __Vtemp_hb3427451__0[0xeU] = 0U;
    __Vtemp_hb3427451__0[0xfU] = 0U;
    __Vtemp_hb3427451__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_ha41d3038__0, __Vtemp_h5f59aadf__0, __Vtemp_hb3427451__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_hc2df005f__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h5271aebf__0[1U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_ha41d3038__0[1U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_hc2df005f__0[1U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[1U])))));
    __Vtemp_h5271aebf__0[2U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_ha41d3038__0[2U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_hc2df005f__0[2U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[2U])))));
    __Vtemp_h5271aebf__0[3U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_ha41d3038__0[3U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_hc2df005f__0[3U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[3U])))));
    __Vtemp_h5271aebf__0[4U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_ha41d3038__0[4U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_hc2df005f__0[4U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[4U])))));
    __Vtemp_h5271aebf__0[5U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_ha41d3038__0[5U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_hc2df005f__0[5U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[5U])))));
    __Vtemp_h5271aebf__0[6U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_ha41d3038__0[6U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_hc2df005f__0[6U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[6U])))));
    __Vtemp_h5271aebf__0[7U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_ha41d3038__0[7U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_hc2df005f__0[7U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[7U])))));
    __Vtemp_h5271aebf__0[8U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_ha41d3038__0[8U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_hc2df005f__0[8U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[8U])))));
    __Vtemp_h5271aebf__0[9U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[9U] 
                                               & __Vtemp_ha41d3038__0[9U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[9U] 
                                                 & __Vtemp_hc2df005f__0[9U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[9U])))));
    __Vtemp_h5271aebf__0[0xaU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xaU] 
                                                 & __Vtemp_ha41d3038__0[0xaU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xaU] 
                                                   & __Vtemp_hc2df005f__0[0xaU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU])))));
    __Vtemp_h5271aebf__0[0xbU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xbU] 
                                                 & __Vtemp_ha41d3038__0[0xbU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xbU] 
                                                   & __Vtemp_hc2df005f__0[0xbU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU])))));
    __Vtemp_h5271aebf__0[0xcU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xcU] 
                                                 & __Vtemp_ha41d3038__0[0xcU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xcU] 
                                                   & __Vtemp_hc2df005f__0[0xcU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h26e44f64_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1333)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_ha41d3038__0[0U])
                       : VTestDriver__ConstPool__CONST_h26e44f64_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1348)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_hc2df005f__0[0U])
                         : VTestDriver__ConstPool__CONST_h26e44f64_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h5271aebf__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h5271aebf__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h5271aebf__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h5271aebf__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h5271aebf__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h5271aebf__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h5271aebf__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h5271aebf__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h5271aebf__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h5271aebf__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h5271aebf__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h5271aebf__0[0xcU];
    __Vtemp_h95856cdb__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode) 
                                          << 1U)) : 0U);
    __Vtemp_h95856cdb__0[1U] = 0U;
    __Vtemp_h95856cdb__0[2U] = 0U;
    __Vtemp_h95856cdb__0[3U] = 0U;
    __Vtemp_h95856cdb__0[4U] = 0U;
    __Vtemp_h95856cdb__0[5U] = 0U;
    __Vtemp_h95856cdb__0[6U] = 0U;
    __Vtemp_h95856cdb__0[7U] = 0U;
    __Vtemp_h95856cdb__0[8U] = 0U;
    __Vtemp_h95856cdb__0[9U] = 0U;
    __Vtemp_h95856cdb__0[0xaU] = 0U;
    __Vtemp_h95856cdb__0[0xbU] = 0U;
    __Vtemp_h95856cdb__0[0xcU] = 0U;
    __Vtemp_h95856cdb__0[0xdU] = 0U;
    __Vtemp_h95856cdb__0[0xeU] = 0U;
    __Vtemp_h95856cdb__0[0xfU] = 0U;
    __Vtemp_h95856cdb__0[0x10U] = 0U;
    __Vtemp_hcf5bd99c__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                << 2U);
    __Vtemp_hcf5bd99c__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                >> 0x1eU);
    __Vtemp_hcf5bd99c__0[2U] = 0U;
    __Vtemp_hcf5bd99c__0[3U] = 0U;
    __Vtemp_hcf5bd99c__0[4U] = 0U;
    __Vtemp_hcf5bd99c__0[5U] = 0U;
    __Vtemp_hcf5bd99c__0[6U] = 0U;
    __Vtemp_hcf5bd99c__0[7U] = 0U;
    __Vtemp_hcf5bd99c__0[8U] = 0U;
    __Vtemp_hcf5bd99c__0[9U] = 0U;
    __Vtemp_hcf5bd99c__0[0xaU] = 0U;
    __Vtemp_hcf5bd99c__0[0xbU] = 0U;
    __Vtemp_hcf5bd99c__0[0xcU] = 0U;
    __Vtemp_hcf5bd99c__0[0xdU] = 0U;
    __Vtemp_hcf5bd99c__0[0xeU] = 0U;
    __Vtemp_hcf5bd99c__0[0xfU] = 0U;
    __Vtemp_hcf5bd99c__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_ha131bd20__0, __Vtemp_h95856cdb__0, __Vtemp_hcf5bd99c__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h680547c5__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hb0cecc47__0[1U] = 0U;
        __Vtemp_hb0cecc47__0[2U] = 0U;
        __Vtemp_hb0cecc47__0[3U] = 0U;
        __Vtemp_hb0cecc47__0[4U] = 0U;
        __Vtemp_hb0cecc47__0[5U] = 0U;
        __Vtemp_hb0cecc47__0[6U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_hb0cecc47__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_ha131bd20__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h680547c5__1[1U])
                                                     : 0U)));
        __Vtemp_hb0cecc47__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_ha131bd20__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h680547c5__1[2U])
                                                     : 0U)));
        __Vtemp_hb0cecc47__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_ha131bd20__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h680547c5__1[3U])
                                                     : 0U)));
        __Vtemp_hb0cecc47__0[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[4U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                            & __Vtemp_ha131bd20__0[4U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                     & __Vtemp_h680547c5__1[4U])
                                                     : 0U)));
        __Vtemp_hb0cecc47__0[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[5U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                            & __Vtemp_ha131bd20__0[5U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                     & __Vtemp_h680547c5__1[5U])
                                                     : 0U)));
        __Vtemp_hb0cecc47__0[6U] = (0xfffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[6U] 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                                   & __Vtemp_ha131bd20__0[6U])
                                                   : 0U)) 
                                              & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                   & __Vtemp_h680547c5__1[6U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_ha131bd20__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h680547c5__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hb0cecc47__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hb0cecc47__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_hb0cecc47__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_hb0cecc47__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_hb0cecc47__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_hb0cecc47__0[6U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3770(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3770\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
            ? 0U : ((0x17U >= (0x1fU & ((IData)(3U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state))))
                     ? (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___GEN_0 
                              >> (0x1fU & ((IData)(3U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state)))))
                     : 0U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                          : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                              << 0x2fU) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xfU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x11U))))) 
                << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_denied) 
                              << 0x10U) | ((0xfff8U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_opcode))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                          : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                              << 0x2fU) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xfU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x11U))))) 
                >> 0xfU) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                       : (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0xfU) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0x11U)))) 
                                     >> 0x20U)) << 0x11U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x20000U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                              ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x10U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))
                              : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x11U)) << 0x11U)) 
               | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                             : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2fU) | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x11U)))) 
                           >> 0x20U)) >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_mask)) 
                        << 0x2fU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_address)) 
                                      << 0xfU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_param) 
                                                                         << 3U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_opcode)))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 >> 0x1eU)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 >> 0x1eU)) : 0U)) 
                << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_mask)) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_address)) 
                                        << 0xfU) | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_param) 
                                                                           << 3U) 
                                                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_opcode)))))))) 
                                     >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 >> 0x1eU)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 >> 0x1eU)) : 0U)) 
                >> 1U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                             ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                 << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                           >> 0x1eU))
                             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                                       ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                           << 2U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                           >> 0x1eU))
                                       : 0U)) << 0x1fU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x1eU)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x1eU)) : 0U)) 
                >> 1U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                             ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                 << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                           >> 0x1eU))
                             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                                       ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                           << 2U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                           >> 0x1eU))
                                       : 0U)) << 0x1fU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                 >> 0x1eU)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                       << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                 >> 0x1eU)) : 0U)) 
                >> 1U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                             ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                 << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                           >> 0x1eU))
                             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                                       ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                           << 2U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                           >> 0x1eU))
                                       : 0U)) << 0x1fU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[5U] 
            = ((0x80000000U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0) 
                                 << 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                              << 1U)) 
                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1) 
                                   << 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                                << 1U)))) 
               | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                         << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                   >> 0x1eU)) : 0U) 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                       ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                           << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                     >> 0x1eU)) : 0U)) 
                  >> 1U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3771(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3771\n"); );
    // Init
    VlWide<13>/*415:0*/ __Vtemp_ha34d558d__0;
    VlWide<17>/*543:0*/ __Vtemp_h2878c9b1__0;
    VlWide<17>/*543:0*/ __Vtemp_hcf5bea29__0;
    VlWide<17>/*543:0*/ __Vtemp_h5787843c__0;
    VlWide<17>/*543:0*/ __Vtemp_hc2df005f__0;
    // Body
    __Vtemp_h2878c9b1__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_h2878c9b1__0[1U] = 0U;
    __Vtemp_h2878c9b1__0[2U] = 0U;
    __Vtemp_h2878c9b1__0[3U] = 0U;
    __Vtemp_h2878c9b1__0[4U] = 0U;
    __Vtemp_h2878c9b1__0[5U] = 0U;
    __Vtemp_h2878c9b1__0[6U] = 0U;
    __Vtemp_h2878c9b1__0[7U] = 0U;
    __Vtemp_h2878c9b1__0[8U] = 0U;
    __Vtemp_h2878c9b1__0[9U] = 0U;
    __Vtemp_h2878c9b1__0[0xaU] = 0U;
    __Vtemp_h2878c9b1__0[0xbU] = 0U;
    __Vtemp_h2878c9b1__0[0xcU] = 0U;
    __Vtemp_h2878c9b1__0[0xdU] = 0U;
    __Vtemp_h2878c9b1__0[0xeU] = 0U;
    __Vtemp_h2878c9b1__0[0xfU] = 0U;
    __Vtemp_h2878c9b1__0[0x10U] = 0U;
    __Vtemp_hcf5bea29__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                << 3U);
    __Vtemp_hcf5bea29__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_hcf5bea29__0[2U] = 0U;
    __Vtemp_hcf5bea29__0[3U] = 0U;
    __Vtemp_hcf5bea29__0[4U] = 0U;
    __Vtemp_hcf5bea29__0[5U] = 0U;
    __Vtemp_hcf5bea29__0[6U] = 0U;
    __Vtemp_hcf5bea29__0[7U] = 0U;
    __Vtemp_hcf5bea29__0[8U] = 0U;
    __Vtemp_hcf5bea29__0[9U] = 0U;
    __Vtemp_hcf5bea29__0[0xaU] = 0U;
    __Vtemp_hcf5bea29__0[0xbU] = 0U;
    __Vtemp_hcf5bea29__0[0xcU] = 0U;
    __Vtemp_hcf5bea29__0[0xdU] = 0U;
    __Vtemp_hcf5bea29__0[0xeU] = 0U;
    __Vtemp_hcf5bea29__0[0xfU] = 0U;
    __Vtemp_hcf5bea29__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h5787843c__0, __Vtemp_h2878c9b1__0, __Vtemp_hcf5bea29__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_hc2df005f__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_ha34d558d__0[1U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h5787843c__0[1U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_hc2df005f__0[1U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[1U])))));
    __Vtemp_ha34d558d__0[2U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h5787843c__0[2U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_hc2df005f__0[2U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[2U])))));
    __Vtemp_ha34d558d__0[3U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h5787843c__0[3U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_hc2df005f__0[3U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[3U])))));
    __Vtemp_ha34d558d__0[4U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h5787843c__0[4U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_hc2df005f__0[4U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[4U])))));
    __Vtemp_ha34d558d__0[5U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h5787843c__0[5U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_hc2df005f__0[5U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[5U])))));
    __Vtemp_ha34d558d__0[6U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h5787843c__0[6U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_hc2df005f__0[6U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[6U])))));
    __Vtemp_ha34d558d__0[7U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h5787843c__0[7U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_hc2df005f__0[7U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[7U])))));
    __Vtemp_ha34d558d__0[8U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h5787843c__0[8U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_hc2df005f__0[8U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[8U])))));
    __Vtemp_ha34d558d__0[9U] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h26e44f64_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[9U] 
                                               & __Vtemp_h5787843c__0[9U])
                                            : VTestDriver__ConstPool__CONST_h26e44f64_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[9U] 
                                                 & __Vtemp_hc2df005f__0[9U])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[9U])))));
    __Vtemp_ha34d558d__0[0xaU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xaU] 
                                                 & __Vtemp_h5787843c__0[0xaU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xaU] 
                                                   & __Vtemp_hc2df005f__0[0xaU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xaU])))));
    __Vtemp_ha34d558d__0[0xbU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xbU] 
                                                 & __Vtemp_h5787843c__0[0xbU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xbU] 
                                                   & __Vtemp_hc2df005f__0[0xbU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xbU])))));
    __Vtemp_ha34d558d__0[0xcU] = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                                              ? (VTestDriver__ConstPool__CONST_h00a54001_0[0xcU] 
                                                 & __Vtemp_h5787843c__0[0xcU])
                                              : VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                                                ? (
                                                   VTestDriver__ConstPool__CONST_h00a4c3f1_0[0xcU] 
                                                   & __Vtemp_hc2df005f__0[0xcU])
                                                : VTestDriver__ConstPool__CONST_h26e44f64_0[0xcU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h1bb950d3_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h26e44f64_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1333)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h5787843c__0[0U])
                       : VTestDriver__ConstPool__CONST_h26e44f64_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1348)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_hc2df005f__0[0U])
                         : VTestDriver__ConstPool__CONST_h26e44f64_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_ha34d558d__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_ha34d558d__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_ha34d558d__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_ha34d558d__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_ha34d558d__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_ha34d558d__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_ha34d558d__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_ha34d558d__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_ha34d558d__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_ha34d558d__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_ha34d558d__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_ha34d558d__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid) 
                         & (~ (IData)((0U != (3U & 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits) 
                                               >> 4U)))))) 
                        & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_883)
                     ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_complete_on_issue))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_70) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid)))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
            ? 0U : (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_3)
                              ? ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_0) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))
                                   ? (~ (0x7fffffU 
                                         & (((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))) 
                                            >> 4U)))
                                   : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_1) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode))
                                             ? (3U 
                                                & (~ 
                                                   (0x1ffffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_size)) 
                                                       >> 4U))))
                                             : 0U))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3) 
                                 - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_0_d_ready) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_valid))))));
}
