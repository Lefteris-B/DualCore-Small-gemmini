# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestDriver.mk

default: /home/iamme/chipyard/sims/verilator/simulator-chipyard.harness-CustomGemminiSoCConfig

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/iamme/chipyard/.conda-env/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestDriver
# Module prefix (from --prefix)
VM_MODPREFIX = VTestDriver
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O3 -std=c++17 -I/home/iamme/chipyard/.conda-env/riscv-tools/include -I/home/iamme/chipyard/tools/DRAMSim2 -I/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral   -DVERILATOR -include /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/chipyard.harness.TestHarness.CustomGemminiSoCConfig.plusArgs \
	-include /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/chipyard.harness.TestHarness.CustomGemminiSoCConfig/VTestDriver.h \
	-DVL_TIME_CONTEXT \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/iamme/chipyard/.conda-env/riscv-tools/lib -Wl,-rpath,/home/iamme/chipyard/.conda-env/riscv-tools/lib -L/home/iamme/chipyard/sims/verilator -L/home/iamme/chipyard/tools/DRAMSim2 -lriscv -lfesvr -ldramsim  \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDRAM \
	SimJTAG \
	SimTSI \
	SimUART \
	mm \
	mm_dramsim2 \
	remote_bitbang \
	testchip_tsi \
	uart \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral \


### Default rules...
# Include list of all generated classes
include VTestDriver_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDRAM.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/SimDRAM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimTSI.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/SimTSI.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimUART.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/SimUART.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/mm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm_dramsim2.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/mm_dramsim2.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
testchip_tsi.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/testchip_tsi.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/iamme/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CustomGemminiSoCConfig/gen-collateral/uart.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/iamme/chipyard/sims/verilator/simulator-chipyard.harness-CustomGemminiSoCConfig: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
