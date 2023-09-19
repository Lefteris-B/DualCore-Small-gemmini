// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3674(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3674\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_l2_ctl_in_a_ready) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___T_1749) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2 
                = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_size)) 
                                              >> 4U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3 
                = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_3)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_size)) 
                                              >> 4U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3) 
                                       - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3675(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3675\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__watchdog_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT___fragmenter_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___T_1749) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1 
                = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_size)) 
                                              >> 4U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__watchdog_1 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT__do_deq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__watchdog_1));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3676(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3676\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___last_row_T_4) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter 
                = ((0U == (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__actual_rows_read) 
                                    - (IData)(1U))))
                    ? 0U : (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___GEN_8) 
                                     >= (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__actual_rows_read) 
                                                  - (IData)(1U))))
                                     ? (((IData)(1U) 
                                         - (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__actual_rows_read) 
                                             - (IData)(1U)) 
                                            - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter))) 
                                        - (IData)(1U))
                                     : ((IData)(1U) 
                                        + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__row_counter)))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_3)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3) 
                                       - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3677(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3677\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value))));
        }
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3678(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3678\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3679(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3679\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x10U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

extern const VlWide<513>/*16415:0*/ VTestDriver__ConstPool__CONST_h481e95a4_0;
extern const VlWide<130>/*4159:0*/ VTestDriver__ConstPool__CONST_h58046101_0;
extern const VlWide<513>/*16415:0*/ VTestDriver__ConstPool__CONST_hd6e5c6ea_0;
extern const VlWide<513>/*16415:0*/ VTestDriver__ConstPool__CONST_h481e15b8_0;
extern const VlWide<513>/*16415:0*/ VTestDriver__ConstPool__CONST_h481e95a0_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3680(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3680\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h6c6526ce__0;
    VlWide<513>/*16415:0*/ __Vtemp_h0696ecb0__0;
    VlWide<513>/*16415:0*/ __Vtemp_h69199b9e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h4aa1aa3b__0;
    VlWide<130>/*4159:0*/ __Vtemp_h61f5ed2d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h9efdc387__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7e4a5dc9__0;
    VlWide<513>/*16415:0*/ __Vtemp_hbeb4de7b__0;
    VlWide<513>/*16415:0*/ __Vtemp_hd577ced4__0;
    VlWide<130>/*4159:0*/ __Vtemp_h954274f4__0;
    VlWide<130>/*4159:0*/ __Vtemp_hac70a99c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1bfbfec2__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4adbcf92__0;
    VlWide<130>/*4159:0*/ __Vtemp_h14733d90__0;
    VlWide<513>/*16415:0*/ __Vtemp_h36e212be__0;
    VlWide<513>/*16415:0*/ __Vtemp_h5fa05e50__0;
    VlWide<513>/*16415:0*/ __Vtemp_h341e9420__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2e330be4__0;
    VlWide<130>/*4159:0*/ __Vtemp_hd7741db3__0;
    VlWide<130>/*4159:0*/ __Vtemp_h3b575073__0;
    VlWide<513>/*16415:0*/ __Vtemp_h82d212e7__0;
    VlWide<513>/*16415:0*/ __Vtemp_heb2702e4__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb74e11f7__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2efc1c2a__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc73a2f90__0;
    VlWide<130>/*4159:0*/ __Vtemp_hea161304__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_h0696ecb0__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 5U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,13, __Vtemp_h69199b9e__0, __Vtemp_h0696ecb0__0, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                              [0U][0U] >> 6U)));
    VL_AND_W(513, __Vtemp_h4aa1aa3b__0, VTestDriver__ConstPool__CONST_h481e95a4_0, __Vtemp_h69199b9e__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h61f5ed2d__0, __Vtemp_h4aa1aa3b__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h9efdc387__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done), __Vtemp_h61f5ed2d__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h7e4a5dc9__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes, __Vtemp_h9efdc387__0);
    VL_SHIFTL_WWI(16399,16399,13, __Vtemp_hbeb4de7b__0, VTestDriver__ConstPool__CONST_hd6e5c6ea_0, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][2U] >> 0x10U)));
    VL_AND_W(513, __Vtemp_hd577ced4__0, VTestDriver__ConstPool__CONST_h481e15b8_0, __Vtemp_hbeb4de7b__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h954274f4__0, __Vtemp_hd577ced4__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hac70a99c__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq), __Vtemp_h954274f4__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h1bfbfec2__0, __Vtemp_hac70a99c__0);
    VL_AND_W(130, __Vtemp_h4adbcf92__0, __Vtemp_h7e4a5dc9__0, __Vtemp_h1bfbfec2__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr = 0U;
        VL_ASSIGN_W(4160,__Vtemp_h6c6526ce__0, VTestDriver__ConstPool__CONST_h58046101_0);
    } else {
        if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                      >> 9U)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr)));
        }
        VL_ASSIGN_W(4160,__Vtemp_h6c6526ce__0, __Vtemp_h4adbcf92__0);
    }
    VL_ASSIGN_W(4160,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes, __Vtemp_h6c6526ce__0);
    VL_EXTEND_WI(16387,4, __Vtemp_h36e212be__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (0xeU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,13, __Vtemp_h5fa05e50__0, __Vtemp_h36e212be__0, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                              [0U][0U] >> 6U)));
    VL_AND_W(513, __Vtemp_h341e9420__0, VTestDriver__ConstPool__CONST_h481e95a0_0, __Vtemp_h5fa05e50__0);
    VL_SEL_WWII(4160,16387, __Vtemp_h2e330be4__0, __Vtemp_h341e9420__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hd7741db3__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done), __Vtemp_h2e330be4__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h3b575073__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_opcodes, __Vtemp_hd7741db3__0);
    VL_SHIFTL_WWI(16399,16399,13, __Vtemp_h82d212e7__0, VTestDriver__ConstPool__CONST_hd6e5c6ea_0, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][2U] >> 0x10U)));
    VL_AND_W(513, __Vtemp_heb2702e4__0, VTestDriver__ConstPool__CONST_h481e15b8_0, __Vtemp_h82d212e7__0);
    VL_SEL_WWII(4160,16399, __Vtemp_hb74e11f7__0, __Vtemp_heb2702e4__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h2efc1c2a__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq), __Vtemp_hb74e11f7__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_hc73a2f90__0, __Vtemp_h2efc1c2a__0);
    VL_AND_W(130, __Vtemp_hea161304__0, __Vtemp_h3b575073__0, __Vtemp_hc73a2f90__0);
    VL_COND_WIWW(4160, __Vtemp_h14733d90__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h58046101_0, __Vtemp_hea161304__0);
    VL_ASSIGN_W(4160,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_opcodes, __Vtemp_h14733d90__0);
}

extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hd0572db1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3681(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3681\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h84693779__0;
    VlWide<64>/*2047:0*/ __Vtemp_hfa3eb3d3__0;
    VlWide<64>/*2047:0*/ __Vtemp_hb02aaf9f__0;
    // Body
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hfa3eb3d3__0, VTestDriver__ConstPool__CONST_ha056d847_0, 
                  (0x7ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                             [0U][0U] >> 8U)));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hb02aaf9f__0, VTestDriver__ConstPool__CONST_ha056d847_0, 
                  (0x7ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                             [0U][2U] >> 0x12U)));
    __Vtemp_h84693779__0[1U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[1U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[1U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_h84693779__0[2U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[2U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[2U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_h84693779__0[3U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[3U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[3U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_h84693779__0[4U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[4U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[4U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_h84693779__0[5U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[5U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[5U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_h84693779__0[6U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[6U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[6U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_h84693779__0[7U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[7U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[7U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_h84693779__0[8U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[8U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[8U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_h84693779__0[9U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                            ? __Vtemp_hfa3eb3d3__0[9U]
                                            : VTestDriver__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                              ? __Vtemp_hb02aaf9f__0[9U]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_h84693779__0[0xaU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xaU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_h84693779__0[0xbU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xbU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_h84693779__0[0xcU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xcU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_h84693779__0[0xdU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xdU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_h84693779__0[0xeU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xeU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_h84693779__0[0xfU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                              ? __Vtemp_hfa3eb3d3__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                ? __Vtemp_hb02aaf9f__0[0xfU]
                                                : VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_h84693779__0[0x10U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_h84693779__0[0x11U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x11U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x11U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_h84693779__0[0x12U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x12U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x12U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_h84693779__0[0x13U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x13U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x13U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_h84693779__0[0x14U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x14U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x14U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_h84693779__0[0x15U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x15U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x15U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_h84693779__0[0x16U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x16U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x16U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_h84693779__0[0x17U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x17U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x17U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_h84693779__0[0x18U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x18U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x18U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_h84693779__0[0x19U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x19U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x19U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_h84693779__0[0x1aU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1aU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1aU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_h84693779__0[0x1bU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1bU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1bU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_h84693779__0[0x1cU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1cU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1cU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_h84693779__0[0x1dU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1dU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1dU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_h84693779__0[0x1eU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1eU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1eU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_h84693779__0[0x1fU] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x1fU]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x1fU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_h84693779__0[0x20U] = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                                               ? __Vtemp_hfa3eb3d3__0[0x20U]
                                               : VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                                                 ? 
                                                __Vtemp_hb02aaf9f__0[0x20U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done)
                       ? __Vtemp_hfa3eb3d3__0[0U] : 
                      VTestDriver__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq)
                         ? __Vtemp_hb02aaf9f__0[0U]
                         : VTestDriver__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[1U] 
        = __Vtemp_h84693779__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[2U] 
        = __Vtemp_h84693779__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[3U] 
        = __Vtemp_h84693779__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[4U] 
        = __Vtemp_h84693779__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[5U] 
        = __Vtemp_h84693779__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[6U] 
        = __Vtemp_h84693779__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[7U] 
        = __Vtemp_h84693779__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[8U] 
        = __Vtemp_h84693779__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[9U] 
        = __Vtemp_h84693779__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xaU] 
        = __Vtemp_h84693779__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xbU] 
        = __Vtemp_h84693779__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xcU] 
        = __Vtemp_h84693779__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xdU] 
        = __Vtemp_h84693779__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xeU] 
        = __Vtemp_h84693779__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0xfU] 
        = __Vtemp_h84693779__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x10U] 
        = __Vtemp_h84693779__0[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x11U] 
        = __Vtemp_h84693779__0[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x12U] 
        = __Vtemp_h84693779__0[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x13U] 
        = __Vtemp_h84693779__0[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x14U] 
        = __Vtemp_h84693779__0[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x15U] 
        = __Vtemp_h84693779__0[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x16U] 
        = __Vtemp_h84693779__0[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x17U] 
        = __Vtemp_h84693779__0[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x18U] 
        = __Vtemp_h84693779__0[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x19U] 
        = __Vtemp_h84693779__0[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1aU] 
        = __Vtemp_h84693779__0[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1bU] 
        = __Vtemp_h84693779__0[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1cU] 
        = __Vtemp_h84693779__0[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1dU] 
        = __Vtemp_h84693779__0[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1eU] 
        = __Vtemp_h84693779__0[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x1fU] 
        = __Vtemp_h84693779__0[0x1fU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight[0x20U] 
        = __Vtemp_h84693779__0[0x20U];
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_r = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_b_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_r 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_12) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___fpuOpt_io_sboard_clr))
                ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_11 
                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___fpuOpt_io_sboard_clr)
                          ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___fpuOpt_io_sboard_clra))
                          : 0U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_12)
                                      ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_11
                                      : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_6))) 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_T_4) 
                                         | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_stall_fpu_r)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_b_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_b_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_b_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 7U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_block_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___T_12) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_block_r))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3682(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3682\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_253) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_204) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_14)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_155) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_13)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_249) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_11)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_200) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_10)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_245) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_241) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_143) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_237) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_139) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_13)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_135) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_9)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3683(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3683\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_131) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_225) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_127) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_221) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_98) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_4)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_233) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_11)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_94) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_229) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_90) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_12)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_180) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_6)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_86) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_8)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3684(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3684\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_176) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_66) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_4)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_62) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_164) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_6)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_102) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_8)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_160) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_78) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_213) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_82) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_4)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_217) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_11)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_196) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_6)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3685(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3685\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_188) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_14)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_74) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_12)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_151) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_9)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_168) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_10)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_172) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_14)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_184) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_10)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_70) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_8)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_192) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_147) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_106) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_12)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_209) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_3)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3686(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3686\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_119) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_9)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_111) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_115) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_123) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_13)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___len_T_4) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr)
                          ? (((IData)(1U) - ((IData)(1U) 
                                             - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr))) 
                             - (IData)(1U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__waddr) 
                                               - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
}

extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_h3892cc72_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851b57_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h478702bb_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d99c76_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d81c7e_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3687(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3687\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h71ff2bdb__0;
    VlWide<33>/*1055:0*/ __Vtemp_hdb864530__0;
    VlWide<33>/*1055:0*/ __Vtemp_h71c7f3d0__0;
    VlWide<33>/*1055:0*/ __Vtemp_hff89e1d6__0;
    VlWide<9>/*287:0*/ __Vtemp_h009cc55d__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6e43b4fd__0;
    VlWide<33>/*1055:0*/ __Vtemp_h44b0646d__0;
    VlWide<33>/*1055:0*/ __Vtemp_hff89e1d6__1;
    VlWide<3>/*95:0*/ __Vtemp_he335d90f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_h27e3828d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_hb0a8386c__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976) {
        __Vtemp_hdb864530__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h6e43b4fd__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_hdb864530__0[0U] = 0U;
        __Vtemp_h6e43b4fd__0[0U] = 0U;
    }
    __Vtemp_hdb864530__0[1U] = 0U;
    __Vtemp_hdb864530__0[2U] = 0U;
    __Vtemp_hdb864530__0[3U] = 0U;
    __Vtemp_hdb864530__0[4U] = 0U;
    __Vtemp_hdb864530__0[5U] = 0U;
    __Vtemp_hdb864530__0[6U] = 0U;
    __Vtemp_hdb864530__0[7U] = 0U;
    __Vtemp_hdb864530__0[8U] = 0U;
    __Vtemp_hdb864530__0[9U] = 0U;
    __Vtemp_hdb864530__0[0xaU] = 0U;
    __Vtemp_hdb864530__0[0xbU] = 0U;
    __Vtemp_hdb864530__0[0xcU] = 0U;
    __Vtemp_hdb864530__0[0xdU] = 0U;
    __Vtemp_hdb864530__0[0xeU] = 0U;
    __Vtemp_hdb864530__0[0xfU] = 0U;
    __Vtemp_hdb864530__0[0x10U] = 0U;
    __Vtemp_hdb864530__0[0x11U] = 0U;
    __Vtemp_hdb864530__0[0x12U] = 0U;
    __Vtemp_hdb864530__0[0x13U] = 0U;
    __Vtemp_hdb864530__0[0x14U] = 0U;
    __Vtemp_hdb864530__0[0x15U] = 0U;
    __Vtemp_hdb864530__0[0x16U] = 0U;
    __Vtemp_hdb864530__0[0x17U] = 0U;
    __Vtemp_hdb864530__0[0x18U] = 0U;
    __Vtemp_hdb864530__0[0x19U] = 0U;
    __Vtemp_hdb864530__0[0x1aU] = 0U;
    __Vtemp_hdb864530__0[0x1bU] = 0U;
    __Vtemp_hdb864530__0[0x1cU] = 0U;
    __Vtemp_hdb864530__0[0x1dU] = 0U;
    __Vtemp_hdb864530__0[0x1eU] = 0U;
    __Vtemp_hdb864530__0[0x1fU] = 0U;
    __Vtemp_hdb864530__0[0x20U] = 0U;
    VL_SHIFTL_WWI(1027,1027,9, __Vtemp_h71c7f3d0__0, __Vtemp_hdb864530__0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    VL_SHIFTL_WWI(1039,1039,9, __Vtemp_hff89e1d6__0, VTestDriver__ConstPool__CONST_h3892cc72_0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h71ff2bdb__0[1U] = (VTestDriver__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h71c7f3d0__0[1U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_hff89e1d6__0[1U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h71ff2bdb__0[2U] = (VTestDriver__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h71c7f3d0__0[2U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_hff89e1d6__0[2U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h71ff2bdb__0[3U] = (VTestDriver__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h71c7f3d0__0[3U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_hff89e1d6__0[3U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h71ff2bdb__0[4U] = (VTestDriver__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h71c7f3d0__0[4U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_hff89e1d6__0[4U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h71ff2bdb__0[5U] = (VTestDriver__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h71c7f3d0__0[5U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_hff89e1d6__0[5U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h71ff2bdb__0[6U] = (VTestDriver__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h71c7f3d0__0[6U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_hff89e1d6__0[6U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h71ff2bdb__0[7U] = (VTestDriver__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h71c7f3d0__0[7U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_hff89e1d6__0[7U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h71ff2bdb__0[8U] = (VTestDriver__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h71c7f3d0__0[8U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_hff89e1d6__0[8U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h71c7f3d0__0[0U])
                       : VTestDriver__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_hff89e1d6__0[0U])
                         : VTestDriver__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h71ff2bdb__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h71ff2bdb__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h71ff2bdb__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h71ff2bdb__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h71ff2bdb__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h71ff2bdb__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h71ff2bdb__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h71ff2bdb__0[8U];
    __Vtemp_h6e43b4fd__0[1U] = 0U;
    __Vtemp_h6e43b4fd__0[2U] = 0U;
    __Vtemp_h6e43b4fd__0[3U] = 0U;
    __Vtemp_h6e43b4fd__0[4U] = 0U;
    __Vtemp_h6e43b4fd__0[5U] = 0U;
    __Vtemp_h6e43b4fd__0[6U] = 0U;
    __Vtemp_h6e43b4fd__0[7U] = 0U;
    __Vtemp_h6e43b4fd__0[8U] = 0U;
    __Vtemp_h6e43b4fd__0[9U] = 0U;
    __Vtemp_h6e43b4fd__0[0xaU] = 0U;
    __Vtemp_h6e43b4fd__0[0xbU] = 0U;
    __Vtemp_h6e43b4fd__0[0xcU] = 0U;
    __Vtemp_h6e43b4fd__0[0xdU] = 0U;
    __Vtemp_h6e43b4fd__0[0xeU] = 0U;
    __Vtemp_h6e43b4fd__0[0xfU] = 0U;
    __Vtemp_h6e43b4fd__0[0x10U] = 0U;
    __Vtemp_h6e43b4fd__0[0x11U] = 0U;
    __Vtemp_h6e43b4fd__0[0x12U] = 0U;
    __Vtemp_h6e43b4fd__0[0x13U] = 0U;
    __Vtemp_h6e43b4fd__0[0x14U] = 0U;
    __Vtemp_h6e43b4fd__0[0x15U] = 0U;
    __Vtemp_h6e43b4fd__0[0x16U] = 0U;
    __Vtemp_h6e43b4fd__0[0x17U] = 0U;
    __Vtemp_h6e43b4fd__0[0x18U] = 0U;
    __Vtemp_h6e43b4fd__0[0x19U] = 0U;
    __Vtemp_h6e43b4fd__0[0x1aU] = 0U;
    __Vtemp_h6e43b4fd__0[0x1bU] = 0U;
    __Vtemp_h6e43b4fd__0[0x1cU] = 0U;
    __Vtemp_h6e43b4fd__0[0x1dU] = 0U;
    __Vtemp_h6e43b4fd__0[0x1eU] = 0U;
    __Vtemp_h6e43b4fd__0[0x1fU] = 0U;
    __Vtemp_h6e43b4fd__0[0x20U] = 0U;
    VL_SHIFTL_WWI(1027,1027,9, __Vtemp_h44b0646d__0, __Vtemp_h6e43b4fd__0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    VL_SHIFTL_WWI(1039,1039,9, __Vtemp_hff89e1d6__1, VTestDriver__ConstPool__CONST_h3892cc72_0, 
                  (0x1fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h009cc55d__0[1U] = (VTestDriver__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h44b0646d__0[1U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_hff89e1d6__1[1U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h009cc55d__0[2U] = (VTestDriver__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h44b0646d__0[2U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_hff89e1d6__1[2U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h009cc55d__0[3U] = (VTestDriver__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h44b0646d__0[3U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_hff89e1d6__1[3U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h009cc55d__0[4U] = (VTestDriver__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h44b0646d__0[4U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_hff89e1d6__1[4U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h009cc55d__0[5U] = (VTestDriver__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h44b0646d__0[5U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_hff89e1d6__1[5U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h009cc55d__0[6U] = (VTestDriver__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h44b0646d__0[6U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_hff89e1d6__1[6U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h009cc55d__0[7U] = (VTestDriver__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h44b0646d__0[7U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_hff89e1d6__1[7U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h009cc55d__0[8U] = (VTestDriver__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                            ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h44b0646d__0[8U])
                                            : VTestDriver__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                              ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_hff89e1d6__1[8U])
                                              : VTestDriver__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                       ? (VTestDriver__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h44b0646d__0[0U])
                       : VTestDriver__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                         ? (VTestDriver__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_hff89e1d6__1[0U])
                         : VTestDriver__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h009cc55d__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h009cc55d__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h009cc55d__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h009cc55d__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h009cc55d__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h009cc55d__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h009cc55d__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h009cc55d__0[8U];
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h27e3828d__0, __Vtemp_hd2b6c582__0, 
                  (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb0a8386c__0, __Vtemp_hd2b6c582__1, 
                  (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_he335d90f__0[1U] = 0U;
        __Vtemp_he335d90f__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        __Vtemp_he335d90f__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                         ? __Vtemp_h27e3828d__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                                     ? 
                                                    __Vtemp_hb0a8386c__0[1U]
                                                     : 0U)));
        __Vtemp_he335d90f__0[2U] = (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                                               ? __Vtemp_h27e3828d__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                                                 ? 
                                                __Vtemp_hb0a8386c__0[2U]
                                                 : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_976)
                    ? __Vtemp_h27e3828d__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_991)
                      ? __Vtemp_hb0a8386c__0[0U] : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_he335d90f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_he335d90f__0[2U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3688(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3688\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__cmd_q__DOT___len_T_4)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__is_config))))) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT___T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state = 1U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__state 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT___state_T)
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT___state_T_1) 
                            << 1U));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20) 
                     + ((0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19) 
                     + ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18) 
                     + ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17) 
                     + ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16) 
                     + ((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3689(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3689\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15) 
                     + ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14) 
                     + ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13) 
                     + ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12) 
                     + ((0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11) 
                     + ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10) 
                     + ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3690(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3690\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9) 
                     + ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5) 
                     + ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1) 
                     + ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2) 
                     + ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3) 
                     + ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4) 
                     + ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3691(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3691\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6) 
                     + ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7) 
                     + ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8) 
                     + ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                    - ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3692(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3692\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3693(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3693\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_a_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_valid))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__a_first)
                          ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_fire) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh 
                = ((6U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh) 
                          << 1U)) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__tail_oh) 
                                           >> 2U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT__req_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT___T_2) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT___GEN_0)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT__req_valid))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3694(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3694\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_issued 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_971) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_760)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_issued)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_perf_acquire_T) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr 
                = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr) 
                           >= (1U & (((IData)(1U) - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop)) 
                                     - (IData)(1U)))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop))
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop) 
                              - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___io_deq_bits_1_T_12)) 
                             - (IData)(1U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop))));
        }
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en)) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidate) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] = 0U;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] = 0U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) {
            if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[0U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[1U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[2U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[3U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[4U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[5U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[6U]);
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
                    = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
                       | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[7U]);
            } else {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[0U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[1U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[2U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[3U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[4U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[5U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[6U]));
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
                    = (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U]) 
                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_3[7U]));
            }
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3695(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3695\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidate) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1440) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1409) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_1 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_1__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_1_valid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_0 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_0_valid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_3 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_3__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_3_valid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_2 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__arb_2__DOT___ctrl_T_10)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__inputs_2_valid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__fired_masks_0_2)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3696(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3696\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h3d7da42d__0;
    VlWide<513>/*16415:0*/ __Vtemp_h58865139__0;
    VlWide<513>/*16415:0*/ __Vtemp_he46bda21__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf71f499b__0;
    VlWide<130>/*4159:0*/ __Vtemp_heb82843a__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha52fa52e__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7eba47a4__0;
    VlWide<513>/*16415:0*/ __Vtemp_h6f2af1aa__0;
    VlWide<513>/*16415:0*/ __Vtemp_h063ceee2__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4b73120f__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7b9bbc4c__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc080632f__0;
    VlWide<130>/*4159:0*/ __Vtemp_h811cf81c__0;
    // Body
    VL_EXTEND_WI(16387,4, __Vtemp_h58865139__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,13, __Vtemp_he46bda21__0, __Vtemp_h58865139__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(513, __Vtemp_hf71f499b__0, VTestDriver__ConstPool__CONST_h481e95a0_0, __Vtemp_he46bda21__0);
    VL_SEL_WWII(4160,16387, __Vtemp_heb82843a__0, __Vtemp_hf71f499b__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_ha52fa52e__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7), __Vtemp_heb82843a__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h7eba47a4__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes, __Vtemp_ha52fa52e__0);
    VL_SHIFTL_WWI(16399,16399,13, __Vtemp_h6f2af1aa__0, VTestDriver__ConstPool__CONST_hd6e5c6ea_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(513, __Vtemp_h063ceee2__0, VTestDriver__ConstPool__CONST_h481e15b8_0, __Vtemp_h6f2af1aa__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h4b73120f__0, __Vtemp_h063ceee2__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h7b9bbc4c__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7), __Vtemp_h4b73120f__0, VTestDriver__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_hc080632f__0, __Vtemp_h7b9bbc4c__0);
    VL_AND_W(130, __Vtemp_h811cf81c__0, __Vtemp_h7eba47a4__0, __Vtemp_hc080632f__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        VL_ASSIGN_W(4160,__Vtemp_h3d7da42d__0, VTestDriver__ConstPool__CONST_h58046101_0);
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
    } else {
        VL_ASSIGN_W(4160,__Vtemp_h3d7da42d__0, __Vtemp_h811cf81c__0);
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_1047) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))
                                                ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                : 0U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_393) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__a_first_1)
                             ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_1_a_bits_opcode))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_1_a_bits_size)) 
                                               >> 4U))))
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
    }
    VL_ASSIGN_W(4160,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h3d7da42d__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3697(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3697\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_1)
                             ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_opcode))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size)) 
                                               >> 4U))))
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_1047) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_perf_acquire_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_1)
                             ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                               >> 4U))))
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                                              ? ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source))
                                              : 0U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3698(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3698\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                                              ? ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source))
                                              : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                                              ? ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source))
                                              : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight 
            = (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source))
                                              : 0U))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_1)
                             ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]) ? 0U : (~ 
                                                   (0x7fffffU 
                                                    & (((IData)(0xfffU) 
                                                        << 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 6U))) 
                                                       >> 4U))))
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h26ec0c50_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851b6f_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52859b67_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3699(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3699\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h02a42233__0;
    VlWide<9>/*287:0*/ __Vtemp_h498e906e__0;
    VlWide<9>/*287:0*/ __Vtemp_h3fa380b5__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__0;
    VlWide<3>/*95:0*/ __Vtemp_hd2429c8e__0;
    VlWide<9>/*287:0*/ __Vtemp_he3816307__0;
    VlWide<9>/*287:0*/ __Vtemp_h29279118__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__1;
    VlWide<3>/*95:0*/ __Vtemp_hb442037f__0;
    VlWide<9>/*287:0*/ __Vtemp_h5ce52080__0;
    VlWide<9>/*287:0*/ __Vtemp_h69ce1447__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__2;
    // Body
    __Vtemp_h498e906e__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U);
    __Vtemp_h498e906e__0[1U] = 0U;
    __Vtemp_h498e906e__0[2U] = 0U;
    __Vtemp_h498e906e__0[3U] = 0U;
    __Vtemp_h498e906e__0[4U] = 0U;
    __Vtemp_h498e906e__0[5U] = 0U;
    __Vtemp_h498e906e__0[6U] = 0U;
    __Vtemp_h498e906e__0[7U] = 0U;
    __Vtemp_h498e906e__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h3fa380b5__0, __Vtemp_h498e906e__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__0, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__acknum = 0U;
        __Vtemp_h02a42233__0[1U] = 0U;
        __Vtemp_h02a42233__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))))));
        }
        __Vtemp_h02a42233__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h3fa380b5__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__0[1U])
                                                     : 0U)));
        __Vtemp_h02a42233__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h3fa380b5__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__0[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h3fa380b5__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h02a42233__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h02a42233__0[2U];
    __Vtemp_he3816307__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U);
    __Vtemp_he3816307__0[1U] = 0U;
    __Vtemp_he3816307__0[2U] = 0U;
    __Vtemp_he3816307__0[3U] = 0U;
    __Vtemp_he3816307__0[4U] = 0U;
    __Vtemp_he3816307__0[5U] = 0U;
    __Vtemp_he3816307__0[6U] = 0U;
    __Vtemp_he3816307__0[7U] = 0U;
    __Vtemp_he3816307__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h29279118__0, __Vtemp_he3816307__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__1, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hd2429c8e__0[1U] = 0U;
        __Vtemp_hd2429c8e__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_hd2429c8e__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h29279118__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__1[1U])
                                                     : 0U)));
        __Vtemp_hd2429c8e__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h29279118__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__1[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h29279118__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hd2429c8e__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hd2429c8e__0[2U];
    __Vtemp_h5ce52080__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U);
    __Vtemp_h5ce52080__0[1U] = 0U;
    __Vtemp_h5ce52080__0[2U] = 0U;
    __Vtemp_h5ce52080__0[3U] = 0U;
    __Vtemp_h5ce52080__0[4U] = 0U;
    __Vtemp_h5ce52080__0[5U] = 0U;
    __Vtemp_h5ce52080__0[6U] = 0U;
    __Vtemp_h5ce52080__0[7U] = 0U;
    __Vtemp_h5ce52080__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h69ce1447__0, __Vtemp_h5ce52080__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__2, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hb442037f__0[1U] = 0U;
        __Vtemp_hb442037f__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_hb442037f__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h69ce1447__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__2[1U])
                                                     : 0U)));
        __Vtemp_hb442037f__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h69ce1447__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__2[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h69ce1447__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__2[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hb442037f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hb442037f__0[2U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3700(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3700\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h17fb4ce9__0;
    VlWide<9>/*287:0*/ __Vtemp_h59f37623__0;
    VlWide<9>/*287:0*/ __Vtemp_h0971eff0__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__0;
    VlWide<3>/*95:0*/ __Vtemp_hfaee7bdd__0;
    VlWide<9>/*287:0*/ __Vtemp_h16f65261__0;
    VlWide<9>/*287:0*/ __Vtemp_h46fd591c__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__1;
    // Body
    __Vtemp_h59f37623__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U);
    __Vtemp_h59f37623__0[1U] = 0U;
    __Vtemp_h59f37623__0[2U] = 0U;
    __Vtemp_h59f37623__0[3U] = 0U;
    __Vtemp_h59f37623__0[4U] = 0U;
    __Vtemp_h59f37623__0[5U] = 0U;
    __Vtemp_h59f37623__0[6U] = 0U;
    __Vtemp_h59f37623__0[7U] = 0U;
    __Vtemp_h59f37623__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h0971eff0__0, __Vtemp_h59f37623__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__0, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h17fb4ce9__0[1U] = 0U;
        __Vtemp_h17fb4ce9__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_h17fb4ce9__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h0971eff0__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__0[1U])
                                                     : 0U)));
        __Vtemp_h17fb4ce9__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h0971eff0__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__0[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h0971eff0__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h17fb4ce9__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h17fb4ce9__0[2U];
    __Vtemp_h16f65261__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_h16f65261__0[1U] = 0U;
    __Vtemp_h16f65261__0[2U] = 0U;
    __Vtemp_h16f65261__0[3U] = 0U;
    __Vtemp_h16f65261__0[4U] = 0U;
    __Vtemp_h16f65261__0[5U] = 0U;
    __Vtemp_h16f65261__0[6U] = 0U;
    __Vtemp_h16f65261__0[7U] = 0U;
    __Vtemp_h16f65261__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h46fd591c__0, __Vtemp_h16f65261__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__1, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter = 0U;
        __Vtemp_hfaee7bdd__0[1U] = 0U;
        __Vtemp_hfaee7bdd__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter 
                = (0xffU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter))
                             ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                                        >> 4U))) : 0U)
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter) 
                                - (IData)(1U))));
        }
        __Vtemp_hfaee7bdd__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h46fd591c__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__1[1U])
                                                     : 0U)));
        __Vtemp_hfaee7bdd__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h46fd591c__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__1[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h46fd591c__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_hfaee7bdd__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_hfaee7bdd__0[2U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3701(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3701\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0bdf09d8__0;
    VlWide<9>/*287:0*/ __Vtemp_h4a47095f__0;
    VlWide<9>/*287:0*/ __Vtemp_h421f792c__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__0;
    VlWide<3>/*95:0*/ __Vtemp_he67b7889__0;
    VlWide<9>/*287:0*/ __Vtemp_he0d187b4__0;
    VlWide<9>/*287:0*/ __Vtemp_hac077625__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__1;
    VlWide<3>/*95:0*/ __Vtemp_h49a26f7d__0;
    VlWide<9>/*287:0*/ __Vtemp_heb735448__0;
    VlWide<9>/*287:0*/ __Vtemp_hae9b1805__0;
    VlWide<9>/*287:0*/ __Vtemp_h926889b7__2;
    // Body
    __Vtemp_h4a47095f__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_h4a47095f__0[1U] = 0U;
    __Vtemp_h4a47095f__0[2U] = 0U;
    __Vtemp_h4a47095f__0[3U] = 0U;
    __Vtemp_h4a47095f__0[4U] = 0U;
    __Vtemp_h4a47095f__0[5U] = 0U;
    __Vtemp_h4a47095f__0[6U] = 0U;
    __Vtemp_h4a47095f__0[7U] = 0U;
    __Vtemp_h4a47095f__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_h421f792c__0, __Vtemp_h4a47095f__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__0, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h0bdf09d8__0[1U] = 0U;
        __Vtemp_h0bdf09d8__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h0bdf09d8__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_h421f792c__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__0[1U])
                                                     : 0U)));
        __Vtemp_h0bdf09d8__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_h421f792c__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__0[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_h421f792c__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h0bdf09d8__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h0bdf09d8__0[2U];
    __Vtemp_he0d187b4__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_he0d187b4__0[1U] = 0U;
    __Vtemp_he0d187b4__0[2U] = 0U;
    __Vtemp_he0d187b4__0[3U] = 0U;
    __Vtemp_he0d187b4__0[4U] = 0U;
    __Vtemp_he0d187b4__0[5U] = 0U;
    __Vtemp_he0d187b4__0[6U] = 0U;
    __Vtemp_he0d187b4__0[7U] = 0U;
    __Vtemp_he0d187b4__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_hac077625__0, __Vtemp_he0d187b4__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__1, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_he67b7889__0[1U] = 0U;
        __Vtemp_he67b7889__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_he67b7889__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_hac077625__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__1[1U])
                                                     : 0U)));
        __Vtemp_he67b7889__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_hac077625__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__1[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_hac077625__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_he67b7889__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_he67b7889__0[2U];
    __Vtemp_heb735448__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_heb735448__0[1U] = 0U;
    __Vtemp_heb735448__0[2U] = 0U;
    __Vtemp_heb735448__0[3U] = 0U;
    __Vtemp_heb735448__0[4U] = 0U;
    __Vtemp_heb735448__0[5U] = 0U;
    __Vtemp_heb735448__0[6U] = 0U;
    __Vtemp_heb735448__0[7U] = 0U;
    __Vtemp_heb735448__0[8U] = 0U;
    VL_SHIFTL_WWI(259,259,7, __Vtemp_hae9b1805__0, __Vtemp_heb735448__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(271,271,7, __Vtemp_h926889b7__2, VTestDriver__ConstPool__CONST_h26ec0c50_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h49a26f7d__0[1U] = 0U;
        __Vtemp_h49a26f7d__0[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h49a26f7d__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                         ? (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & __Vtemp_hae9b1805__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                                     & __Vtemp_h926889b7__2[1U])
                                                     : 0U)));
        __Vtemp_h49a26f7d__0[2U] = (0xffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                    & __Vtemp_hae9b1805__0[2U])
                                                    : 0U)) 
                                               & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                                    & __Vtemp_h926889b7__2[2U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_598)
                    ? (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                       & __Vtemp_hae9b1805__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_613)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_h926889b7__2[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h49a26f7d__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h49a26f7d__0[2U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3702(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3702\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hbd518fcb__0;
    VlWide<5>/*159:0*/ __Vtemp_h25fbc8dc__0;
    VlWide<5>/*159:0*/ __Vtemp_h32adf71e__0;
    VlWide<5>/*159:0*/ __Vtemp_h02b1555a__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__0;
    VlWide<5>/*159:0*/ __Vtemp_h1957a492__0;
    VlWide<5>/*159:0*/ __Vtemp_h6b850c68__0;
    VlWide<5>/*159:0*/ __Vtemp_h6ba16442__0;
    VlWide<5>/*159:0*/ __Vtemp_h8eee4c37__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_h68af1050__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133) {
        __Vtemp_h25fbc8dc__0[0U] = (1U | (0x1eU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 5U)));
        __Vtemp_h6b850c68__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  << 1U)));
    } else {
        __Vtemp_h25fbc8dc__0[0U] = 0U;
        __Vtemp_h6b850c68__0[0U] = 0U;
    }
    __Vtemp_h25fbc8dc__0[1U] = 0U;
    __Vtemp_h25fbc8dc__0[2U] = 0U;
    __Vtemp_h25fbc8dc__0[3U] = 0U;
    __Vtemp_h25fbc8dc__0[4U] = 0U;
    __Vtemp_h32adf71e__0[0U] = (0x78U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 7U));
    __Vtemp_h32adf71e__0[1U] = 0U;
    __Vtemp_h32adf71e__0[2U] = 0U;
    __Vtemp_h32adf71e__0[3U] = 0U;
    __Vtemp_h32adf71e__0[4U] = 0U;
    VL_SHIFTL_WWW(132,132,132, __Vtemp_h02b1555a__0, __Vtemp_h25fbc8dc__0, __Vtemp_h32adf71e__0);
    __Vtemp_hab69a0d4__0[0U] = 0xffU;
    __Vtemp_hab69a0d4__0[1U] = 0U;
    __Vtemp_hab69a0d4__0[2U] = 0U;
    __Vtemp_hab69a0d4__0[3U] = 0U;
    __Vtemp_hab69a0d4__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h1957a492__0, __Vtemp_hab69a0d4__0, 
                  (0x78U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hbd518fcb__0[1U] = 0U;
        __Vtemp_hbd518fcb__0[2U] = 0U;
        __Vtemp_hbd518fcb__0[3U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_hbd518fcb__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_h02b1555a__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_h1957a492__0[1U]
                                                     : 0U)));
        __Vtemp_hbd518fcb__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_h02b1555a__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_h1957a492__0[2U]
                                                     : 0U)));
        __Vtemp_hbd518fcb__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_h02b1555a__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_h1957a492__0[3U]
                                                     : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                    ? __Vtemp_h02b1555a__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                      ? __Vtemp_h1957a492__0[0U] : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_hbd518fcb__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_hbd518fcb__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_hbd518fcb__0[3U];
    __Vtemp_h6b850c68__0[1U] = 0U;
    __Vtemp_h6b850c68__0[2U] = 0U;
    __Vtemp_h6b850c68__0[3U] = 0U;
    __Vtemp_h6b850c68__0[4U] = 0U;
    __Vtemp_h6ba16442__0[0U] = (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 8U));
    __Vtemp_h6ba16442__0[1U] = 0U;
    __Vtemp_h6ba16442__0[2U] = 0U;
    __Vtemp_h6ba16442__0[3U] = 0U;
    __Vtemp_h6ba16442__0[4U] = 0U;
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h8eee4c37__0, __Vtemp_h6b850c68__0, __Vtemp_h6ba16442__0);
    __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
    __Vtemp_h6f0d4cc8__0[1U] = 0U;
    __Vtemp_h6f0d4cc8__0[2U] = 0U;
    __Vtemp_h6f0d4cc8__0[3U] = 0U;
    __Vtemp_h6f0d4cc8__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_h68af1050__0, __Vtemp_h6f0d4cc8__0, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
            ? 0ULL : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                           ? (((QData)((IData)(__Vtemp_h8eee4c37__0[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp_h8eee4c37__0[0U])))
                           : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                                           ? (((QData)((IData)(
                                                               __Vtemp_h68af1050__0[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp_h68af1050__0[0U])))
                                           : 0ULL))));
}

extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h7e58ec99_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3703(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3703\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h7fb342ba__0;
    VlWide<9>/*287:0*/ __Vtemp_hb04d7c55__0;
    VlWide<9>/*287:0*/ __Vtemp_hbb207f26__0;
    VlWide<9>/*287:0*/ __Vtemp_h3ed8a28f__0;
    VlWide<9>/*287:0*/ __Vtemp_he1c49c0d__0;
    // Body
    __Vtemp_hb04d7c55__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                 ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size) 
                                          << 1U)) : 0U);
    __Vtemp_hb04d7c55__0[1U] = 0U;
    __Vtemp_hb04d7c55__0[2U] = 0U;
    __Vtemp_hb04d7c55__0[3U] = 0U;
    __Vtemp_hb04d7c55__0[4U] = 0U;
    __Vtemp_hb04d7c55__0[5U] = 0U;
    __Vtemp_hb04d7c55__0[6U] = 0U;
    __Vtemp_hb04d7c55__0[7U] = 0U;
    __Vtemp_hb04d7c55__0[8U] = 0U;
    __Vtemp_hbb207f26__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source) 
                                << 3U);
    __Vtemp_hbb207f26__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_hbb207f26__0[2U] = 0U;
    __Vtemp_hbb207f26__0[3U] = 0U;
    __Vtemp_hbb207f26__0[4U] = 0U;
    __Vtemp_hbb207f26__0[5U] = 0U;
    __Vtemp_hbb207f26__0[6U] = 0U;
    __Vtemp_hbb207f26__0[7U] = 0U;
    __Vtemp_hbb207f26__0[8U] = 0U;
    VL_SHIFTL_WWW(260,260,260, __Vtemp_h3ed8a28f__0, __Vtemp_hb04d7c55__0, __Vtemp_hbb207f26__0);
    VL_SHIFTL_WWI(271,271,8, __Vtemp_he1c49c0d__0, VTestDriver__ConstPool__CONST_h7e58ec99_0, 
                  (0xf8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight = 0U;
        __Vtemp_h7fb342ba__0[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h7fb342ba__0[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h7fb342ba__0[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h7fb342ba__0[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h7fb342ba__0[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h7fb342ba__0[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h7fb342ba__0[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__c_first_counter_1 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1133)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 0xaU)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 0xaU)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      : 0U)
                                                     : 0U))));
        __Vtemp_h7fb342ba__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[1U] 
                                            & __Vtemp_h3ed8a28f__0[1U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[1U] 
                                              & __Vtemp_he1c49c0d__0[1U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_h7fb342ba__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[2U] 
                                            & __Vtemp_h3ed8a28f__0[2U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[2U] 
                                              & __Vtemp_he1c49c0d__0[2U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_h7fb342ba__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[3U] 
                                            & __Vtemp_h3ed8a28f__0[3U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[3U] 
                                              & __Vtemp_he1c49c0d__0[3U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_h7fb342ba__0[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[4U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[4U] 
                                            & __Vtemp_h3ed8a28f__0[4U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[4U] 
                                              & __Vtemp_he1c49c0d__0[4U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_h7fb342ba__0[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[5U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[5U] 
                                            & __Vtemp_h3ed8a28f__0[5U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[5U] 
                                              & __Vtemp_he1c49c0d__0[5U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_h7fb342ba__0[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[6U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[6U] 
                                            & __Vtemp_h3ed8a28f__0[6U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[6U] 
                                              & __Vtemp_he1c49c0d__0[6U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_h7fb342ba__0[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[7U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                                         ? (VTestDriver__ConstPool__CONST_h52851b57_0[7U] 
                                            & __Vtemp_h3ed8a28f__0[7U])
                                         : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                                           ? (VTestDriver__ConstPool__CONST_h52859b67_0[7U] 
                                              & __Vtemp_he1c49c0d__0[7U])
                                           : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1203)
                    ? (VTestDriver__ConstPool__CONST_h52851b57_0[0U] 
                       & __Vtemp_h3ed8a28f__0[0U]) : 
                   VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1218)
                      ? (VTestDriver__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_he1c49c0d__0[0U])
                      : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__c_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__c_first_1)
                             ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                                        >> 4U))) : 0U)
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor_1__DOT__c_first_counter_1) 
                                - (IData)(1U))));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h7fb342ba__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h7fb342ba__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h7fb342ba__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h7fb342ba__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h7fb342ba__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h7fb342ba__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h7fb342ba__0[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3704(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3704\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h1bb04cff__0;
    VlWide<5>/*159:0*/ __Vtemp_h7f95dd93__0;
    VlWide<5>/*159:0*/ __Vtemp_hdceb3058__0;
    VlWide<5>/*159:0*/ __Vtemp_hd79e6311__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__0;
    VlWide<5>/*159:0*/ __Vtemp_hb46f2135__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xbU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__enq_ptr_value;
    }
    __Vtemp_h7f95dd93__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                                 ? (1U | (0x1eU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 5U)))
                                 : 0U);
    __Vtemp_h7f95dd93__0[1U] = 0U;
    __Vtemp_h7f95dd93__0[2U] = 0U;
    __Vtemp_h7f95dd93__0[3U] = 0U;
    __Vtemp_h7f95dd93__0[4U] = 0U;
    __Vtemp_hdceb3058__0[0U] = (0x78U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 7U));
    __Vtemp_hdceb3058__0[1U] = 0U;
    __Vtemp_hdceb3058__0[2U] = 0U;
    __Vtemp_hdceb3058__0[3U] = 0U;
    __Vtemp_hdceb3058__0[4U] = 0U;
    VL_SHIFTL_WWW(132,132,132, __Vtemp_hd79e6311__0, __Vtemp_h7f95dd93__0, __Vtemp_hdceb3058__0);
    __Vtemp_hab69a0d4__0[0U] = 0xffU;
    __Vtemp_hab69a0d4__0[1U] = 0U;
    __Vtemp_hab69a0d4__0[2U] = 0U;
    __Vtemp_hab69a0d4__0[3U] = 0U;
    __Vtemp_hab69a0d4__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_hb46f2135__0, __Vtemp_hab69a0d4__0, 
                  (0x78U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__maybe_full = 0U;
        __Vtemp_h1bb04cff__0[1U] = 0U;
        __Vtemp_h1bb04cff__0[2U] = 0U;
        __Vtemp_h1bb04cff__0[3U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_1)
                             ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                                        >> 4U))) : 0U)
                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1) 
                                - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__maybe_full) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__maybe_full))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__maybe_full;
        }
        __Vtemp_h1bb04cff__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_hd79e6311__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_hb46f2135__0[1U]
                                                     : 0U)));
        __Vtemp_h1bb04cff__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_hd79e6311__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_hb46f2135__0[2U]
                                                     : 0U)));
        __Vtemp_h1bb04cff__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                                         ? __Vtemp_hd79e6311__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    __Vtemp_hb46f2135__0[3U]
                                                     : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                    ? __Vtemp_hd79e6311__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                      ? __Vtemp_hb46f2135__0[0U] : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h1bb04cff__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h1bb04cff__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h1bb04cff__0[3U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3705(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3705\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hd676f3d9__0;
    VlWide<5>/*159:0*/ __Vtemp_hdceb52d9__0;
    VlWide<5>/*159:0*/ __Vtemp_hf10414d3__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_h77a2ea87__0;
    // Body
    __Vtemp_hd676f3d9__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                                 ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  << 1U)))
                                 : 0U);
    __Vtemp_hd676f3d9__0[1U] = 0U;
    __Vtemp_hd676f3d9__0[2U] = 0U;
    __Vtemp_hd676f3d9__0[3U] = 0U;
    __Vtemp_hd676f3d9__0[4U] = 0U;
    __Vtemp_hdceb52d9__0[0U] = (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 8U));
    __Vtemp_hdceb52d9__0[1U] = 0U;
    __Vtemp_hdceb52d9__0[2U] = 0U;
    __Vtemp_hdceb52d9__0[3U] = 0U;
    __Vtemp_hdceb52d9__0[4U] = 0U;
    VL_SHIFTL_WWW(131,131,131, __Vtemp_hf10414d3__0, __Vtemp_hd676f3d9__0, __Vtemp_hdceb52d9__0);
    __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
    __Vtemp_h6f0d4cc8__0[1U] = 0U;
    __Vtemp_h6f0d4cc8__0[2U] = 0U;
    __Vtemp_h6f0d4cc8__0[3U] = 0U;
    __Vtemp_h6f0d4cc8__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_h77a2ea87__0, __Vtemp_h6f0d4cc8__0, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                    ? (((QData)((IData)(__Vtemp_hf10414d3__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_hf10414d3__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                                    ? (((QData)((IData)(
                                                        __Vtemp_h77a2ea87__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h77a2ea87__0[0U])))
                                    : 0ULL)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1133)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 0xaU)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 0xaU)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1148)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      : 0U)
                                                     : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft 
            = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__idle) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_a_ready))
                      ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1) 
                          & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                >> 2U))) ? (~ (0x3ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U))) 
                                                  >> 3U)))
                          : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft) 
                                   - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_a_ready) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_valid)))));
    }
}
