// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module LoadController(
  input         clock,
                reset,
                io_cmd_valid,
  input  [6:0]  io_cmd_bits_cmd_inst_funct,
  input  [4:0]  io_cmd_bits_cmd_inst_rs2,
                io_cmd_bits_cmd_inst_rs1,
  input         io_cmd_bits_cmd_inst_xd,
                io_cmd_bits_cmd_inst_xs1,
                io_cmd_bits_cmd_inst_xs2,
  input  [4:0]  io_cmd_bits_cmd_inst_rd,
  input  [6:0]  io_cmd_bits_cmd_inst_opcode,
  input  [63:0] io_cmd_bits_cmd_rs1,
                io_cmd_bits_cmd_rs2,
  input         io_cmd_bits_cmd_status_debug,
                io_cmd_bits_cmd_status_cease,
                io_cmd_bits_cmd_status_wfi,
  input  [31:0] io_cmd_bits_cmd_status_isa,
  input  [1:0]  io_cmd_bits_cmd_status_dprv,
  input         io_cmd_bits_cmd_status_dv,
  input  [1:0]  io_cmd_bits_cmd_status_prv,
  input         io_cmd_bits_cmd_status_v,
                io_cmd_bits_cmd_status_sd,
  input  [22:0] io_cmd_bits_cmd_status_zero2,
  input         io_cmd_bits_cmd_status_mpv,
                io_cmd_bits_cmd_status_gva,
                io_cmd_bits_cmd_status_mbe,
                io_cmd_bits_cmd_status_sbe,
  input  [1:0]  io_cmd_bits_cmd_status_sxl,
                io_cmd_bits_cmd_status_uxl,
  input         io_cmd_bits_cmd_status_sd_rv32,
  input  [7:0]  io_cmd_bits_cmd_status_zero1,
  input         io_cmd_bits_cmd_status_tsr,
                io_cmd_bits_cmd_status_tw,
                io_cmd_bits_cmd_status_tvm,
                io_cmd_bits_cmd_status_mxr,
                io_cmd_bits_cmd_status_sum,
                io_cmd_bits_cmd_status_mprv,
  input  [1:0]  io_cmd_bits_cmd_status_xs,
                io_cmd_bits_cmd_status_fs,
                io_cmd_bits_cmd_status_mpp,
                io_cmd_bits_cmd_status_vs,
  input         io_cmd_bits_cmd_status_spp,
                io_cmd_bits_cmd_status_mpie,
                io_cmd_bits_cmd_status_ube,
                io_cmd_bits_cmd_status_spie,
                io_cmd_bits_cmd_status_upie,
                io_cmd_bits_cmd_status_mie,
                io_cmd_bits_cmd_status_hie,
                io_cmd_bits_cmd_status_sie,
                io_cmd_bits_cmd_status_uie,
  input  [5:0]  io_cmd_bits_rob_id_bits,
  input         io_cmd_bits_from_matmul_fsm,
                io_cmd_bits_from_conv_fsm,
                io_dma_req_ready,
                io_dma_resp_valid,
  input  [15:0] io_dma_resp_bits_bytesRead,
  input  [7:0]  io_dma_resp_bits_cmd_id,
  input         io_completed_ready,
  output        io_cmd_ready,
                io_dma_req_valid,
  output [39:0] io_dma_req_bits_vaddr,
  output        io_dma_req_bits_laddr_is_acc_addr,
                io_dma_req_bits_laddr_accumulate,
                io_dma_req_bits_laddr_read_full_acc_row,
  output [2:0]  io_dma_req_bits_laddr_norm_cmd,
  output [10:0] io_dma_req_bits_laddr_garbage,
  output        io_dma_req_bits_laddr_garbage_bit,
  output [13:0] io_dma_req_bits_laddr_data,
  output [15:0] io_dma_req_bits_cols,
                io_dma_req_bits_repeats,
  output [31:0] io_dma_req_bits_scale,
  output        io_dma_req_bits_has_acc_bitwidth,
                io_dma_req_bits_all_zeros,
  output [15:0] io_dma_req_bits_block_stride,
  output [7:0]  io_dma_req_bits_pixel_repeats,
                io_dma_req_bits_cmd_id,
  output        io_dma_req_bits_status_debug,
                io_dma_req_bits_status_cease,
                io_dma_req_bits_status_wfi,
  output [31:0] io_dma_req_bits_status_isa,
  output [1:0]  io_dma_req_bits_status_dprv,
  output        io_dma_req_bits_status_dv,
  output [1:0]  io_dma_req_bits_status_prv,
  output        io_dma_req_bits_status_v,
                io_dma_req_bits_status_sd,
  output [22:0] io_dma_req_bits_status_zero2,
  output        io_dma_req_bits_status_mpv,
                io_dma_req_bits_status_gva,
                io_dma_req_bits_status_mbe,
                io_dma_req_bits_status_sbe,
  output [1:0]  io_dma_req_bits_status_sxl,
                io_dma_req_bits_status_uxl,
  output        io_dma_req_bits_status_sd_rv32,
  output [7:0]  io_dma_req_bits_status_zero1,
  output        io_dma_req_bits_status_tsr,
                io_dma_req_bits_status_tw,
                io_dma_req_bits_status_tvm,
                io_dma_req_bits_status_mxr,
                io_dma_req_bits_status_sum,
                io_dma_req_bits_status_mprv,
  output [1:0]  io_dma_req_bits_status_xs,
                io_dma_req_bits_status_fs,
                io_dma_req_bits_status_mpp,
                io_dma_req_bits_status_vs,
  output        io_dma_req_bits_status_spp,
                io_dma_req_bits_status_mpie,
                io_dma_req_bits_status_ube,
                io_dma_req_bits_status_spie,
                io_dma_req_bits_status_upie,
                io_dma_req_bits_status_mie,
                io_dma_req_bits_status_hie,
                io_dma_req_bits_status_sie,
                io_dma_req_bits_status_uie,
                io_completed_valid,
  output [5:0]  io_completed_bits,
  output        io_busy,
                io_counter_event_signal_8,
                io_counter_event_signal_9,
                io_counter_event_signal_10
);

  wire             _cmd_tracker_io_alloc_ready;	// @[LoadController.scala:94:27]
  wire             _cmd_tracker_io_alloc_bits_cmd_id;	// @[LoadController.scala:94:27]
  wire             _cmd_tracker_io_busy;	// @[LoadController.scala:94:27]
  wire             _cmd_io_deq_valid;	// @[Decoupled.scala:375:21]
  wire [6:0]       _cmd_io_deq_bits_cmd_inst_funct;	// @[Decoupled.scala:375:21]
  wire [63:0]      _cmd_io_deq_bits_cmd_rs1;	// @[Decoupled.scala:375:21]
  wire [63:0]      _cmd_io_deq_bits_cmd_rs2;	// @[Decoupled.scala:375:21]
  wire [5:0]       _cmd_io_deq_bits_rob_id_bits;	// @[Decoupled.scala:375:21]
  reg  [1:0]       control_state;	// @[LoadController.scala:31:30]
  reg  [39:0]      strides_0;	// @[LoadController.scala:33:20]
  reg  [39:0]      strides_1;	// @[LoadController.scala:33:20]
  reg  [39:0]      strides_2;	// @[LoadController.scala:33:20]
  reg  [31:0]      scales_0;	// @[LoadController.scala:34:19]
  reg  [31:0]      scales_1;	// @[LoadController.scala:34:19]
  reg  [31:0]      scales_2;	// @[LoadController.scala:34:19]
  reg              shrinks_0;	// @[LoadController.scala:35:20]
  reg              shrinks_1;	// @[LoadController.scala:35:20]
  reg              shrinks_2;	// @[LoadController.scala:35:20]
  reg  [13:0]      block_strides_0;	// @[LoadController.scala:36:26]
  reg  [13:0]      block_strides_1;	// @[LoadController.scala:36:26]
  reg  [13:0]      block_strides_2;	// @[LoadController.scala:36:26]
  reg  [4:0]       pixel_repeats_0;	// @[LoadController.scala:37:26]
  reg  [4:0]       pixel_repeats_1;	// @[LoadController.scala:37:26]
  reg  [4:0]       pixel_repeats_2;	// @[LoadController.scala:37:26]
  reg  [3:0]       row_counter;	// @[LoadController.scala:40:28]
  wire [1:0]       state_id = (|_cmd_io_deq_bits_cmd_inst_funct) ? (_cmd_io_deq_bits_cmd_inst_funct == 7'h1 ? 2'h1 : {_cmd_io_deq_bits_cmd_inst_funct == 7'hE, 1'h0}) : _cmd_io_deq_bits_cmd_rs1[4:3];	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :52:50, :61:65, :62:30, :64:{21,46}, :100:19, Mux.scala:101:16]
  wire [3:0][39:0] _GEN = {{strides_0}, {strides_2}, {strides_1}, {strides_0}};	// @[LoadController.scala:33:20, :76:37]
  wire [39:0]      _GEN_0 = _GEN[state_id];	// @[LoadController.scala:64:21, :76:37]
  wire             _io_dma_req_bits_repeats_T = _GEN_0 == 40'h0;	// @[LoadController.scala:76:37]
  wire [4:0]       actual_rows_read = _io_dma_req_bits_repeats_T & (|_cmd_io_deq_bits_cmd_rs1) ? 5'h1 : _cmd_io_deq_bits_cmd_rs2[52:48];	// @[Decoupled.scala:375:21, LoadController.scala:45:43, :72:25, :76:{29,37,45}]
  wire             _T_5 = control_state == 2'h0;	// @[LoadController.scala:31:30, :99:38]
  wire             _T_12 = control_state == 2'h1;	// @[LoadController.scala:31:30, :100:19]
  wire             _T_11 = control_state == 2'h2;	// @[LoadController.scala:31:30, :101:20, Mux.scala:101:16]
  wire             _io_dma_req_valid_output = _T_5 & _cmd_io_deq_valid & (|_cmd_io_deq_bits_cmd_inst_funct) & _cmd_tracker_io_alloc_ready | _T_12 | _T_11 & (|row_counter);	// @[Decoupled.scala:375:21, LoadController.scala:40:28, :64:46, :94:27, :99:{38,85}, :100:{19,49}, :101:{20,37,52}]
  wire [3:0][13:0] _GEN_1 = {{block_strides_0}, {block_strides_2}, {block_strides_1}, {block_strides_0}};	// @[LoadController.scala:36:26, :106:32]
  wire [13:0]      _GEN_2 = _GEN_1[state_id];	// @[LoadController.scala:64:21, :106:32]
  wire [3:0][31:0] _GEN_3 = {{scales_0}, {scales_2}, {scales_1}, {scales_0}};	// @[LoadController.scala:34:19, :107:25]
  wire [3:0]       _GEN_4 = {{shrinks_0}, {shrinks_2}, {shrinks_1}, {shrinks_0}};	// @[LoadController.scala:35:20, :108:81]
  wire             _io_dma_req_bits_has_acc_bitwidth_output = _cmd_io_deq_bits_cmd_rs2[31] & ~_GEN_4[state_id];	// @[Decoupled.scala:375:21, LoadController.scala:45:43, :64:21, :108:{78,81}]
  wire [3:0][4:0]  _GEN_5 = {{pixel_repeats_0}, {pixel_repeats_2}, {pixel_repeats_1}, {pixel_repeats_0}};	// @[LoadController.scala:37:26, :111:33]
  wire             _cmd_tracker_io_alloc_valid_T_2 = _T_5 & _cmd_io_deq_valid & (|_cmd_io_deq_bits_cmd_inst_funct);	// @[Decoupled.scala:375:21, LoadController.scala:64:46, :99:38, :114:84]
  wire [10:0]      _GEN_6 = {4'h0, _cmd_io_deq_bits_cmd_rs2[38:32]} * {6'h0, actual_rows_read};	// @[Decoupled.scala:375:21, LoadController.scala:40:28, :45:43, :76:29, :116:48]
  wire [10:0]      _GEN_7 = _io_dma_req_bits_has_acc_bitwidth_output ? {_GEN_6[8:0], 2'h0} : _GEN_6;	// @[LoadController.scala:31:30, :108:78, :116:{8,48,67}]
  wire             _T_15 = _cmd_tracker_io_alloc_valid_T_2 & _cmd_tracker_io_alloc_ready;	// @[DMACommandTracker.scala:27:40, LoadController.scala:94:27, :114:84]
  reg              cmd_id_buf;	// @[Reg.scala:19:16]
  wire             _last_row_T_4 = io_dma_req_ready & _io_dma_req_valid_output;	// @[Decoupled.scala:51:35, LoadController.scala:100:49]
  wire [4:0]       row_counter_max = actual_rows_read - 5'h1;	// @[LoadController.scala:76:29, Util.scala:18:28]
  wire             _row_counter_T_9 = row_counter_max == 5'h0;	// @[LoadController.scala:105:33, Util.scala:18:28, :19:28]
  wire [4:0]       _GEN_8 = {1'h0, row_counter};	// @[LoadController.scala:33:20, :40:28, Util.scala:27:15]
  wire             last_row = row_counter == 4'h0 | _GEN_8 == actual_rows_read - 5'h1 & _last_row_T_4;	// @[Decoupled.scala:51:35, LoadController.scala:40:28, :76:29, :165:{34,42,58,78,83}, Util.scala:27:15]
  wire             _pixel_repeats_T = _cmd_io_deq_bits_cmd_rs1[12:8] == 5'h0;	// @[Decoupled.scala:375:21, LoadController.scala:52:50, :105:33, :148:52]
  always @(posedge clock) begin
    if (reset) begin
      control_state <= 2'h0;	// @[LoadController.scala:31:30]
      row_counter <= 4'h0;	// @[LoadController.scala:40:28]
    end
    else begin
      if (_T_5) begin	// @[LoadController.scala:99:38]
        if (_cmd_io_deq_valid & (|_cmd_io_deq_bits_cmd_inst_funct) & _T_15) begin	// @[DMACommandTracker.scala:27:40, Decoupled.scala:375:21, LoadController.scala:31:30, :64:46, :142:24, :143:24]
          if (_last_row_T_4)	// @[Decoupled.scala:51:35]
            control_state <= 2'h2;	// @[LoadController.scala:31:30, Mux.scala:101:16]
          else	// @[Decoupled.scala:51:35]
            control_state <= 2'h1;	// @[LoadController.scala:31:30, :100:19]
        end
      end
      else if (_T_12) begin	// @[LoadController.scala:100:19]
        if (_last_row_T_4)	// @[Decoupled.scala:51:35]
          control_state <= 2'h2;	// @[LoadController.scala:31:30, Mux.scala:101:16]
      end
      else if (_T_11 & last_row)	// @[LoadController.scala:31:30, :101:20, :140:26, :165:42, :167:23, :168:23]
        control_state <= 2'h0;	// @[LoadController.scala:31:30]
      if (_last_row_T_4)	// @[Decoupled.scala:51:35]
        row_counter <= _row_counter_T_9 ? 4'h0 : _GEN_8 >= row_counter_max ? 4'h1 - (row_counter_max[3:0] - row_counter) - 4'h1 : row_counter + 4'h1;	// @[LoadController.scala:40:28, :76:29, Mux.scala:101:16, Util.scala:18:28, :19:28, :27:15, :30:{10,47,54,59}]
    end
    if (_T_5 & _cmd_io_deq_valid & ~(|_cmd_io_deq_bits_cmd_inst_funct) & state_id == 2'h0) begin	// @[Decoupled.scala:375:21, LoadController.scala:31:30, :33:20, :64:{21,46}, :99:38, :140:26, :142:24, :143:24, :144:18]
      strides_0 <= _cmd_io_deq_bits_cmd_rs2[39:0];	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :144:18]
      scales_0 <= _cmd_io_deq_bits_cmd_rs1[63:32];	// @[Decoupled.scala:375:21, LoadController.scala:34:19, :52:50]
      shrinks_0 <= _cmd_io_deq_bits_cmd_rs1[2];	// @[Decoupled.scala:375:21, LoadController.scala:35:20, :52:50]
      block_strides_0 <= _cmd_io_deq_bits_cmd_rs1[29:16];	// @[Decoupled.scala:375:21, LoadController.scala:36:26, :52:50]
      if (_pixel_repeats_T)	// @[LoadController.scala:148:52]
        pixel_repeats_0 <= 5'h1;	// @[LoadController.scala:37:26, :76:29]
      else	// @[LoadController.scala:148:52]
        pixel_repeats_0 <= _cmd_io_deq_bits_cmd_rs1[12:8];	// @[Decoupled.scala:375:21, LoadController.scala:37:26, :52:50]
    end
    if (_T_5 & _cmd_io_deq_valid & ~(|_cmd_io_deq_bits_cmd_inst_funct) & state_id == 2'h1) begin	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :64:{21,46}, :99:38, :100:19, :140:26, :142:24, :143:24, :144:18]
      strides_1 <= _cmd_io_deq_bits_cmd_rs2[39:0];	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :144:18]
      scales_1 <= _cmd_io_deq_bits_cmd_rs1[63:32];	// @[Decoupled.scala:375:21, LoadController.scala:34:19, :52:50]
      shrinks_1 <= _cmd_io_deq_bits_cmd_rs1[2];	// @[Decoupled.scala:375:21, LoadController.scala:35:20, :52:50]
      block_strides_1 <= _cmd_io_deq_bits_cmd_rs1[29:16];	// @[Decoupled.scala:375:21, LoadController.scala:36:26, :52:50]
      if (_pixel_repeats_T)	// @[LoadController.scala:148:52]
        pixel_repeats_1 <= 5'h1;	// @[LoadController.scala:37:26, :76:29]
      else	// @[LoadController.scala:148:52]
        pixel_repeats_1 <= _cmd_io_deq_bits_cmd_rs1[12:8];	// @[Decoupled.scala:375:21, LoadController.scala:37:26, :52:50]
    end
    if (_T_5 & _cmd_io_deq_valid & ~(|_cmd_io_deq_bits_cmd_inst_funct) & state_id == 2'h2) begin	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :64:{21,46}, :99:38, :140:26, :142:24, :143:24, :144:18, Mux.scala:101:16]
      strides_2 <= _cmd_io_deq_bits_cmd_rs2[39:0];	// @[Decoupled.scala:375:21, LoadController.scala:33:20, :144:18]
      scales_2 <= _cmd_io_deq_bits_cmd_rs1[63:32];	// @[Decoupled.scala:375:21, LoadController.scala:34:19, :52:50]
      shrinks_2 <= _cmd_io_deq_bits_cmd_rs1[2];	// @[Decoupled.scala:375:21, LoadController.scala:35:20, :52:50]
      block_strides_2 <= _cmd_io_deq_bits_cmd_rs1[29:16];	// @[Decoupled.scala:375:21, LoadController.scala:36:26, :52:50]
      if (_pixel_repeats_T)	// @[LoadController.scala:148:52]
        pixel_repeats_2 <= 5'h1;	// @[LoadController.scala:37:26, :76:29]
      else	// @[LoadController.scala:148:52]
        pixel_repeats_2 <= _cmd_io_deq_bits_cmd_rs1[12:8];	// @[Decoupled.scala:375:21, LoadController.scala:37:26, :52:50]
    end
    if (_T_15)	// @[DMACommandTracker.scala:27:40]
      cmd_id_buf <= _cmd_tracker_io_alloc_bits_cmd_id;	// @[LoadController.scala:94:27, Reg.scala:19:16]
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[Util.scala:19:11]
      if (_last_row_T_4 & ~reset & ~((|row_counter_max) | _row_counter_T_9)) begin	// @[Decoupled.scala:51:35, Util.scala:18:28, :19:{11,14,21,28}]
        if (`ASSERT_VERBOSE_COND_)	// @[Util.scala:19:11]
          $error("Assertion failed: cannot wrapAdd when n is larger than max, unless max is 0\n    at Util.scala:19 assert(n <= max || max === 0.U, \"cannot wrapAdd when n is larger than max, unless max is 0\")\n");	// @[Util.scala:19:11]
        if (`STOP_COND_)	// @[Util.scala:19:11]
          $fatal;	// @[Util.scala:19:11]
      end
      if (_last_row_T_4 & ~reset & _GEN_2 < {9'h0, _cmd_io_deq_bits_cmd_rs2[52:48]}) begin	// @[Decoupled.scala:51:35, :375:21, LoadController.scala:45:43, :104:24, :106:32, :136:{11,25}]
        if (`ASSERT_VERBOSE_COND_)	// @[LoadController.scala:136:11]
          $error("Assertion failed\n    at LoadController.scala:136 assert(block_stride >= rows)\n");	// @[LoadController.scala:136:11]
        if (`STOP_COND_)	// @[LoadController.scala:136:11]
          $fatal;	// @[LoadController.scala:136:11]
      end
      if (~reset & _T_15 & _GEN_7 == 11'h0) begin	// @[DMACommandTracker.scala:27:40, LoadController.scala:116:8, :189:{9,83}, LocalAddr.scala:51:25]
        if (`ASSERT_VERBOSE_COND_)	// @[LoadController.scala:189:9]
          $error("Assertion failed: A single mvin instruction must load more than 0 bytes\n    at LoadController.scala:189 assert(!(cmd_tracker.io.alloc.fire() && cmd_tracker.io.alloc.bits.bytes_to_read === 0.U), \"A single mvin instruction must load more than 0 bytes\")\n");	// @[LoadController.scala:189:9]
        if (`STOP_COND_)	// @[LoadController.scala:189:9]
          $fatal;	// @[LoadController.scala:189:9]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    logic [31:0] _RANDOM_3;
    logic [31:0] _RANDOM_4;
    logic [31:0] _RANDOM_5;
    logic [31:0] _RANDOM_6;
    logic [31:0] _RANDOM_7;
    logic [31:0] _RANDOM_8;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        _RANDOM_3 = `RANDOM;
        _RANDOM_4 = `RANDOM;
        _RANDOM_5 = `RANDOM;
        _RANDOM_6 = `RANDOM;
        _RANDOM_7 = `RANDOM;
        _RANDOM_8 = `RANDOM;
        control_state = _RANDOM_0[1:0];	// @[LoadController.scala:31:30]
        strides_0 = {_RANDOM_0[31:2], _RANDOM_1[9:0]};	// @[LoadController.scala:31:30, :33:20]
        strides_1 = {_RANDOM_1[31:10], _RANDOM_2[17:0]};	// @[LoadController.scala:33:20]
        strides_2 = {_RANDOM_2[31:18], _RANDOM_3[25:0]};	// @[LoadController.scala:33:20]
        scales_0 = {_RANDOM_3[31:26], _RANDOM_4[25:0]};	// @[LoadController.scala:33:20, :34:19]
        scales_1 = {_RANDOM_4[31:26], _RANDOM_5[25:0]};	// @[LoadController.scala:34:19]
        scales_2 = {_RANDOM_5[31:26], _RANDOM_6[25:0]};	// @[LoadController.scala:34:19]
        shrinks_0 = _RANDOM_6[26];	// @[LoadController.scala:34:19, :35:20]
        shrinks_1 = _RANDOM_6[27];	// @[LoadController.scala:34:19, :35:20]
        shrinks_2 = _RANDOM_6[28];	// @[LoadController.scala:34:19, :35:20]
        block_strides_0 = {_RANDOM_6[31:29], _RANDOM_7[10:0]};	// @[LoadController.scala:34:19, :36:26]
        block_strides_1 = _RANDOM_7[24:11];	// @[LoadController.scala:36:26]
        block_strides_2 = {_RANDOM_7[31:25], _RANDOM_8[6:0]};	// @[LoadController.scala:36:26]
        pixel_repeats_0 = _RANDOM_8[11:7];	// @[LoadController.scala:36:26, :37:26]
        pixel_repeats_1 = _RANDOM_8[16:12];	// @[LoadController.scala:36:26, :37:26]
        pixel_repeats_2 = _RANDOM_8[21:17];	// @[LoadController.scala:36:26, :37:26]
        row_counter = _RANDOM_8[25:22];	// @[LoadController.scala:36:26, :40:28]
        cmd_id_buf = _RANDOM_8[26];	// @[LoadController.scala:36:26, Reg.scala:19:16]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Queue_93 cmd (	// @[Decoupled.scala:375:21]
    .clock                          (clock),
    .reset                          (reset),
    .io_enq_valid                   (io_cmd_valid),
    .io_enq_bits_cmd_inst_funct     (io_cmd_bits_cmd_inst_funct),
    .io_enq_bits_cmd_inst_rs2       (io_cmd_bits_cmd_inst_rs2),
    .io_enq_bits_cmd_inst_rs1       (io_cmd_bits_cmd_inst_rs1),
    .io_enq_bits_cmd_inst_xd        (io_cmd_bits_cmd_inst_xd),
    .io_enq_bits_cmd_inst_xs1       (io_cmd_bits_cmd_inst_xs1),
    .io_enq_bits_cmd_inst_xs2       (io_cmd_bits_cmd_inst_xs2),
    .io_enq_bits_cmd_inst_rd        (io_cmd_bits_cmd_inst_rd),
    .io_enq_bits_cmd_inst_opcode    (io_cmd_bits_cmd_inst_opcode),
    .io_enq_bits_cmd_rs1            (io_cmd_bits_cmd_rs1),
    .io_enq_bits_cmd_rs2            (io_cmd_bits_cmd_rs2),
    .io_enq_bits_cmd_status_debug   (io_cmd_bits_cmd_status_debug),
    .io_enq_bits_cmd_status_cease   (io_cmd_bits_cmd_status_cease),
    .io_enq_bits_cmd_status_wfi     (io_cmd_bits_cmd_status_wfi),
    .io_enq_bits_cmd_status_isa     (io_cmd_bits_cmd_status_isa),
    .io_enq_bits_cmd_status_dprv    (io_cmd_bits_cmd_status_dprv),
    .io_enq_bits_cmd_status_dv      (io_cmd_bits_cmd_status_dv),
    .io_enq_bits_cmd_status_prv     (io_cmd_bits_cmd_status_prv),
    .io_enq_bits_cmd_status_v       (io_cmd_bits_cmd_status_v),
    .io_enq_bits_cmd_status_sd      (io_cmd_bits_cmd_status_sd),
    .io_enq_bits_cmd_status_zero2   (io_cmd_bits_cmd_status_zero2),
    .io_enq_bits_cmd_status_mpv     (io_cmd_bits_cmd_status_mpv),
    .io_enq_bits_cmd_status_gva     (io_cmd_bits_cmd_status_gva),
    .io_enq_bits_cmd_status_mbe     (io_cmd_bits_cmd_status_mbe),
    .io_enq_bits_cmd_status_sbe     (io_cmd_bits_cmd_status_sbe),
    .io_enq_bits_cmd_status_sxl     (io_cmd_bits_cmd_status_sxl),
    .io_enq_bits_cmd_status_uxl     (io_cmd_bits_cmd_status_uxl),
    .io_enq_bits_cmd_status_sd_rv32 (io_cmd_bits_cmd_status_sd_rv32),
    .io_enq_bits_cmd_status_zero1   (io_cmd_bits_cmd_status_zero1),
    .io_enq_bits_cmd_status_tsr     (io_cmd_bits_cmd_status_tsr),
    .io_enq_bits_cmd_status_tw      (io_cmd_bits_cmd_status_tw),
    .io_enq_bits_cmd_status_tvm     (io_cmd_bits_cmd_status_tvm),
    .io_enq_bits_cmd_status_mxr     (io_cmd_bits_cmd_status_mxr),
    .io_enq_bits_cmd_status_sum     (io_cmd_bits_cmd_status_sum),
    .io_enq_bits_cmd_status_mprv    (io_cmd_bits_cmd_status_mprv),
    .io_enq_bits_cmd_status_xs      (io_cmd_bits_cmd_status_xs),
    .io_enq_bits_cmd_status_fs      (io_cmd_bits_cmd_status_fs),
    .io_enq_bits_cmd_status_mpp     (io_cmd_bits_cmd_status_mpp),
    .io_enq_bits_cmd_status_vs      (io_cmd_bits_cmd_status_vs),
    .io_enq_bits_cmd_status_spp     (io_cmd_bits_cmd_status_spp),
    .io_enq_bits_cmd_status_mpie    (io_cmd_bits_cmd_status_mpie),
    .io_enq_bits_cmd_status_ube     (io_cmd_bits_cmd_status_ube),
    .io_enq_bits_cmd_status_spie    (io_cmd_bits_cmd_status_spie),
    .io_enq_bits_cmd_status_upie    (io_cmd_bits_cmd_status_upie),
    .io_enq_bits_cmd_status_mie     (io_cmd_bits_cmd_status_mie),
    .io_enq_bits_cmd_status_hie     (io_cmd_bits_cmd_status_hie),
    .io_enq_bits_cmd_status_sie     (io_cmd_bits_cmd_status_sie),
    .io_enq_bits_cmd_status_uie     (io_cmd_bits_cmd_status_uie),
    .io_enq_bits_rob_id_bits        (io_cmd_bits_rob_id_bits),
    .io_enq_bits_from_matmul_fsm    (io_cmd_bits_from_matmul_fsm),
    .io_enq_bits_from_conv_fsm      (io_cmd_bits_from_conv_fsm),
    .io_deq_ready                   (_T_5 ? _cmd_io_deq_valid & ~(|_cmd_io_deq_bits_cmd_inst_funct) : ~_T_12 & _T_11 & last_row),	// @[Decoupled.scala:375:21, LoadController.scala:64:46, :81:13, :99:38, :100:19, :101:20, :140:26, :142:24, :143:24, :165:42]
    .io_enq_ready                   (io_cmd_ready),
    .io_deq_valid                   (_cmd_io_deq_valid),
    .io_deq_bits_cmd_inst_funct     (_cmd_io_deq_bits_cmd_inst_funct),
    .io_deq_bits_cmd_rs1            (_cmd_io_deq_bits_cmd_rs1),
    .io_deq_bits_cmd_rs2            (_cmd_io_deq_bits_cmd_rs2),
    .io_deq_bits_cmd_status_debug   (io_dma_req_bits_status_debug),
    .io_deq_bits_cmd_status_cease   (io_dma_req_bits_status_cease),
    .io_deq_bits_cmd_status_wfi     (io_dma_req_bits_status_wfi),
    .io_deq_bits_cmd_status_isa     (io_dma_req_bits_status_isa),
    .io_deq_bits_cmd_status_dprv    (io_dma_req_bits_status_dprv),
    .io_deq_bits_cmd_status_dv      (io_dma_req_bits_status_dv),
    .io_deq_bits_cmd_status_prv     (io_dma_req_bits_status_prv),
    .io_deq_bits_cmd_status_v       (io_dma_req_bits_status_v),
    .io_deq_bits_cmd_status_sd      (io_dma_req_bits_status_sd),
    .io_deq_bits_cmd_status_zero2   (io_dma_req_bits_status_zero2),
    .io_deq_bits_cmd_status_mpv     (io_dma_req_bits_status_mpv),
    .io_deq_bits_cmd_status_gva     (io_dma_req_bits_status_gva),
    .io_deq_bits_cmd_status_mbe     (io_dma_req_bits_status_mbe),
    .io_deq_bits_cmd_status_sbe     (io_dma_req_bits_status_sbe),
    .io_deq_bits_cmd_status_sxl     (io_dma_req_bits_status_sxl),
    .io_deq_bits_cmd_status_uxl     (io_dma_req_bits_status_uxl),
    .io_deq_bits_cmd_status_sd_rv32 (io_dma_req_bits_status_sd_rv32),
    .io_deq_bits_cmd_status_zero1   (io_dma_req_bits_status_zero1),
    .io_deq_bits_cmd_status_tsr     (io_dma_req_bits_status_tsr),
    .io_deq_bits_cmd_status_tw      (io_dma_req_bits_status_tw),
    .io_deq_bits_cmd_status_tvm     (io_dma_req_bits_status_tvm),
    .io_deq_bits_cmd_status_mxr     (io_dma_req_bits_status_mxr),
    .io_deq_bits_cmd_status_sum     (io_dma_req_bits_status_sum),
    .io_deq_bits_cmd_status_mprv    (io_dma_req_bits_status_mprv),
    .io_deq_bits_cmd_status_xs      (io_dma_req_bits_status_xs),
    .io_deq_bits_cmd_status_fs      (io_dma_req_bits_status_fs),
    .io_deq_bits_cmd_status_mpp     (io_dma_req_bits_status_mpp),
    .io_deq_bits_cmd_status_vs      (io_dma_req_bits_status_vs),
    .io_deq_bits_cmd_status_spp     (io_dma_req_bits_status_spp),
    .io_deq_bits_cmd_status_mpie    (io_dma_req_bits_status_mpie),
    .io_deq_bits_cmd_status_ube     (io_dma_req_bits_status_ube),
    .io_deq_bits_cmd_status_spie    (io_dma_req_bits_status_spie),
    .io_deq_bits_cmd_status_upie    (io_dma_req_bits_status_upie),
    .io_deq_bits_cmd_status_mie     (io_dma_req_bits_status_mie),
    .io_deq_bits_cmd_status_hie     (io_dma_req_bits_status_hie),
    .io_deq_bits_cmd_status_sie     (io_dma_req_bits_status_sie),
    .io_deq_bits_cmd_status_uie     (io_dma_req_bits_status_uie),
    .io_deq_bits_rob_id_bits        (_cmd_io_deq_bits_rob_id_bits)
  );
  DMACommandTracker cmd_tracker (	// @[LoadController.scala:94:27]
    .clock                               (clock),
    .reset                               (reset),
    .io_alloc_valid                      (_cmd_tracker_io_alloc_valid_T_2),	// @[LoadController.scala:114:84]
    .io_alloc_bits_tag_rob_id            (_cmd_io_deq_bits_rob_id_bits),	// @[Decoupled.scala:375:21]
    .io_alloc_bits_bytes_to_read         (_GEN_7),	// @[LoadController.scala:116:8]
    .io_request_returned_valid           (io_dma_resp_valid),
    .io_request_returned_bits_bytes_read (io_dma_resp_bits_bytesRead[10:0]),	// @[LoadController.scala:121:51]
    .io_request_returned_bits_cmd_id     (io_dma_resp_bits_cmd_id[0]),	// @[LoadController.scala:120:47]
    .io_cmd_completed_ready              (io_completed_ready),
    .io_alloc_ready                      (_cmd_tracker_io_alloc_ready),
    .io_alloc_bits_cmd_id                (_cmd_tracker_io_alloc_bits_cmd_id),
    .io_cmd_completed_valid              (io_completed_valid),
    .io_cmd_completed_bits_tag_rob_id    (io_completed_bits),
    .io_busy                             (_cmd_tracker_io_busy)
  );
  assign io_dma_req_valid = _io_dma_req_valid_output;	// @[LoadController.scala:100:49]
  assign io_dma_req_bits_vaddr = _cmd_io_deq_bits_cmd_rs1[39:0] + {36'h0, row_counter} * _GEN_0;	// @[Decoupled.scala:375:21, LoadController.scala:40:28, :76:37, :102:{34,48}]
  assign io_dma_req_bits_laddr_is_acc_addr = _cmd_io_deq_bits_cmd_rs2[31];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_accumulate = _cmd_io_deq_bits_cmd_rs2[30];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_read_full_acc_row = _cmd_io_deq_bits_cmd_rs2[29];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_norm_cmd = _cmd_io_deq_bits_cmd_rs2[28:26];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_garbage = _cmd_io_deq_bits_cmd_rs2[25:15];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_garbage_bit = _cmd_io_deq_bits_cmd_rs2[14];	// @[Decoupled.scala:375:21, LoadController.scala:45:43]
  assign io_dma_req_bits_laddr_data = _cmd_io_deq_bits_cmd_rs2[13:0] + {10'h0, row_counter};	// @[Decoupled.scala:375:21, LoadController.scala:40:28, :45:43, LocalAddr.scala:51:25]
  assign io_dma_req_bits_cols = {9'h0, _cmd_io_deq_bits_cmd_rs2[38:32]};	// @[Decoupled.scala:375:21, LoadController.scala:45:43, :104:24]
  assign io_dma_req_bits_repeats = {11'h0, _io_dma_req_bits_repeats_T & (|_cmd_io_deq_bits_cmd_rs1) ? _cmd_io_deq_bits_cmd_rs2[52:48] - 5'h1 : 5'h0};	// @[Decoupled.scala:375:21, LoadController.scala:45:43, :72:25, :76:37, :105:{27,33,49,69}, LocalAddr.scala:51:25]
  assign io_dma_req_bits_scale = _GEN_3[state_id];	// @[LoadController.scala:64:21, :107:25]
  assign io_dma_req_bits_has_acc_bitwidth = _io_dma_req_bits_has_acc_bitwidth_output;	// @[LoadController.scala:108:78]
  assign io_dma_req_bits_all_zeros = ~(|_cmd_io_deq_bits_cmd_rs1);	// @[Decoupled.scala:375:21, LoadController.scala:72:25]
  assign io_dma_req_bits_block_stride = {2'h0, _GEN_2};	// @[LoadController.scala:31:30, :106:32]
  assign io_dma_req_bits_pixel_repeats = {3'h0, _GEN_5[state_id]};	// @[LoadController.scala:62:30, :64:21, :111:33]
  assign io_dma_req_bits_cmd_id = {7'h0, _T_15 ? _cmd_tracker_io_alloc_bits_cmd_id : cmd_id_buf};	// @[DMACommandTracker.scala:27:40, LoadController.scala:64:46, :94:27, :125:26, Reg.scala:19:16, Util.scala:91:8]
  assign io_busy = _cmd_io_deq_valid | _cmd_tracker_io_busy;	// @[Decoupled.scala:375:21, LoadController.scala:94:27, :96:24]
  assign io_counter_event_signal_8 = _T_12;	// @[LoadController.scala:100:19]
  assign io_counter_event_signal_9 = _T_11;	// @[LoadController.scala:101:20]
  assign io_counter_event_signal_10 = _io_dma_req_valid_output & ~io_dma_req_ready;	// @[LoadController.scala:100:49, :182:{91,94}]
endmodule

