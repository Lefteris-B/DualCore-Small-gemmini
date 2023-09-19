// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1739(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1739\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 276, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 278, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 282, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 284, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1740(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1740\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                     >> 0x1aU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 288, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 290, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 294, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 296, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1741(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1741\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 300, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 302, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 306, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 308, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1742(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1742\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 312, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 314, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1743(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1743\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Get is corrupt (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 318, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 320, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(((0xc000000U == (0xc000000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)) 
                                   & (0x410U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 324, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 326, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1744(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1744\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 330, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 332, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 336, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 338, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1745(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1745\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 342, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 344, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 348, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:350: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 350, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1746(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1746\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(((0xc000000U == (0xc000000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)) 
                                   & (0x410U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 354, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:356: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 356, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 360, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:362: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 362, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1747(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1747\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 366, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:368: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 368, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 372, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 374, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1748(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1748\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                               & (~ ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                        << 7U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                          << 5U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                  << 7U))) 
                                     | ((0x40U & ((
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                     << 6U) 
                                                    | (0xffffffc0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                           << 6U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                             << 4U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                      << 6U)) 
                                                  | ((IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                     << 6U))) 
                                        | ((0x20U & 
                                            (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                      << 5U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                        << 3U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        (5U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                << 5U))) 
                                           | ((0x10U 
                                               & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                           << 4U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                             << 2U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                      << 4U)) 
                                                  | ((IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                     << 4U))) 
                                              | ((8U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                        | ((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                      | (IData)(
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (2U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                              | ((~ 
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                   >> 2U)) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                             | ((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                & (IData)(
                                                                          (0U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                    >> 2U)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            == 
                                                                            (6U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                             | (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 378, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 380, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1749(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1749\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                      & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 384, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 386, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 390, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:392: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 392, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1750(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1750\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 396, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:398: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 398, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 402, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:404: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 404, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1751(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1751\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 408, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:410: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 410, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1752(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1752\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                      & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 414, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:416: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 416, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 420, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:422: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 422, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1753(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1753\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 426, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:428: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 428, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                              << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U))) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 432, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:434: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1754(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1754\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 438, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:440: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 440, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1755(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1755\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 444, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:446: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 446, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 450, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:452: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 452, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1756(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1756\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 456, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:458: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 458, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x1dU) 
                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 3U))) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 462, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:464: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 464, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1757(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1757\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 468, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:470: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 470, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1758(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1758\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 474, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:476: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 476, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                       & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                          [0U][0U])) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                  [0U][3U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 534, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:536: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 536, "");
        }
    }
}

extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d89c7e_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1759(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1759\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h7d6547fa__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                       [0U][0U]) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                  [0U][3U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 540, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:542: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 542, "");
        }
    }
    VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h7d6547fa__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
                        & __Vtemp_h7d6547fa__0[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' channel re-used a source ID (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 552, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:554: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 554, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1760(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1760\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h05b524f0__0;
    // Body
    VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h05b524f0__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, 
                  (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                   [0U][3U]));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
                            & __Vtemp_h05b524f0__0[0U]) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 558, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:560: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 560, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                             [0U][0U]) == ((0x17U >= 
                                            (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))))
                                            ? (7U & 
                                               (0x911240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode)))))
                                            : 0U)) 
                           | ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                               [0U][0U]) == ((0x17U 
                                              >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))))
                                              ? (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode)))))
                                              : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 564, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:566: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 566, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1761(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1761\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h9e025451__0;
    VlWide<130>/*4159:0*/ __Vtemp_h20815b6f__0;
    VlWide<130>/*4159:0*/ __Vtemp_he0dffec9__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf45cd0c0__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size) 
                        != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                  [0U][3U] >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 570, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:572: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 572, "");
        }
    }
    VL_SHIFTR_WWI(4160,4160,13, __Vtemp_h9e025451__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U] << 2U)));
    VL_SHIFTR_WWI(4160,4160,13, __Vtemp_h20815b6f__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U] << 2U)));
    VL_SHIFTR_WWI(4160,4160,13, __Vtemp_he0dffec9__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U] << 2U)));
    VL_SHIFTR_WWI(4160,4160,13, __Vtemp_hf45cd0c0__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U] << 2U)));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                             [0U][0U]) == ((0x17U >= 
                                            (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (__Vtemp_h9e025451__0[0U] 
                                                      >> 1U)))))
                                            ? (7U & 
                                               (0x911240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_h20815b6f__0[0U] 
                                                        >> 1U))))))
                                            : 0U)) 
                           | ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                               [0U][0U]) == ((0x17U 
                                              >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (__Vtemp_he0dffec9__0[0U] 
                                                         >> 1U)))))
                                              ? (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (__Vtemp_hf45cd0c0__0[0U] 
                                                            >> 1U))))))
                                              : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 576, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:578: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 578, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1762(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1762\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_hfaf46c79__0;
    // Body
    VL_SHIFTR_WWI(4160,4160,13, __Vtemp_hfaf46c79__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, 
                  (0x1ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U] << 2U)));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                               [0U][3U] >> 0xbU)) != 
                        (7U & (__Vtemp_hfaf46c79__0[0U] 
                               >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 582, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:584: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 584, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source) 
                          == (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][3U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_d_ready)) 
                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 588, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:590: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 590, "");
        }
    }
}

extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_h583ed2d3_0;
extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hd0572db1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1763(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1763\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h8717c569__0;
    VlWide<64>/*2047:0*/ __Vtemp_hd952b55e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h8717c569__1;
    // Body
    VL_SHIFTL_WWI(1040,1040,11, __Vtemp_h8717c569__0, VTestDriver__ConstPool__CONST_h583ed2d3_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hd952b55e__0, VTestDriver__ConstPool__CONST_ha056d847_0, 
                  (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                   [0U][3U]));
    VL_SHIFTL_WWI(1040,1040,11, __Vtemp_h8717c569__1, VTestDriver__ConstPool__CONST_h583ed2d3_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((0U != (((((((((((
                                                   (((((((((((((((((((((((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                              ? 
                                                                             __Vtemp_h8717c569__0[0U]
                                                                              : 
                                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[0U])) 
                                                                         ^ 
                                                                         (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                              ? 
                                                                             __Vtemp_hd952b55e__0[0U]
                                                                              : 
                                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[0U]))) 
                                                                        | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                                ? 
                                                                               __Vtemp_h8717c569__0[1U]
                                                                                : 
                                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[1U])) 
                                                                           ^ 
                                                                           (VTestDriver__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                                ? 
                                                                               __Vtemp_hd952b55e__0[1U]
                                                                                : 
                                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[1U])))) 
                                                                       | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                               ? 
                                                                              __Vtemp_h8717c569__0[2U]
                                                                               : 
                                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[2U])) 
                                                                          ^ 
                                                                          (VTestDriver__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                               ? 
                                                                              __Vtemp_hd952b55e__0[2U]
                                                                               : 
                                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[2U])))) 
                                                                      | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                              ? 
                                                                             __Vtemp_h8717c569__0[3U]
                                                                              : 
                                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[3U])) 
                                                                         ^ 
                                                                         (VTestDriver__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                              ? 
                                                                             __Vtemp_hd952b55e__0[3U]
                                                                              : 
                                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[3U])))) 
                                                                     | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                             ? 
                                                                            __Vtemp_h8717c569__0[4U]
                                                                             : 
                                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[4U])) 
                                                                        ^ 
                                                                        (VTestDriver__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                             ? 
                                                                            __Vtemp_hd952b55e__0[4U]
                                                                             : 
                                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[4U])))) 
                                                                    | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                            ? 
                                                                           __Vtemp_h8717c569__0[5U]
                                                                            : 
                                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[5U])) 
                                                                       ^ 
                                                                       (VTestDriver__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                            ? 
                                                                           __Vtemp_hd952b55e__0[5U]
                                                                            : 
                                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[5U])))) 
                                                                   | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                           ? 
                                                                          __Vtemp_h8717c569__0[6U]
                                                                           : 
                                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[6U])) 
                                                                      ^ 
                                                                      (VTestDriver__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                           ? 
                                                                          __Vtemp_hd952b55e__0[6U]
                                                                           : 
                                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[6U])))) 
                                                                  | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                          ? 
                                                                         __Vtemp_h8717c569__0[7U]
                                                                          : 
                                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[7U])) 
                                                                     ^ 
                                                                     (VTestDriver__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                          ? 
                                                                         __Vtemp_hd952b55e__0[7U]
                                                                          : 
                                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[7U])))) 
                                                                 | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                         ? 
                                                                        __Vtemp_h8717c569__0[8U]
                                                                         : 
                                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[8U])) 
                                                                    ^ 
                                                                    (VTestDriver__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                         ? 
                                                                        __Vtemp_hd952b55e__0[8U]
                                                                         : 
                                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[8U])))) 
                                                                | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                        ? 
                                                                       __Vtemp_h8717c569__0[9U]
                                                                        : 
                                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[9U])) 
                                                                   ^ 
                                                                   (VTestDriver__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                        ? 
                                                                       __Vtemp_hd952b55e__0[9U]
                                                                        : 
                                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[9U])))) 
                                                               | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                       ? 
                                                                      __Vtemp_h8717c569__0[0xaU]
                                                                       : 
                                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                                                  ^ 
                                                                  (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                       ? 
                                                                      __Vtemp_hd952b55e__0[0xaU]
                                                                       : 
                                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])))) 
                                                              | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                      ? 
                                                                     __Vtemp_h8717c569__0[0xbU]
                                                                      : 
                                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                                                 ^ 
                                                                 (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                      ? 
                                                                     __Vtemp_hd952b55e__0[0xbU]
                                                                      : 
                                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])))) 
                                                             | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                     ? 
                                                                    __Vtemp_h8717c569__0[0xcU]
                                                                     : 
                                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                                                ^ 
                                                                (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                     ? 
                                                                    __Vtemp_hd952b55e__0[0xcU]
                                                                     : 
                                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])))) 
                                                            | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                    ? 
                                                                   __Vtemp_h8717c569__0[0xdU]
                                                                    : 
                                                                   VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                                               ^ 
                                                               (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                    ? 
                                                                   __Vtemp_hd952b55e__0[0xdU]
                                                                    : 
                                                                   VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])))) 
                                                           | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                   ? 
                                                                  __Vtemp_h8717c569__0[0xeU]
                                                                   : 
                                                                  VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                                              ^ 
                                                              (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                   ? 
                                                                  __Vtemp_hd952b55e__0[0xeU]
                                                                   : 
                                                                  VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])))) 
                                                          | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                  ? 
                                                                 __Vtemp_h8717c569__0[0xfU]
                                                                  : 
                                                                 VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                                             ^ 
                                                             (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                  ? 
                                                                 __Vtemp_hd952b55e__0[0xfU]
                                                                  : 
                                                                 VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])))) 
                                                         | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                 ? 
                                                                __Vtemp_h8717c569__0[0x10U]
                                                                 : 
                                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                                            ^ 
                                                            (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                 ? 
                                                                __Vtemp_hd952b55e__0[0x10U]
                                                                 : 
                                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])))) 
                                                        | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                ? 
                                                               __Vtemp_h8717c569__0[0x11U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                                           ^ 
                                                           (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                                ? 
                                                               __Vtemp_hd952b55e__0[0x11U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])))) 
                                                       | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                               ? 
                                                              __Vtemp_h8717c569__0[0x12U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                                          ^ 
                                                          (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                               ? 
                                                              __Vtemp_hd952b55e__0[0x12U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])))) 
                                                      | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                              ? 
                                                             __Vtemp_h8717c569__0[0x13U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                                         ^ 
                                                         (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                              ? 
                                                             __Vtemp_hd952b55e__0[0x13U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])))) 
                                                     | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                             ? 
                                                            __Vtemp_h8717c569__0[0x14U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                                        ^ 
                                                        (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                             ? 
                                                            __Vtemp_hd952b55e__0[0x14U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])))) 
                                                    | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                            ? 
                                                           __Vtemp_h8717c569__0[0x15U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                                       ^ 
                                                       (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                            ? 
                                                           __Vtemp_hd952b55e__0[0x15U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])))) 
                                                   | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                           ? 
                                                          __Vtemp_h8717c569__0[0x16U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                                      ^ 
                                                      (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                           ? 
                                                          __Vtemp_hd952b55e__0[0x16U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])))) 
                                                  | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                          ? 
                                                         __Vtemp_h8717c569__0[0x17U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                                     ^ 
                                                     (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                          ? 
                                                         __Vtemp_hd952b55e__0[0x17U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])))) 
                                                 | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                         ? 
                                                        __Vtemp_h8717c569__0[0x18U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                                    ^ 
                                                    (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                         ? 
                                                        __Vtemp_hd952b55e__0[0x18U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])))) 
                                                | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                        ? 
                                                       __Vtemp_h8717c569__0[0x19U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                        ? 
                                                       __Vtemp_hd952b55e__0[0x19U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])))) 
                                               | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                       ? 
                                                      __Vtemp_h8717c569__0[0x1aU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                       ? 
                                                      __Vtemp_hd952b55e__0[0x1aU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])))) 
                                              | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                      ? 
                                                     __Vtemp_h8717c569__0[0x1bU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                      ? 
                                                     __Vtemp_hd952b55e__0[0x1bU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])))) 
                                             | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                     ? 
                                                    __Vtemp_h8717c569__0[0x1cU]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                       ? 
                                                      __Vtemp_hd952b55e__0[0x1cU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])))) 
                                            | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                    ? 
                                                   __Vtemp_h8717c569__0[0x1dU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                               ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                      ? 
                                                     __Vtemp_hd952b55e__0[0x1dU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])))) 
                                           | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                   ? 
                                                  __Vtemp_h8717c569__0[0x1eU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                              ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                     ? 
                                                    __Vtemp_hd952b55e__0[0x1eU]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])))) 
                                          | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                  ? 
                                                 __Vtemp_h8717c569__0[0x1fU]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                             ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                    ? 
                                                   __Vtemp_hd952b55e__0[0x1fU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])))) 
                                         | ((VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                 ? 
                                                __Vtemp_h8717c569__0[0x20U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                            ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)
                                                   ? 
                                                  __Vtemp_hd952b55e__0[0x20U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U]))))) 
                                 | (0U == (((((((((
                                                   ((((((((((((((((((((((((VTestDriver__ConstPool__CONST_hd0572db1_0[0U] 
                                                                           ^ 
                                                                           (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                                ? 
                                                                               __Vtemp_h8717c569__1[0U]
                                                                                : 
                                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[0U]))) 
                                                                          | (VTestDriver__ConstPool__CONST_hd0572db1_0[1U] 
                                                                             ^ 
                                                                             (VTestDriver__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                                 ? 
                                                                                __Vtemp_h8717c569__1[1U]
                                                                                 : 
                                                                                VTestDriver__ConstPool__CONST_hd0572db1_0[1U])))) 
                                                                         | (VTestDriver__ConstPool__CONST_hd0572db1_0[2U] 
                                                                            ^ 
                                                                            (VTestDriver__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                                 ? 
                                                                                __Vtemp_h8717c569__1[2U]
                                                                                 : 
                                                                                VTestDriver__ConstPool__CONST_hd0572db1_0[2U])))) 
                                                                        | (VTestDriver__ConstPool__CONST_hd0572db1_0[3U] 
                                                                           ^ 
                                                                           (VTestDriver__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                                ? 
                                                                               __Vtemp_h8717c569__1[3U]
                                                                                : 
                                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[3U])))) 
                                                                       | (VTestDriver__ConstPool__CONST_hd0572db1_0[4U] 
                                                                          ^ 
                                                                          (VTestDriver__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                               ? 
                                                                              __Vtemp_h8717c569__1[4U]
                                                                               : 
                                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[4U])))) 
                                                                      | (VTestDriver__ConstPool__CONST_hd0572db1_0[5U] 
                                                                         ^ 
                                                                         (VTestDriver__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                              ? 
                                                                             __Vtemp_h8717c569__1[5U]
                                                                              : 
                                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[5U])))) 
                                                                     | (VTestDriver__ConstPool__CONST_hd0572db1_0[6U] 
                                                                        ^ 
                                                                        (VTestDriver__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                             ? 
                                                                            __Vtemp_h8717c569__1[6U]
                                                                             : 
                                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[6U])))) 
                                                                    | (VTestDriver__ConstPool__CONST_hd0572db1_0[7U] 
                                                                       ^ 
                                                                       (VTestDriver__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                            ? 
                                                                           __Vtemp_h8717c569__1[7U]
                                                                            : 
                                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[7U])))) 
                                                                   | (VTestDriver__ConstPool__CONST_hd0572db1_0[8U] 
                                                                      ^ 
                                                                      (VTestDriver__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                           ? 
                                                                          __Vtemp_h8717c569__1[8U]
                                                                           : 
                                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[8U])))) 
                                                                  | (VTestDriver__ConstPool__CONST_hd0572db1_0[9U] 
                                                                     ^ 
                                                                     (VTestDriver__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                          ? 
                                                                         __Vtemp_h8717c569__1[9U]
                                                                          : 
                                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[9U])))) 
                                                                 | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU] 
                                                                    ^ 
                                                                    (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                         ? 
                                                                        __Vtemp_h8717c569__1[0xaU]
                                                                         : 
                                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU])))) 
                                                                | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU] 
                                                                   ^ 
                                                                   (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                        ? 
                                                                       __Vtemp_h8717c569__1[0xbU]
                                                                        : 
                                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU])))) 
                                                               | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU] 
                                                                  ^ 
                                                                  (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                       ? 
                                                                      __Vtemp_h8717c569__1[0xcU]
                                                                       : 
                                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU])))) 
                                                              | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU] 
                                                                 ^ 
                                                                 (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                      ? 
                                                                     __Vtemp_h8717c569__1[0xdU]
                                                                      : 
                                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU])))) 
                                                             | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU] 
                                                                ^ 
                                                                (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                     ? 
                                                                    __Vtemp_h8717c569__1[0xeU]
                                                                     : 
                                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU])))) 
                                                            | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU] 
                                                               ^ 
                                                               (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                    ? 
                                                                   __Vtemp_h8717c569__1[0xfU]
                                                                    : 
                                                                   VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU])))) 
                                                           | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U] 
                                                              ^ 
                                                              (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                   ? 
                                                                  __Vtemp_h8717c569__1[0x10U]
                                                                   : 
                                                                  VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U])))) 
                                                          | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U] 
                                                             ^ 
                                                             (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                  ? 
                                                                 __Vtemp_h8717c569__1[0x11U]
                                                                  : 
                                                                 VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U])))) 
                                                         | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U] 
                                                            ^ 
                                                            (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                 ? 
                                                                __Vtemp_h8717c569__1[0x12U]
                                                                 : 
                                                                VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U])))) 
                                                        | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U] 
                                                           ^ 
                                                           (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                                ? 
                                                               __Vtemp_h8717c569__1[0x13U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U])))) 
                                                       | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U] 
                                                          ^ 
                                                          (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                               ? 
                                                              __Vtemp_h8717c569__1[0x14U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U])))) 
                                                      | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U] 
                                                         ^ 
                                                         (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                              ? 
                                                             __Vtemp_h8717c569__1[0x15U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U])))) 
                                                     | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U] 
                                                        ^ 
                                                        (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                             ? 
                                                            __Vtemp_h8717c569__1[0x16U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U])))) 
                                                    | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U] 
                                                       ^ 
                                                       (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                            ? 
                                                           __Vtemp_h8717c569__1[0x17U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U])))) 
                                                   | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U] 
                                                      ^ 
                                                      (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                           ? 
                                                          __Vtemp_h8717c569__1[0x18U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U])))) 
                                                  | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U] 
                                                     ^ 
                                                     (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                          ? 
                                                         __Vtemp_h8717c569__1[0x19U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U])))) 
                                                 | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU] 
                                                    ^ 
                                                    (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                         ? 
                                                        __Vtemp_h8717c569__1[0x1aU]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU])))) 
                                                | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU] 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                        ? 
                                                       __Vtemp_h8717c569__1[0x1bU]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU])))) 
                                               | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU] 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                       ? 
                                                      __Vtemp_h8717c569__1[0x1cU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU])))) 
                                              | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU] 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                      ? 
                                                     __Vtemp_h8717c569__1[0x1dU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU])))) 
                                             | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU] 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                       ? 
                                                      __Vtemp_h8717c569__1[0x1eU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU])))) 
                                            | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU] 
                                               ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                      ? 
                                                     __Vtemp_h8717c569__1[0x1fU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU])))) 
                                           | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U] 
                                              ^ (VTestDriver__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)
                                                     ? 
                                                    __Vtemp_h8717c569__1[0x20U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U]))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Plic.scala:363:15)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 594, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:596: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 596, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((((((((((((((((((VTestDriver__ConstPool__CONST_hd0572db1_0[0U] 
                                                                          ^ 
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0U]) 
                                                                         | (VTestDriver__ConstPool__CONST_hd0572db1_0[1U] 
                                                                            ^ 
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[1U])) 
                                                                        | (VTestDriver__ConstPool__CONST_hd0572db1_0[2U] 
                                                                           ^ 
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[2U])) 
                                                                       | (VTestDriver__ConstPool__CONST_hd0572db1_0[3U] 
                                                                          ^ 
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[3U])) 
                                                                      | (VTestDriver__ConstPool__CONST_hd0572db1_0[4U] 
                                                                         ^ 
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[4U])) 
                                                                     | (VTestDriver__ConstPool__CONST_hd0572db1_0[5U] 
                                                                        ^ 
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[5U])) 
                                                                    | (VTestDriver__ConstPool__CONST_hd0572db1_0[6U] 
                                                                       ^ 
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[6U])) 
                                                                   | (VTestDriver__ConstPool__CONST_hd0572db1_0[7U] 
                                                                      ^ 
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[7U])) 
                                                                  | (VTestDriver__ConstPool__CONST_hd0572db1_0[8U] 
                                                                     ^ 
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[8U])) 
                                                                 | (VTestDriver__ConstPool__CONST_hd0572db1_0[9U] 
                                                                    ^ 
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[9U])) 
                                                                | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xaU] 
                                                                   ^ 
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xaU])) 
                                                               | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xbU] 
                                                                  ^ 
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xbU])) 
                                                              | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xcU] 
                                                                 ^ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xcU])) 
                                                             | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xdU] 
                                                                ^ 
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xdU])) 
                                                            | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xeU] 
                                                               ^ 
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xeU])) 
                                                           | (VTestDriver__ConstPool__CONST_hd0572db1_0[0xfU] 
                                                              ^ 
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xfU])) 
                                                          | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x10U] 
                                                             ^ 
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x10U])) 
                                                         | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x11U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x11U])) 
                                                        | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x12U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x12U])) 
                                                       | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x13U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x13U])) 
                                                      | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x14U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x14U])) 
                                                     | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x15U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x15U])) 
                                                    | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x16U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x16U])) 
                                                   | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x17U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x17U])) 
                                                  | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x18U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x18U])) 
                                                 | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x19U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x19U])) 
                                                | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1aU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1aU])) 
                                               | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1bU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1bU])) 
                                              | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1cU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1cU])) 
                                             | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1dU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1dU])) 
                                            | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1eU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1eU])) 
                                           | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x1fU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x1fU])) 
                                          | (VTestDriver__ConstPool__CONST_hd0572db1_0[0x20U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x20U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor: Assertion failed: TileLink timeout expired (connected at Plic.scala:363:15)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 600, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_52.sv:602: Assertion failed in %NTestDriver.testHarness.chiptop0.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_52.sv", 602, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1764(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1764\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:161: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 161, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:163: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 163, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:167: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 167, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:169: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 169, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1765(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1765\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:173: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 173, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:175: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 175, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:179: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 179, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:181: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 181, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1766(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1766\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:185: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 185, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:187: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 187, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:191: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 191, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:193: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 193, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1767(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1767\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0x10U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:197: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 197, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:199: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 199, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 203, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:205: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 205, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1768(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1768\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:209: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 209, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:211: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 211, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:215: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 215, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:217: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 217, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1769(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1769\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:221: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 221, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:223: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 223, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:227: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 227, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:229: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 229, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1770(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1770\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:233: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 233, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:235: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 235, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:239: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 239, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:241: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 241, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1771(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1771\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:245: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 245, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:247: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 247, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0x10U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:251: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 251, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:253: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 253, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1772(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1772\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:257: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 257, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:259: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 259, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:263: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 263, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:265: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 265, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1773(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1773\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                           >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 269, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:271: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 271, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 275, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:277: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 277, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1774(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1774\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:281: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:283: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 283, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:287: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:289: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 289, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1775(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1775\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0x10U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:295: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 295, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1776(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1776\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x18U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel Get is corrupt (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 301, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:305: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 307, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1777(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1777\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:311: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 313, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:317: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 319, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1778(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1778\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:323: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 325, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0x10U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:329: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 331, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1779(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1779\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                      & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:335: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 335, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:337: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 337, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x40fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:341: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 341, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:343: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 343, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1780(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1780\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:347: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 347, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 349, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:353: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at BootROM.scala:86:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 353, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootROMDomainWrapper.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 355, "");
        }
    }
}
