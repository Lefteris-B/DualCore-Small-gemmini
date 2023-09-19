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

module TLError_1(
  input          clock,
                 reset,
                 auto_in_a_valid,
  input  [2:0]   auto_in_a_bits_opcode,
  input  [127:0] auto_in_a_bits_address,
  input          auto_in_d_ready,
  output         auto_in_a_ready,
                 auto_in_d_valid,
  output [2:0]   auto_in_d_bits_opcode,
  output [1:0]   auto_in_d_bits_size,
  output         auto_in_d_bits_denied,
                 auto_in_d_bits_corrupt
);

  wire            out_1_ready;	// @[Arbiter.scala:124:31]
  wire [2:0]      out_1_bits_opcode;	// @[Error.scala:35:21]
  wire [7:0][2:0] _GEN = '{3'h4, 3'h4, 3'h2, 3'h1, 3'h1, 3'h1, 3'h0, 3'h0};	// @[Error.scala:35:21]
  reg             idle;	// @[Error.scala:26:23]
  wire            in_a_ready = out_1_ready & idle;	// @[Arbiter.scala:124:31, Error.scala:26:23, :32:37]
  wire            winnerQual_1 = auto_in_a_valid & idle;	// @[Error.scala:26:23, :33:35]
  assign out_1_bits_opcode = _GEN[auto_in_a_bits_opcode];	// @[Error.scala:35:21]
  reg             beatsLeft;	// @[Arbiter.scala:88:30]
  reg             state_1;	// @[Arbiter.scala:117:26]
  wire            out_2_bits_denied = beatsLeft ? state_1 : winnerQual_1;	// @[Arbiter.scala:88:30, :117:26, :118:30, Error.scala:33:35]
  assign out_1_ready = auto_in_d_ready & (~beatsLeft | state_1);	// @[Arbiter.scala:88:30, :89:28, :117:26, :122:24, :124:31]
  wire            out_2_valid = (~beatsLeft | state_1) & winnerQual_1;	// @[Arbiter.scala:88:30, :117:26, :126:29, Error.scala:33:35]
  wire            out_2_bits_corrupt = out_2_bits_denied & out_1_bits_opcode[0];	// @[Arbiter.scala:118:30, Edges.scala:106:36, Error.scala:35:21, Mux.scala:27:73]
  wire [1:0]      out_2_bits_size = {out_2_bits_denied, 1'h0};	// @[Arbiter.scala:118:30, Mux.scala:27:73]
  wire [2:0]      out_2_bits_opcode = out_2_bits_denied ? out_1_bits_opcode : 3'h0;	// @[Arbiter.scala:118:30, Error.scala:35:21, Mux.scala:27:73]
  always @(posedge clock) begin
    if (reset) begin
      idle <= 1'h1;	// @[Error.scala:26:23, :31:12]
      beatsLeft <= 1'h0;	// @[Arbiter.scala:88:30]
      state_1 <= 1'h0;	// @[Arbiter.scala:117:26]
    end
    else begin
      idle <= ~(out_1_ready & winnerQual_1 & out_1_bits_opcode == 3'h4) & idle;	// @[Arbiter.scala:124:31, Bundles.scala:47:27, Error.scala:26:23, :33:35, :35:21, :52:{21,39,50,57}]
      beatsLeft <= ~(~beatsLeft & auto_in_d_ready) & beatsLeft - (auto_in_d_ready & out_2_valid);	// @[Arbiter.scala:88:30, :89:28, :90:24, :114:{23,52}, :126:29, ReadyValidCancel.scala:49:33]
      if (beatsLeft) begin	// @[Arbiter.scala:88:30]
      end
      else	// @[Arbiter.scala:88:30]
        state_1 <= winnerQual_1;	// @[Arbiter.scala:117:26, Error.scala:33:35]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        idle = _RANDOM_0[0];	// @[Error.scala:26:23]
        beatsLeft = _RANDOM_0[5];	// @[Arbiter.scala:88:30, Error.scala:26:23]
        state_1 = _RANDOM_0[7];	// @[Arbiter.scala:117:26, Error.scala:26:23]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLMonitor_57 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (in_a_ready),	// @[Error.scala:32:37]
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (out_2_valid),	// @[Arbiter.scala:126:29]
    .io_in_d_bits_opcode  (out_2_bits_opcode),	// @[Mux.scala:27:73]
    .io_in_d_bits_size    (out_2_bits_size),	// @[Mux.scala:27:73]
    .io_in_d_bits_denied  (out_2_bits_denied),	// @[Arbiter.scala:118:30]
    .io_in_d_bits_corrupt (out_2_bits_corrupt)	// @[Mux.scala:27:73]
  );
  assign auto_in_a_ready = in_a_ready;	// @[Error.scala:32:37]
  assign auto_in_d_valid = out_2_valid;	// @[Arbiter.scala:126:29]
  assign auto_in_d_bits_opcode = out_2_bits_opcode;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_size = out_2_bits_size;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_denied = out_2_bits_denied;	// @[Arbiter.scala:118:30]
  assign auto_in_d_bits_corrupt = out_2_bits_corrupt;	// @[Mux.scala:27:73]
endmodule

