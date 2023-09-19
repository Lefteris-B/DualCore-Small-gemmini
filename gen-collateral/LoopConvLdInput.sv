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

module LoopConvLdInput(
  input         clock,
                reset,
                io_req_valid,
  input  [15:0] io_req_bits_outer_bounds_batch_size,
                io_req_bits_outer_bounds_in_dim,
                io_req_bits_outer_bounds_in_stride,
                io_req_bits_inner_bounds_batches,
                io_req_bits_inner_bounds_lpad,
                io_req_bits_inner_bounds_rpad,
                io_req_bits_inner_bounds_upad,
                io_req_bits_inner_bounds_dpad,
                io_req_bits_derived_params_irows,
                io_req_bits_derived_params_icols,
                io_req_bits_derived_params_irows_unpadded,
                io_req_bits_derived_params_icols_unpadded,
                io_req_bits_derived_params_ichs,
                io_req_bits_derived_params_input_spad_stride,
  input  [13:0] io_req_bits_addr_start,
  input  [39:0] io_req_bits_dram_addr,
  input         io_req_bits_downsample,
  input  [15:0] io_req_bits_max_pixels_per_row,
  input         io_req_bits_input_dilated,
                io_req_bits_trans_input_3120,
                io_req_bits_loop_id,
                io_cmd_ready,
                io_rob_overloaded,
                io_wait_for_prev_loop,
  output        io_req_ready,
                io_cmd_valid,
  output [6:0]  io_cmd_bits_inst_funct,
  output [4:0]  io_cmd_bits_inst_rs2,
                io_cmd_bits_inst_rs1,
  output        io_cmd_bits_inst_xd,
                io_cmd_bits_inst_xs1,
                io_cmd_bits_inst_xs2,
  output [4:0]  io_cmd_bits_inst_rd,
  output [6:0]  io_cmd_bits_inst_opcode,
  output [63:0] io_cmd_bits_rs1,
                io_cmd_bits_rs2,
  output        io_idle,
                io_loop_id
);

  wire        _command_p_io_in_ready;	// @[LoopConv.scala:310:25]
  wire        _command_p_io_out_valid;	// @[LoopConv.scala:310:25]
  wire [6:0]  _command_p_io_out_bits_cmd_inst_funct;	// @[LoopConv.scala:310:25]
  wire [63:0] _command_p_io_out_bits_cmd_rs1;	// @[LoopConv.scala:310:25]
  wire [63:0] _command_p_io_out_bits_cmd_rs2;	// @[LoopConv.scala:310:25]
  wire [67:0] _command_p_io_out_bits_dram_addr;	// @[LoopConv.scala:310:25]
  wire [50:0] _command_p_io_out_bits_spad_addr;	// @[LoopConv.scala:310:25]
  wire [19:0] _command_p_io_out_bits_I;	// @[LoopConv.scala:310:25]
  wire [17:0] _command_p_io_out_bits_K;	// @[LoopConv.scala:310:25]
  wire        _command_p_io_busy;	// @[LoopConv.scala:310:25]
  reg  [1:0]  state;	// @[LoopConv.scala:253:22]
  reg  [15:0] req_outer_bounds_batch_size;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_outer_bounds_in_dim;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_outer_bounds_in_stride;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_inner_bounds_batches;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_inner_bounds_lpad;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_inner_bounds_rpad;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_inner_bounds_upad;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_inner_bounds_dpad;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_irows;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_icols;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_irows_unpadded;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_icols_unpadded;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_ichs;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_derived_params_input_spad_stride;	// @[LoopConv.scala:255:16]
  reg  [13:0] req_addr_start;	// @[LoopConv.scala:255:16]
  reg  [39:0] req_dram_addr;	// @[LoopConv.scala:255:16]
  reg         req_downsample;	// @[LoopConv.scala:255:16]
  reg  [15:0] req_max_pixels_per_row;	// @[LoopConv.scala:255:16]
  reg         req_input_dilated;	// @[LoopConv.scala:255:16]
  reg         req_trans_input_3120;	// @[LoopConv.scala:255:16]
  reg         req_loop_id;	// @[LoopConv.scala:255:16]
  wire [15:0] _GEN = req_trans_input_3120 ? (req_inner_bounds_batches < 16'h40 ? req_inner_bounds_batches : 16'h40) : req_derived_params_ichs < 16'h40 ? req_derived_params_ichs : 16'h40;	// @[LoopConv.scala:255:16, :263:{30,36}, :264:{33,42}, :265:29]
  reg  [15:0] b;	// @[LoopConv.scala:268:14]
  reg  [15:0] irow;	// @[LoopConv.scala:269:17]
  reg  [15:0] icol;	// @[LoopConv.scala:270:17]
  reg  [15:0] ich;	// @[LoopConv.scala:271:16]
  wire [16:0] _GEN_0 = {16'h0, req_input_dilated};	// @[LoopConv.scala:255:16, :260:37, :392:7]
  wire [16:0] _state_T_1 = {1'h0, req_inner_bounds_upad} + _GEN_0;	// @[LoopConv.scala:253:22, :255:16, :260:37]
  wire [18:0] _GEN_1 = {{3{irow[15]}}, irow};	// @[LoopConv.scala:269:17, :274:26]
  wire [16:0] _state_T_7 = {1'h0, req_inner_bounds_lpad} + _GEN_0;	// @[LoopConv.scala:253:22, :255:16, :260:37]
  wire [16:0] _GEN_2 = {irow[15], irow};	// @[LoopConv.scala:269:17, :274:26, :276:37]
  wire        _I_T_6 = $signed(icol) < 16'sh0;	// @[LoopConv.scala:270:17, :276:68, :392:7]
  wire [16:0] _I_T_20 = {1'h0, req_derived_params_icols_unpadded};	// @[LoopConv.scala:253:22, :255:16, :276:100]
  wire [16:0] _GEN_3 = {icol[15], icol};	// @[LoopConv.scala:270:17, :275:26, :276:82]
  wire [15:0] _GEN_4 = {16{ich[15]}};	// @[LoopConv.scala:271:16, :281:54]
  wire [31:0] _GEN_5 = {_GEN_4, ich};	// @[LoopConv.scala:271:16, :281:54]
  wire [31:0] _GEN_6 = {16'h0, req_outer_bounds_in_dim};	// @[LoopConv.scala:255:16, :281:54, :392:7]
  wire [31:0] _dram_offset_T_2 = _GEN_5 * _GEN_6;	// @[LoopConv.scala:281:54]
  wire [47:0] _GEN_7 = {32'h0, req_outer_bounds_in_dim};	// @[LoopConv.scala:255:16, :281:63]
  wire [47:0] _dram_offset_T_6 = {{16{_dram_offset_T_2[31]}}, _dram_offset_T_2} * _GEN_7;	// @[LoopConv.scala:281:{54,63}]
  wire [31:0] _GEN_8 = {{16{irow[15]}}, irow};	// @[LoopConv.scala:269:17, :274:26, :281:79]
  wire [31:0] _dram_offset_T_10 = _GEN_8 * _GEN_6;	// @[LoopConv.scala:281:{54,79}]
  wire [48:0] _dram_offset_T_12 = {_dram_offset_T_6[47], _dram_offset_T_6} + {{17{_dram_offset_T_10[31]}}, _dram_offset_T_10};	// @[LoopConv.scala:281:{63,72,79}]
  wire [49:0] _GEN_9 = {{34{icol[15]}}, icol};	// @[LoopConv.scala:270:17, :275:26, :281:87]
  wire [49:0] _dram_offset_T_13 = {_dram_offset_T_12[48], _dram_offset_T_12} + _GEN_9;	// @[LoopConv.scala:281:{72,87}]
  wire [65:0] _dram_offset_T_16 = {{16{_dram_offset_T_13[49]}}, _dram_offset_T_13} * {50'h0, req_inner_bounds_batches};	// @[LoopConv.scala:255:16, :281:{87,96}]
  wire [66:0] _dram_offset_T_18 = {_dram_offset_T_16[65], _dram_offset_T_16} + {{51{b[15]}}, b};	// @[LoopConv.scala:268:14, :281:{96,106}]
  wire [15:0] _GEN_10 = {16{b[15]}};	// @[LoopConv.scala:268:14, :281:106, :282:10]
  wire [31:0] _GEN_11 = {_GEN_10, b};	// @[LoopConv.scala:268:14, :282:10]
  wire [31:0] _dram_offset_T_26 = _GEN_11 * _GEN_6;	// @[LoopConv.scala:281:54, :282:10]
  wire [47:0] _dram_offset_T_30 = {{16{_dram_offset_T_26[31]}}, _dram_offset_T_26} * _GEN_7;	// @[LoopConv.scala:281:63, :282:{10,19}]
  wire [31:0] _dram_offset_T_34 = _GEN_8 * _GEN_6;	// @[LoopConv.scala:281:{54,79}, :282:35]
  wire [48:0] _dram_offset_T_36 = {_dram_offset_T_30[47], _dram_offset_T_30} + {{17{_dram_offset_T_34[31]}}, _dram_offset_T_34};	// @[LoopConv.scala:282:{19,28,35}]
  wire [49:0] _dram_offset_T_37 = {_dram_offset_T_36[48], _dram_offset_T_36} + _GEN_9;	// @[LoopConv.scala:281:87, :282:{28,43}]
  wire [65:0] _dram_offset_T_40 = {{16{_dram_offset_T_37[49]}}, _dram_offset_T_37} * {50'h0, req_outer_bounds_in_stride};	// @[LoopConv.scala:255:16, :281:96, :282:{43,52}]
  wire [66:0] _dram_offset_T_42 = {_dram_offset_T_40[65], _dram_offset_T_40} + {{51{ich[15]}}, ich};	// @[LoopConv.scala:271:16, :281:54, :282:{52,64}]
  wire [27:0] _GEN_12 = {12'h0, req_derived_params_input_spad_stride};	// @[LoopConv.scala:255:16, :286:54]
  wire [27:0] _spad_addr_T_4 = {_GEN_10, b[15:4]} * _GEN_12;	// @[LoopConv.scala:268:14, :282:10, :286:{31,54}]
  wire [28:0] _GEN_13 = {15'h0, req_addr_start};	// @[LoopConv.scala:255:16, :286:{25,90}]
  wire [28:0] _spad_addr_T_6 = _GEN_13 + {_spad_addr_T_4[27], _spad_addr_T_4};	// @[LoopConv.scala:286:{25,54}]
  wire [15:0] _GEN_14 = {15'h0, req_downsample};	// @[LoopConv.scala:255:16, :286:90]
  wire [31:0] _GEN_15 = {16'h0, req_derived_params_irows >> _GEN_14};	// @[LoopConv.scala:255:16, :286:{81,90}, :392:7]
  wire [31:0] _spad_addr_T_10 = _GEN_5 * _GEN_15;	// @[LoopConv.scala:281:54, :286:81]
  wire [15:0] _spad_addr_T_46 = req_derived_params_icols >> _GEN_14;	// @[LoopConv.scala:255:16, :286:{90,118}]
  wire [47:0] _GEN_16 = {32'h0, _spad_addr_T_46};	// @[LoopConv.scala:281:63, :286:{109,118}]
  wire [47:0] _spad_addr_T_15 = {{16{_spad_addr_T_10[31]}}, _spad_addr_T_10} * _GEN_16;	// @[LoopConv.scala:286:{81,109}]
  wire [48:0] _spad_addr_T_17 = {{20{_spad_addr_T_6[28]}}, _spad_addr_T_6} + {_spad_addr_T_15[47], _spad_addr_T_15};	// @[LoopConv.scala:286:{25,74,109}]
  wire [18:0] _GEN_17 = {18'h0, req_downsample};	// @[LoopConv.scala:255:16, :286:153, Mux.scala:101:16]
  wire [18:0] _spad_addr_T_45 = $signed($signed(_GEN_1 + {2'h0, _state_T_1 >> _GEN_0}) >>> _GEN_17);	// @[LoopConv.scala:260:{37,59}, :274:26, :286:153, :313:14]
  wire [34:0] _GEN_18 = {{16{_spad_addr_T_45[18]}}, _spad_addr_T_45};	// @[LoopConv.scala:286:{153,172}]
  wire [34:0] _GEN_19 = {19'h0, _spad_addr_T_46};	// @[LoopConv.scala:286:{118,172}, :354:35]
  wire [34:0] _spad_addr_T_22 = _GEN_18 * _GEN_19;	// @[LoopConv.scala:286:172]
  wire [49:0] _spad_addr_T_24 = {_spad_addr_T_17[48], _spad_addr_T_17} + {{15{_spad_addr_T_22[34]}}, _spad_addr_T_22};	// @[LoopConv.scala:286:{74,137,172}]
  wire [18:0] _spad_addr_T_52 = $signed($signed({{3{icol[15]}}, icol} + {2'h0, _state_T_7 >> _GEN_0}) >>> _GEN_17);	// @[LoopConv.scala:260:{37,59}, :270:17, :275:26, :286:{153,216}, :313:14]
  wire [50:0] _GEN_20 = {{32{_spad_addr_T_52[18]}}, _spad_addr_T_52};	// @[LoopConv.scala:286:{200,216}]
  wire [27:0] _spad_addr_T_31 = {_GEN_4, ich[15:4]} * _GEN_12;	// @[LoopConv.scala:271:16, :281:54, :286:54, :287:{33,56}]
  wire [28:0] _spad_addr_T_33 = _GEN_13 + {_spad_addr_T_31[27], _spad_addr_T_31};	// @[LoopConv.scala:286:25, :287:{25,56}]
  wire [31:0] _spad_addr_T_37 = _GEN_11 * _GEN_15;	// @[LoopConv.scala:282:10, :286:81, :287:81]
  wire [47:0] _spad_addr_T_42 = {{16{_spad_addr_T_37[31]}}, _spad_addr_T_37} * _GEN_16;	// @[LoopConv.scala:286:109, :287:{81,109}]
  wire [48:0] _spad_addr_T_44 = {{20{_spad_addr_T_33[28]}}, _spad_addr_T_33} + {_spad_addr_T_42[47], _spad_addr_T_42};	// @[LoopConv.scala:287:{25,76,109}]
  wire [34:0] _spad_addr_T_49 = _GEN_18 * _GEN_19;	// @[LoopConv.scala:286:172, :287:172]
  wire [49:0] _spad_addr_T_51 = {_spad_addr_T_44[48], _spad_addr_T_44} + {{15{_spad_addr_T_49[34]}}, _spad_addr_T_49};	// @[LoopConv.scala:287:{76,137,172}]
  wire [17:0] _GEN_21 = {2'h0, req_derived_params_icols_unpadded};	// @[LoopConv.scala:255:16, :293:29, :313:14]
  wire [17:0] _GEN_22 = {{2{icol[15]}}, icol};	// @[LoopConv.scala:270:17, :275:26, :293:29]
  wire [17:0] _GEN_23 = {12'h0, 6'h10 << req_downsample};	// @[LoopConv.scala:255:16, :286:54, :290:46, :293:37]
  wire [17:0] _I_T_5 = $signed(_GEN_21 - _GEN_22) > $signed(_GEN_23) ? _GEN_23 : _GEN_21 - _GEN_22;	// @[LoopConv.scala:293:{8,29,37,107}]
  wire [16:0] _I_T_9 = 17'h0 - _GEN_3;	// @[LoopConv.scala:276:{23,82}, :295:31]
  wire [16:0] _I_T_10 = $signed(_I_T_9) > 17'sh10 ? 17'h10 : _I_T_9;	// @[LoopConv.scala:276:23, :295:{26,31,39}]
  wire [16:0] _next_icol_T_1 = {1'h0, req_inner_bounds_rpad} + _GEN_0;	// @[LoopConv.scala:253:22, :255:16, :260:37]
  wire [18:0] _GEN_24 = {3'h0, req_derived_params_icols_unpadded};	// @[LoopConv.scala:255:16, :296:64, :317:18]
  wire [18:0] _I_T_17 = _GEN_24 + {2'h0, _next_icol_T_1 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :296:64, :313:14]
  wire [19:0] _GEN_25 = {{4{icol[15]}}, icol};	// @[LoopConv.scala:270:17, :275:26, :296:88]
  wire [18:0] _I_T_24 = _GEN_24 + {2'h0, _next_icol_T_1 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :296:{64,146}, :313:14]
  wire [19:0] I = _I_T_6 ? {{3{_I_T_10[16]}}, _I_T_10} : $signed(_GEN_3) >= $signed(_I_T_20) ? ($signed({_I_T_17[18], _I_T_17} - _GEN_25) > 20'sh10 ? 20'h10 : {_I_T_24[18], _I_T_24} - _GEN_25) : {{2{_I_T_5[17]}}, _I_T_5};	// @[LoopConv.scala:276:{68,82,100}, :293:8, :295:26, :296:{13,43,64,88,96,146,170}, Mux.scala:101:16]
  wire [17:0] _GEN_26 = {2'h0, req_inner_bounds_batches};	// @[LoopConv.scala:255:16, :300:22, :313:14]
  wire [17:0] _GEN_27 = {{2{b[15]}}, b};	// @[LoopConv.scala:268:14, :281:106, :300:22]
  wire [17:0] _GEN_28 = {2'h0, _GEN};	// @[LoopConv.scala:265:29, :300:27, :313:14]
  wire [17:0] _GEN_29 = {2'h0, req_derived_params_ichs};	// @[LoopConv.scala:255:16, :301:19, :313:14]
  wire [17:0] _GEN_30 = {{2{ich[15]}}, ich};	// @[LoopConv.scala:271:16, :281:54, :301:19]
  wire        _io_idle_T = state == 2'h0;	// @[LoopConv.scala:253:22, :313:14, :335:25]
  wire        _io_req_ready_output = _io_idle_T & ~_command_p_io_busy;	// @[LoopConv.scala:310:25, :335:{25,34,37}]
  wire        _command_p_io_in_valid_T_4 = (|state) & ~io_wait_for_prev_loop & (|req_dram_addr);	// @[LoopConv.scala:253:22, :255:16, :339:{34,46,69,87}]
  wire        _T_3 = state == 2'h1;	// @[LoopConv.scala:253:22, :281:112, :340:41]
  wire        _T = _command_p_io_out_bits_cmd_inst_funct == 7'h2;	// @[LoopConv.scala:310:25, :330:23, :349:46]
  wire [19:0] _mvin_cmd_rs2_num_rows_T = $signed($signed(_command_p_io_out_bits_I) >>> req_downsample);	// @[LoopConv.scala:255:16, :310:25, :354:35]
  wire [18:0] _state_T_10 = 19'h0 - {2'h0, _state_T_7 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :276:23, :313:14, :354:35, :383:98]
  wire [16:0] _GEN_31 = {16'h0, io_req_bits_input_dilated};	// @[LoopConv.scala:392:7, :393:52]
  wire [16:0] _irow_T_1 = {1'h0, io_req_bits_inner_bounds_upad} + _GEN_31 >> _GEN_31;	// @[LoopConv.scala:253:22, :393:{52,82}]
  wire [16:0] _icol_T_1 = {1'h0, io_req_bits_inner_bounds_lpad} + _GEN_31 >> _GEN_31;	// @[LoopConv.scala:253:22, :393:52, :394:{52,82}]
  wire [16:0] max_chs_per_mvin = {1'h0, _GEN};	// @[LoopConv.scala:253:22, :265:29]
  wire        _T_1 = req_dram_addr == 40'h0;	// @[LoopConv.scala:255:16, :339:87, :361:22]
  wire        _T_2 = _command_p_io_in_ready & _command_p_io_in_valid_T_4;	// @[Decoupled.scala:51:35, LoopConv.scala:310:25, :339:69]
  wire [16:0] b_it = req_trans_input_3120 ? max_chs_per_mvin : 17'h1;	// @[LoopConv.scala:255:16, :265:29, :367:21]
  wire [16:0] ich_it = req_trans_input_3120 ? 17'h1 : max_chs_per_mvin;	// @[LoopConv.scala:255:16, :265:29, :367:21, :368:23]
  wire [16:0] _next_ich_max_T_1 = {1'h0, req_derived_params_ichs} - 17'h1;	// @[LoopConv.scala:253:22, :255:16, :301:19, Util.scala:48:28]
  wire [17:0] next_ich = $signed({{3{ich[15]}}, ich} + {2'h0, ich_it}) > $signed({{2{_next_ich_max_T_1[16]}}, _next_ich_max_T_1}) ? 18'h0 : _GEN_30 + {1'h0, ich_it};	// @[LoopConv.scala:253:22, :271:16, :281:54, :301:19, :313:14, :368:23, Mux.scala:101:16, Util.scala:48:28, :50:15, :52:{11,22}]
  wire [18:0] _next_icol_T_8 = 19'h0 - {2'h0, _state_T_7 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :276:23, :313:14, :354:35, :371:94]
  wire [18:0] _next_icol_max_T_1 = {1'h0, _GEN_21 + {1'h0, _next_icol_T_1 >> _GEN_0}} - 19'h1;	// @[LoopConv.scala:253:22, :260:{37,59}, :293:29, :371:65, Util.scala:48:28]
  wire [20:0] _GEN_32 = {{5{icol[15]}}, icol};	// @[LoopConv.scala:270:17, :275:26, Util.scala:50:15]
  wire [20:0] next_icol = (|next_ich) ? _GEN_32 : $signed({{6{icol[15]}}, icol} + {2'h0, I}) > $signed({{3{_next_icol_max_T_1[18]}}, _next_icol_max_T_1}) ? {{2{_next_icol_T_8[18]}}, _next_icol_T_8} : _GEN_32 + {1'h0, I};	// @[LoopConv.scala:253:22, :270:17, :275:26, :276:23, :313:14, :371:94, :372:18, Mux.scala:101:16, Util.scala:48:28, :50:15, :52:{11,22}]
  wire [1:0]  _next_irow_T = 2'h1 << req_downsample;	// @[LoopConv.scala:255:16, :281:112, :373:43]
  wire [18:0] _next_irow_T_12 = 19'h0 - {2'h0, _state_T_7 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :276:23, :313:14, :354:35, :374:26]
  wire [15:0] _next_irow_T_18 = irow + {14'h0, _next_irow_T};	// @[LoopConv.scala:269:17, :373:43, Util.scala:50:15]
  wire [16:0] _next_irow_T_22 = _GEN_2 + {15'h0, _next_irow_T};	// @[LoopConv.scala:276:37, :286:90, :373:43, Util.scala:50:15, :52:11]
  wire [18:0] next_irow = next_icol == {{2{_next_irow_T_12[18]}}, _next_irow_T_12} & ~(|next_ich) ? ($signed({{2{_next_irow_T_22[16]}}, _next_irow_T_22}) > $signed({1'h0, {2'h0, req_derived_params_irows_unpadded} + {1'h0, {1'h0, req_inner_bounds_dpad} + _GEN_0 >> _GEN_0}} - 19'h1) ? 19'h0 - {2'h0, _state_T_1 >> _GEN_0} : {{3{_next_irow_T_18[15]}}, _next_irow_T_18}) : _GEN_1;	// @[LoopConv.scala:253:22, :255:16, :260:{37,59}, :274:26, :276:23, :313:14, :354:35, :372:18, :373:{78,107}, :374:{19,26,49}, Mux.scala:101:16, Util.scala:48:28, :50:15, :52:{11,22}]
  wire [18:0] _next_b_T_9 = 19'h0 - {2'h0, _state_T_7 >> _GEN_0};	// @[LoopConv.scala:260:{37,59}, :276:23, :313:14, :354:35, :376:69]
  wire [16:0] _next_b_max_T_1 = {1'h0, req_inner_bounds_batches} - 17'h1;	// @[LoopConv.scala:253:22, :255:16, :300:22, Util.scala:48:28]
  wire [17:0] next_b = next_irow == 19'h0 - {2'h0, _state_T_1 >> _GEN_0} & next_icol == {{2{_next_b_T_9[18]}}, _next_b_T_9} & ~(|next_ich) ? ($signed({{3{b[15]}}, b} + {2'h0, b_it}) > $signed({{2{_next_b_max_T_1[16]}}, _next_b_max_T_1}) ? 18'h0 : _GEN_27 + {1'h0, b_it}) : _GEN_27;	// @[LoopConv.scala:253:22, :260:{37,59}, :268:14, :276:23, :281:106, :300:22, :313:14, :354:35, :367:21, :372:18, :376:{19,26,62,69,92}, Mux.scala:101:16, Util.scala:48:28, :50:15, :52:{11,22}]
  wire        _T_4 = _io_req_ready_output & io_req_valid;	// @[Decoupled.scala:51:35, LoopConv.scala:335:34]
  always @(posedge clock) begin
    if (reset)
      state <= 2'h0;	// @[LoopConv.scala:253:22, :313:14]
    else if (_T_4)	// @[Decoupled.scala:51:35]
      state <= 2'h1;	// @[LoopConv.scala:253:22, :281:112]
    else if (_T_1)	// @[LoopConv.scala:361:22]
      state <= 2'h0;	// @[LoopConv.scala:253:22, :313:14]
    else if (_T_2) begin	// @[Decoupled.scala:51:35]
      if (_T_3)	// @[LoopConv.scala:340:41]
        state <= 2'h2;	// @[LoopConv.scala:253:22, :330:23]
      else	// @[LoopConv.scala:340:41]
        state <= {~(next_b == 18'h0 & next_irow == 19'h0 - {2'h0, _state_T_1 >> _GEN_0} & next_icol == {{2{_state_T_10[18]}}, _state_T_10} & ~(|next_ich)), 1'h0};	// @[LoopConv.scala:253:22, :260:{37,59}, :276:23, :313:14, :354:35, :372:18, :383:{19,27,48,55,91,98,121}, Mux.scala:101:16]
    end
    if (_T_4) begin	// @[Decoupled.scala:51:35]
      req_outer_bounds_batch_size <= io_req_bits_outer_bounds_batch_size;	// @[LoopConv.scala:255:16]
      req_outer_bounds_in_dim <= io_req_bits_outer_bounds_in_dim;	// @[LoopConv.scala:255:16]
      req_outer_bounds_in_stride <= io_req_bits_outer_bounds_in_stride;	// @[LoopConv.scala:255:16]
      req_inner_bounds_batches <= io_req_bits_inner_bounds_batches;	// @[LoopConv.scala:255:16]
      req_inner_bounds_lpad <= io_req_bits_inner_bounds_lpad;	// @[LoopConv.scala:255:16]
      req_inner_bounds_rpad <= io_req_bits_inner_bounds_rpad;	// @[LoopConv.scala:255:16]
      req_inner_bounds_upad <= io_req_bits_inner_bounds_upad;	// @[LoopConv.scala:255:16]
      req_inner_bounds_dpad <= io_req_bits_inner_bounds_dpad;	// @[LoopConv.scala:255:16]
      req_derived_params_irows <= io_req_bits_derived_params_irows;	// @[LoopConv.scala:255:16]
      req_derived_params_icols <= io_req_bits_derived_params_icols;	// @[LoopConv.scala:255:16]
      req_derived_params_irows_unpadded <= io_req_bits_derived_params_irows_unpadded;	// @[LoopConv.scala:255:16]
      req_derived_params_icols_unpadded <= io_req_bits_derived_params_icols_unpadded;	// @[LoopConv.scala:255:16]
      req_derived_params_ichs <= io_req_bits_derived_params_ichs;	// @[LoopConv.scala:255:16]
      req_derived_params_input_spad_stride <= io_req_bits_derived_params_input_spad_stride;	// @[LoopConv.scala:255:16]
      req_addr_start <= io_req_bits_addr_start;	// @[LoopConv.scala:255:16]
      req_dram_addr <= io_req_bits_dram_addr;	// @[LoopConv.scala:255:16]
      req_downsample <= io_req_bits_downsample;	// @[LoopConv.scala:255:16]
      req_max_pixels_per_row <= io_req_bits_max_pixels_per_row;	// @[LoopConv.scala:255:16]
      req_input_dilated <= io_req_bits_input_dilated;	// @[LoopConv.scala:255:16]
      req_trans_input_3120 <= io_req_bits_trans_input_3120;	// @[LoopConv.scala:255:16]
      req_loop_id <= io_req_bits_loop_id;	// @[LoopConv.scala:255:16]
      b <= 16'h0;	// @[LoopConv.scala:268:14, :392:7]
      irow <= 16'h0 - _irow_T_1[15:0];	// @[LoopConv.scala:269:17, :276:23, :392:7, :393:{17,82}]
      icol <= 16'h0 - _icol_T_1[15:0];	// @[LoopConv.scala:270:17, :276:23, :392:7, :394:{17,82}]
      ich <= 16'h0;	// @[LoopConv.scala:271:16, :392:7]
    end
    else if (_T_1 | ~_T_2 | _T_3) begin	// @[Decoupled.scala:51:35, LoopConv.scala:271:16, :340:41, :361:{22,30}, :363:36, :364:29]
    end
    else begin	// @[LoopConv.scala:271:16, :361:30, :363:36]
      b <= next_b[15:0];	// @[LoopConv.scala:268:14, :381:9, Mux.scala:101:16]
      irow <= next_irow[15:0];	// @[LoopConv.scala:269:17, :380:12, Mux.scala:101:16]
      icol <= next_icol[15:0];	// @[LoopConv.scala:270:17, :379:12, Mux.scala:101:16]
      ich <= next_ich[15:0];	// @[LoopConv.scala:271:16, :378:11, Mux.scala:101:16]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
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
    logic [31:0] _RANDOM_9;
    logic [31:0] _RANDOM_10;
    logic [31:0] _RANDOM_11;
    logic [31:0] _RANDOM_12;
    logic [31:0] _RANDOM_13;
    logic [31:0] _RANDOM_14;
    logic [31:0] _RANDOM_15;
    logic [31:0] _RANDOM_16;
    logic [31:0] _RANDOM_17;
    logic [31:0] _RANDOM_18;
    logic [31:0] _RANDOM_19;
    logic [31:0] _RANDOM_20;
    logic [31:0] _RANDOM_21;
    logic [31:0] _RANDOM_22;
    logic [31:0] _RANDOM_23;
    logic [31:0] _RANDOM_24;
    logic [31:0] _RANDOM_25;
    logic [31:0] _RANDOM_26;
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
        _RANDOM_9 = `RANDOM;
        _RANDOM_10 = `RANDOM;
        _RANDOM_11 = `RANDOM;
        _RANDOM_12 = `RANDOM;
        _RANDOM_13 = `RANDOM;
        _RANDOM_14 = `RANDOM;
        _RANDOM_15 = `RANDOM;
        _RANDOM_16 = `RANDOM;
        _RANDOM_17 = `RANDOM;
        _RANDOM_18 = `RANDOM;
        _RANDOM_19 = `RANDOM;
        _RANDOM_20 = `RANDOM;
        _RANDOM_21 = `RANDOM;
        _RANDOM_22 = `RANDOM;
        _RANDOM_23 = `RANDOM;
        _RANDOM_24 = `RANDOM;
        _RANDOM_25 = `RANDOM;
        _RANDOM_26 = `RANDOM;
        state = _RANDOM_0[1:0];	// @[LoopConv.scala:253:22]
        req_outer_bounds_batch_size = _RANDOM_0[17:2];	// @[LoopConv.scala:253:22, :255:16]
        req_outer_bounds_in_dim = {_RANDOM_0[31:18], _RANDOM_1[1:0]};	// @[LoopConv.scala:253:22, :255:16]
        req_outer_bounds_in_stride = _RANDOM_3[17:2];	// @[LoopConv.scala:255:16]
        req_inner_bounds_batches = _RANDOM_8[17:2];	// @[LoopConv.scala:255:16]
        req_inner_bounds_lpad = {_RANDOM_11[31:18], _RANDOM_12[1:0]};	// @[LoopConv.scala:255:16]
        req_inner_bounds_rpad = _RANDOM_12[17:2];	// @[LoopConv.scala:255:16]
        req_inner_bounds_upad = {_RANDOM_12[31:18], _RANDOM_13[1:0]};	// @[LoopConv.scala:255:16]
        req_inner_bounds_dpad = _RANDOM_13[17:2];	// @[LoopConv.scala:255:16]
        req_derived_params_irows = _RANDOM_17[17:2];	// @[LoopConv.scala:255:16]
        req_derived_params_icols = {_RANDOM_17[31:18], _RANDOM_18[1:0]};	// @[LoopConv.scala:255:16]
        req_derived_params_irows_unpadded = _RANDOM_18[17:2];	// @[LoopConv.scala:255:16]
        req_derived_params_icols_unpadded = {_RANDOM_18[31:18], _RANDOM_19[1:0]};	// @[LoopConv.scala:255:16]
        req_derived_params_ichs = _RANDOM_19[17:2];	// @[LoopConv.scala:255:16]
        req_derived_params_input_spad_stride = _RANDOM_21[17:2];	// @[LoopConv.scala:255:16]
        req_addr_start = _RANDOM_22[15:2];	// @[LoopConv.scala:255:16]
        req_dram_addr = {_RANDOM_22[31:16], _RANDOM_23[23:0]};	// @[LoopConv.scala:255:16]
        req_downsample = _RANDOM_23[24];	// @[LoopConv.scala:255:16]
        req_max_pixels_per_row = {_RANDOM_23[31:25], _RANDOM_24[8:0]};	// @[LoopConv.scala:255:16]
        req_input_dilated = _RANDOM_24[9];	// @[LoopConv.scala:255:16]
        req_trans_input_3120 = _RANDOM_24[10];	// @[LoopConv.scala:255:16]
        req_loop_id = _RANDOM_24[11];	// @[LoopConv.scala:255:16]
        b = _RANDOM_24[27:12];	// @[LoopConv.scala:255:16, :268:14]
        irow = {_RANDOM_24[31:28], _RANDOM_25[11:0]};	// @[LoopConv.scala:255:16, :269:17]
        icol = _RANDOM_25[27:12];	// @[LoopConv.scala:269:17, :270:17]
        ich = {_RANDOM_25[31:28], _RANDOM_26[11:0]};	// @[LoopConv.scala:269:17, :271:16]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Pipeline_11 command_p (	// @[LoopConv.scala:310:25]
    .clock                       (clock),
    .reset                       (reset),
    .io_in_valid                 (_command_p_io_in_valid_T_4),	// @[LoopConv.scala:339:69]
    .io_in_bits_cmd_inst_funct   ({5'h0, ~_T_3, 1'h0}),	// @[LoopConv.scala:253:22, :290:46, :340:{34,41}]
    .io_in_bits_cmd_rs1          (_T_3 ? {34'hFE000000, req_derived_params_input_spad_stride[13:0], 3'h0, req_max_pixels_per_row[4:0], 8'h1} : 64'h0),	// @[LoopConv.scala:255:16, :317:18, :319:25, :320:32, :324:36, :331:16, :340:{34,41}]
    .io_in_bits_cmd_rs2          (_T_3 ? {46'h0, {2'h0, req_trans_input_3120 ? req_outer_bounds_batch_size : req_outer_bounds_in_stride} << req_downsample} : 64'h0),	// @[LoopConv.scala:255:16, :278:24, :313:14, :326:{18,33}, :331:16, :340:{34,41}]
    .io_in_bits_dram_addr        ($signed(irow) < 16'sh0 | $signed(_GEN_2) >= $signed({1'h0, req_derived_params_irows_unpadded}) | _I_T_6 | $signed(_GEN_3) >= $signed(_I_T_20) ? 68'h0 : {28'h0, req_dram_addr} + ((req_trans_input_3120 ? {_dram_offset_T_18[66], _dram_offset_T_18} : {_dram_offset_T_42[66], _dram_offset_T_42}) & 68'hFFFFFFFF)),	// @[LoopConv.scala:253:22, :255:16, :269:17, :276:{23,37,55,68,74,82,100}, :281:{24,106,112}, :282:{64,72}, :283:{22,52}, :392:7, :1550:17]
    .io_in_bits_spad_addr        (req_trans_input_3120 ? {_spad_addr_T_24[49], _spad_addr_T_24} + _GEN_20 : {_spad_addr_T_51[49], _spad_addr_T_51} + _GEN_20),	// @[LoopConv.scala:255:16, :284:22, :286:{137,200}, :287:{137,200}]
    .io_in_bits_I                (I),	// @[Mux.scala:101:16]
    .io_in_bits_K                (req_trans_input_3120 ? ($signed(_GEN_26 - _GEN_27) > $signed(_GEN_28) ? _GEN_28 : _GEN_26 - _GEN_27) : $signed(_GEN_29 - _GEN_30) > $signed(_GEN_28) ? _GEN_28 : _GEN_29 - _GEN_30),	// @[LoopConv.scala:255:16, :299:14, :300:{8,22,27,78}, :301:{8,19,26,74}]
    .io_out_ready                (io_cmd_ready & ~io_rob_overloaded),	// @[LoopConv.scala:346:{42,45}]
    .io_in_ready                 (_command_p_io_in_ready),
    .io_out_valid                (_command_p_io_out_valid),
    .io_out_bits_cmd_inst_funct  (_command_p_io_out_bits_cmd_inst_funct),
    .io_out_bits_cmd_inst_rs2    (io_cmd_bits_inst_rs2),
    .io_out_bits_cmd_inst_rs1    (io_cmd_bits_inst_rs1),
    .io_out_bits_cmd_inst_xd     (io_cmd_bits_inst_xd),
    .io_out_bits_cmd_inst_xs1    (io_cmd_bits_inst_xs1),
    .io_out_bits_cmd_inst_xs2    (io_cmd_bits_inst_xs2),
    .io_out_bits_cmd_inst_rd     (io_cmd_bits_inst_rd),
    .io_out_bits_cmd_inst_opcode (io_cmd_bits_inst_opcode),
    .io_out_bits_cmd_rs1         (_command_p_io_out_bits_cmd_rs1),
    .io_out_bits_cmd_rs2         (_command_p_io_out_bits_cmd_rs2),
    .io_out_bits_dram_addr       (_command_p_io_out_bits_dram_addr),
    .io_out_bits_spad_addr       (_command_p_io_out_bits_spad_addr),
    .io_out_bits_I               (_command_p_io_out_bits_I),
    .io_out_bits_K               (_command_p_io_out_bits_K),
    .io_busy                     (_command_p_io_busy)
  );
  assign io_req_ready = _io_req_ready_output;	// @[LoopConv.scala:335:34]
  assign io_cmd_valid = _command_p_io_out_valid & ~io_rob_overloaded;	// @[LoopConv.scala:310:25, :346:45, :347:42]
  assign io_cmd_bits_inst_funct = _command_p_io_out_bits_cmd_inst_funct;	// @[LoopConv.scala:310:25]
  assign io_cmd_bits_rs1 = _T ? _command_p_io_out_bits_dram_addr[63:0] : _command_p_io_out_bits_cmd_rs1;	// @[LoopConv.scala:310:25, :348:15, :349:{46,60}, :351:21]
  assign io_cmd_bits_rs2 = _T ? {11'h0, _mvin_cmd_rs2_num_rows_T[4:0], 9'h0, _command_p_io_out_bits_K[6:0], 3'h0, _command_p_io_out_bits_spad_addr[28:26], 11'h0, _command_p_io_out_bits_spad_addr[14:0]} : _command_p_io_out_bits_cmd_rs2;	// @[LocalAddr.scala:108:37, LoopConv.scala:310:25, :317:18, :348:15, :349:{46,60}, :353:18, :354:{27,35}, :355:27, :357:{21,37}]
  assign io_idle = _io_idle_T & ~_command_p_io_busy;	// @[LoopConv.scala:310:25, :335:{25,37}, :336:29]
  assign io_loop_id = req_loop_id;	// @[LoopConv.scala:255:16]
endmodule

