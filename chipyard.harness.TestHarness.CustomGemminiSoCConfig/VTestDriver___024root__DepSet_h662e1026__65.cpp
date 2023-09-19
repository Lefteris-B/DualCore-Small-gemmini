// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3487(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3487\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x7ffffffffffffULL 
                                       & (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source)))
                                    : 0ULL) != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                                  & (0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                                 ? 
                                                (0x7ffffffffffffULL 
                                                 & (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))
                                                 : 0ULL)) 
                                 | (0ULL == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? (0x7ffffffffffffULL 
                                                 & (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source)))
                                              : 0ULL)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1269, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1271: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1271, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: TileLink timeout expired (connected at Configs.scala:112:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1275, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1277: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1277, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3488(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3488\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1688) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)((0x7ffffffffffffULL 
                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1 
                                   >> (0x30U | (3U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1281: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'C' channel re-used a source ID (connected at Configs.scala:112:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1283: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1283, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((IData)((0x7ffffffffffffULL 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT____VdfgTmp_hb126451a__0) 
                              & ((0x30U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU))) 
                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1287: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1289: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1289, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3489(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3489\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h4433be99__0;
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT____VdfgTmp_hb126451a__0) 
                          & ((0x30U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                        != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                  >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1295: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1295, "");
        }
    }
    VL_SHIFTR_WWI(204,204,8, __Vtemp_h4433be99__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT____VdfgTmp_hb126451a__0) 
                             & ((0x30U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))) 
                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                        != (7U & (__Vtemp_h4433be99__0[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1301, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3490(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3490\n"); );
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid)) 
                         & ((0x30U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & (~ ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])) 
                             | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_c_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1305: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1307, "");
        }
    }
    if (VL_UNLIKELY((((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT____VdfgTmp_hb126451a__0)
                               ? (0x7ffffffffffffULL 
                                  & (1ULL << (0x30U 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))))
                               : 0ULL)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT____VdfgTmp_hb126451a__0)
                          ? (0x7ffffffffffffULL & (1ULL 
                                                   << 
                                                   (0x30U 
                                                    | (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xaU)))))
                          : 0ULL) == ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                       ? (0x7ffffffffffffULL 
                                          & (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))
                                       : 0ULL))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1311: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency 2 (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1313, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3491(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3491\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1317: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: TileLink timeout expired (connected at Configs.scala:112:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1319, "");
        }
    }
    if (VL_UNLIKELY((0xfffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1749) 
                                 & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3)) 
                                    & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0)) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____VdfgTmp_h7d99b213__0) 
                                              >> 1U))) 
                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0)) 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____VdfgTmp_h7d99b213__0) 
                                             >> 2U))))) 
                                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2) 
                                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_sink)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1323: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at Configs.scala:112:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1325, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3492(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3492\n"); );
    // Body
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleOut_1_e_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                           & (~ (0xfffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_set) 
                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2)) 
                                           >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1329: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at Configs.scala:112:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_38.sv", 1331, "");
        }
    }
}

void VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ mem_base, QData/*63:0*/ &memory_init__Vfuncrtn);
void VTestDriver___024unit____Vdpiimwrap_memory_tick_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, QData/*63:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, QData/*63:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, QData/*63:0*/ w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, QData/*63:0*/ &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp);

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__5409(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__5409\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__2__Vfuncout;
    __Vfunc_memory_init__2__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__ar_ready;
    __Vtask_memory_tick__3__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__aw_ready;
    __Vtask_memory_tick__3__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__w_ready;
    __Vtask_memory_tick__3__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__r_valid;
    __Vtask_memory_tick__3__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__3__r_id;
    __Vtask_memory_tick__3__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__3__r_resp;
    __Vtask_memory_tick__3__r_resp = 0;
    QData/*63:0*/ __Vtask_memory_tick__3__r_data;
    __Vtask_memory_tick__3__r_data = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__r_last;
    __Vtask_memory_tick__3__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__3__b_valid;
    __Vtask_memory_tick__3__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__3__b_id;
    __Vtask_memory_tick__3__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__3__b_resp;
    __Vtask_memory_tick__3__b_resp = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN_2 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
             << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
                        << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41))) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____VdfgTmp_h43c4f351__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_34) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_6))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFirst 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___old_gennum1_T_2 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                 - (IData)(1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_plic_auto_tl_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0x10000000ULL, 8ULL, 0x40ULL, 4ULL, 0x1dcd6500ULL, 0x80000000ULL, __Vfunc_memory_init__2__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel 
                = __Vfunc_memory_init__2__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized = 1U;
        }
        VTestDriver___024unit____Vdpiimwrap_memory_tick_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), 
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_0)), __Vtask_memory_tick__3__ar_ready, (QData)((IData)(
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][1U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 5U)))), 
                                                                       (0xfU 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U]), 
                                                                       (7U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                           [0U][1U] 
                                                                           >> 0xdU)), 
                                                                       (0xffU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                           [0U][1U] 
                                                                           >> 5U)), 
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_5)), __Vtask_memory_tick__3__aw_ready, (QData)((IData)(
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][1U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 5U)))), 
                                                                       (0xfU 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U]), 
                                                                       (7U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                           [0U][1U] 
                                                                           >> 0xdU)), 
                                                                       (0xffU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                                                           [0U][1U] 
                                                                           >> 5U)), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full), __Vtask_memory_tick__3__w_ready, 
                                                                       (0xffU 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                                        [0U][2U]), 
                                                                       (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U]))), 
                                                                       (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                                           [0U][2U] 
                                                                           >> 8U)), __Vtask_memory_tick__3__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_ready), __Vtask_memory_tick__3__r_id, __Vtask_memory_tick__3__r_resp, __Vtask_memory_tick__3__r_data, __Vtask_memory_tick__3__r_last, __Vtask_memory_tick__3__b_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_ready), __Vtask_memory_tick__3__b_id, __Vtask_memory_tick__3__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready 
            = __Vtask_memory_tick__3__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready 
            = __Vtask_memory_tick__3__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready 
            = __Vtask_memory_tick__3__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid 
            = __Vtask_memory_tick__3__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id 
            = __Vtask_memory_tick__3__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp 
            = __Vtask_memory_tick__3__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data 
            = __Vtask_memory_tick__3__r_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last 
            = __Vtask_memory_tick__3__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid 
            = __Vtask_memory_tick__3__b_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id 
            = __Vtask_memory_tick__3__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp 
            = __Vtask_memory_tick__3__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg 
            = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg 
            = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7555(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7555\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__prescaler 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__prescaler;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value;
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_1) 
                       & (1U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                      & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TSIToTileLink.sv:249: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl: Assertion failed: Bad TSI command\n    at TSIToTileLink.scala:128 assert(false.B, \"Bad TSI command\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TSIToTileLink.sv", 249, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TSIToTileLink.sv:251: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TSIToTileLink.sv", 251, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7556(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7556\n"); );
    // Body
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestDriver__DOT__reset)) 
                        & (IData)(vlSelf->TestDriver__DOT__verbose)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__do_deq)) 
                      & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_FWRITEF(0x80000002U,"UART TX (%x): %c\n",
                   8,vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value],
                   8,vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value]);
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__bodyValid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__bodyValid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__prescaler 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__prescaler;
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ptr_match) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__maybe_full))))) {
        VL_WRITEF("[%0t] %%Error: UARTAdapter.sv:96: Assertion failed in %NTestDriver.testHarness.uart_sim_0_uartno0: Assertion failed\n    at UARTAdapter.scala:48 when (txq.io.enq.valid) { assert(txq.io.enq.ready) }\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTAdapter.sv", 96, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: UARTAdapter.sv:98: Assertion failed in %NTestDriver.testHarness.uart_sim_0_uartno0\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTAdapter.sv", 98, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7557(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7557\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:281: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:283: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 283, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                 ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:287: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:289: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 289, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7558(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7558\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:293: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:295: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 295, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:299: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:301: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 301, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7559(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7559\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:305: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:307: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 307, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0xdU <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:347: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 347, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:349: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 349, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7560(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7560\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                      >> 0xcU))) | 
                           ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & ((((((((0U == ((0x7fffcU 
                                              & ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 0xfU)) 
                                                 << 2U)) 
                                             | (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xcU))))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0x11U)) 
                                                   << 4U))) 
                                              | (0xfU 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0xcU)))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0xcU))) 
                               | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:353: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 353, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:355: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 355, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7561(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7561\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:359: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 359, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:361: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 361, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:365: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 365, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:367: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 367, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7562(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7562\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & (((((((0U == ((0x7fffcU 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0xfU)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                               >> 0xcU))))) 
                                         | (0U == (
                                                   (0x7fff0U 
                                                    & (0x80U 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0x11U)) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0xcU)))))) 
                                        | (0x200U == 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                            >> 0x10U))) 
                                       | (0x2010U == 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0xcU))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x1aU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:371: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 371, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:373: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 373, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7563(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7563\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:377: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 377, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:379: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 379, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:383: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 383, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:385: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 385, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7564(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7564\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & (((((((0U == ((0x7fffcU 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0xfU)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                               >> 0xcU))))) 
                                         | (0U == (
                                                   (0x7fff0U 
                                                    & (0x80U 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0x11U)) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0xcU)))))) 
                                        | (0x200U == 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                            >> 0x10U))) 
                                       | (0x2010U == 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0xcU))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x1aU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:389: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 389, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:391: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 391, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7565(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7565\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:395: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 395, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:397: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 397, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                               & (~ ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                           & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                          & (3ULL == 
                                             (3ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                      << 7U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                       >> 1U)))))) 
                                                  | ((~ 
                                                      ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))))) 
                                                 << 6U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                     | (((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                    << 5U) 
                                                   | ((((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                          | ((2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & ((~ 
                                                                ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                            >> 1U)))) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                        | ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                 & (3ULL 
                                                                    == 
                                                                    (3ULL 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                 | ((~ 
                                                                     ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & ((((2U 
                                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                       | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (2U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                      | ((1U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                         & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                            & (~ 
                                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                     | ((~ 
                                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:401: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 401, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:403: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 403, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7566(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7566\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (((((((0U == ((0x7fffcU 
                                                & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0xfU)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 0xcU))))) 
                                       | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0x11U)) 
                                                     << 4U))) 
                                                | (0xfU 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0xcU)))))) 
                                     | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                   >> 0x10U))) 
                                    | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                   >> 0xcU))) 
                                   | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                             >> 0x1aU))) 
                                  | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                              | ((5U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:407: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 407, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:409: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 409, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7567(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7567\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:413: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 413, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:415: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 415, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:419: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 419, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:421: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 421, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7568(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7568\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (((((((0U == ((0x7fffcU 
                                                & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0xfU)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 0xcU))))) 
                                       | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0x11U)) 
                                                     << 4U))) 
                                                | (0xfU 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0xcU)))))) 
                                     | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                   >> 0x10U))) 
                                    | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                   >> 0xcU))) 
                                   | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                             >> 0x1aU))) 
                                  | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                              | ((5U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:425: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 425, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:427: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 427, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7569(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7569\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:431: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 431, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:433: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 433, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:437: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 437, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:439: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 439, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7570(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7570\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:443: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 443, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:445: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 445, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:449: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:451: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 451, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7571(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7571\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:455: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:457: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 457, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7572(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7572\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:461: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:463: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 463, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x206U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:467: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:469: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 469, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7573(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7573\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:473: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 473, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:475: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 475, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:479: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 479, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:481: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 481, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7574(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7574\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:485: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 485, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:487: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 487, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x4006U == (0x4007U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:491: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 491, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:493: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 493, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7575(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7575\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x204U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:497: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 497, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:499: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 499, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:503: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 503, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:505: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 505, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7576(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7576\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x1cU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:509: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 509, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:511: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 511, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x14U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:515: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 515, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:517: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 517, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7577(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7577\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:521: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 521, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:523: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 523, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x205U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:527: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 527, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:529: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 529, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7578(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7578\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:533: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 533, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:535: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 535, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x1dU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:539: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 539, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:541: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 541, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7579(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7579\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x15U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:545: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 545, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:547: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 547, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:551: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 551, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:553: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 553, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7580(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7580\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x200U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:557: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 557, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:559: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 559, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:563: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 563, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:565: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 565, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7581(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7581\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:569: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 569, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:571: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 571, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x201U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:575: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 575, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:577: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 577, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7582(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7582\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:581: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 581, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:583: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 583, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:587: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 587, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:589: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 589, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7583(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7583\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (0x202U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:593: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 593, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:595: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 595, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:599: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 599, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:601: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 601, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7584(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7584\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:605: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 605, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:607: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 607, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                          ? 1U : 4U) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:611: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 611, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:613: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 613, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7585(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7585\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:617: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 617, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:619: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 619, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:623: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 623, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:625: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 625, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:629: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 629, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:631: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 631, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7586(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7586\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:635: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 635, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:637: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 637, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:641: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 641, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:643: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 643, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7587(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7587\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:647: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 647, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:649: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 649, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:653: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 653, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:655: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 655, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7588(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7588\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:659: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 659, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:661: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 661, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:665: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 665, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:667: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 667, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7589(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7589\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:671: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 671, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:673: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 673, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:677: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 677, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:679: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 679, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1107) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight) 
                            >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:683: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 683, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:685: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 685, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7590(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7590\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1107) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * ((7U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                ? 1U
                                                : 4U))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                   ? 1U
                                                   : 4U)))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    ((7U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                      ? 1U
                                                      : 4U))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          ((7U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                            ? 1U
                                                            : 4U)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:689: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 689, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:691: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 691, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7591(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7591\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1107) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size) 
                        != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:695: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 695, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:697: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 697, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1107)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 7U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 7U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 7U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:701: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 701, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:703: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 703, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7592(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7592\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1107)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes) 
                                                 >> 
                                                 (8U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:707: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 707, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:709: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 709, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid)) 
                        & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 9U))) & (6U != (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((~ ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                               | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:713: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 713, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:715: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 715, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7593(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7593\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                                   & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                  != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                                      & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                                 | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:719: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 719, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:721: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 721, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:725: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: TileLink timeout expired (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 725, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:727: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 727, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7594(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7594\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf909__0)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1) 
                           >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 9U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:731: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 731, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:733: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 733, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf909__0)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
                                                 >> 
                                                 (8U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:737: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 737, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:739: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 739, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7595(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7595\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:743: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: TileLink timeout expired (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 743, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:745: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 745, "");
        }
    }
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                     & (0U != (vlSelf->TestDriver__DOT__testHarness__DOT___jtag_exit 
                               >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:146: Assertion failed in %NTestDriver.testHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at Periphery.scala:233 assert(io.exit < 2.U, \"*** FAILED *** (exit code = %%%%d)\\n\", io.exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_exit 
                      >> 1U));
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 146, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TestHarness.sv:148: Assertion failed in %NTestDriver.testHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 148, "");
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                     & (0U != (vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                               >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:152: Assertion failed in %NTestDriver.testHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at SimTSI.scala:20 assert(!error, \"*** FAILED *** (exit code = %%%%d)\\n\", exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                      >> 1U));
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 152, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TestHarness.sv:154: Assertion failed in %NTestDriver.testHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 154, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7596(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7596\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (IData)((((0x180U == (0x7c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])) 
                                    & (0x400U == (0x780U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U]))) 
                                   & (0xdU > (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:287: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:289: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 289, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:293: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:295: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 295, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7597(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7597\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (0x406U == (0x407U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:299: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:301: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 301, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (2U >= (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:305: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:307: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 307, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7598(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7598\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:311: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:313: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 313, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:317: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:319: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 319, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7599(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7599\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:323: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:325: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 325, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:329: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:331: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 331, "");
        }
    }
}
