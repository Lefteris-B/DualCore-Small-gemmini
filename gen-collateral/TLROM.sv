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

module TLROM(
  input         clock,
                reset,
                auto_in_a_valid,
  input  [2:0]  auto_in_a_bits_opcode,
                auto_in_a_bits_param,
  input  [1:0]  auto_in_a_bits_size,
  input  [10:0] auto_in_a_bits_source,
  input  [16:0] auto_in_a_bits_address,
  input  [7:0]  auto_in_a_bits_mask,
  input         auto_in_a_bits_corrupt,
                auto_in_d_ready,
  output        auto_in_a_ready,
                auto_in_d_valid,
  output [1:0]  auto_in_d_bits_size,
  output [10:0] auto_in_d_bits_source,
  output [63:0] auto_in_d_bits_data
);

  wire [511:0][63:0] _GEN =
    '{64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h0,
      64'h73656D616E2D74,
      64'h757074756F2D6B63,
      64'h6F6C6300736C6C65,
      64'h632D6B636F6C6323,
      64'h73747075727265,
      64'h746E6900746E6572,
      64'h61702D7470757272,
      64'h65746E6900736B63,
      64'h6F6C63007665646E,
      64'h2C76637369720079,
      64'h7469726F6972702D,
      64'h78616D2C76637369,
      64'h7200686361747461,
      64'h2D67756265640064,
      64'h65646E657478652D,
      64'h7374707572726574,
      64'h6E6900746E756F63,
      64'h2D7268736D2C6576,
      64'h6966697300646569,
      64'h66696E752D656863,
      64'h6163006C6576656C,
      64'h2D65686361630073,
      64'h656D616E2D676572,
      64'h7365676E617200,
      64'h656C646E61687000,
      64'h72656C6C6F72746E,
      64'h6F632D7470757272,
      64'h65746E6900736C6C,
      64'h65632D7470757272,
      64'h65746E6923007469,
      64'h6C70732D626C7400,
      64'h7375746174730073,
      64'h6E6F69676572706D,
      64'h702C766373697200,
      64'h79746972616C756E,
      64'h617267706D702C76,
      64'h6373697200617369,
      64'h2C76637369720067,
      64'h6572006568636163,
      64'h2D6C6576656C2D74,
      64'h78656E0065707974,
      64'h2D756D6D00657A69,
      64'h732D626C742D6900,
      64'h737465732D626C74,
      64'h2D6900657A69732D,
      64'h65686361632D6900,
      64'h737465732D656863,
      64'h61632D6900657A69,
      64'h732D6B636F6C622D,
      64'h65686361632D6900,
      64'h746E756F632D746E,
      64'h696F706B61657262,
      64'h2D636578652D6572,
      64'h6177647261680065,
      64'h7079745F65636976,
      64'h656400657A69732D,
      64'h626C742D64007374,
      64'h65732D626C742D64,
      64'h657A69732D6568,
      64'h6361632D64007374,
      64'h65732D6568636163,
      64'h2D6400657A69732D,
      64'h6B636F6C622D6568,
      64'h6361632D64007963,
      64'h6E6575716572662D,
      64'h6B636F6C63007963,
      64'h6E6575716572662D,
      64'h65736162656D6974,
      64'h687461702D7475,
      64'h6F64747300306C61,
      64'h69726573006C6564,
      64'h6F6D00656C626974,
      64'h61706D6F6300736C,
      64'h6C65632D657A6973,
      64'h2300736C6C65632D,
      64'h7373657264646123,
      64'h900000002000000,
      64'h200000002000000,
      64'h6C6F72746E6F63,
      64'hA801000008000000,
      64'h300000000100000,
      64'h11002E010000,
      64'h800000003000000,
      64'h30303030,
      64'h3131407265747465,
      64'h732D74657365722D,
      64'h656C697401000000,
      64'h200000004000000,
      64'h9901000004000000,
      64'h3000000006B636F,
      64'h6C632D6465786966,
      64'h1B0000000C000000,
      64'h300000000000000,
      64'h6B636F6C635F7375,
      64'h62705F6D65747379,
      64'h736275734D020000,
      64'h1500000003000000,
      64'h65CD1D53000000,
      64'h400000003000000,
      64'h40020000,
      64'h400000003000000,
      64'h6B636F6C,
      64'h635F737562705F6D,
      64'h6574737973627573,
      64'h100000002000000,
      64'h6B636F6C632D64,
      64'h657869661B000000,
      64'hC00000003000000,
      64'h6B636F6C,
      64'h635F7375626D5F6D,
      64'h6574737973627573,
      64'h4D02000015000000,
      64'h30000000065CD1D,
      64'h5300000004000000,
      64'h300000000000000,
      64'h4002000004000000,
      64'h300000000000000,
      64'h6B636F6C635F7375,
      64'h626D5F6D65747379,
      64'h7362757301000000,
      64'h2000000006C6F72,
      64'h746E6F63A8010000,
      64'h800000003000000,
      64'h10000000000054,
      64'h2E01000008000000,
      64'h300000001000000,
      64'h3502000004000000,
      64'h300000005000000,
      64'h2402000004000000,
      64'h300000000000000,
      64'h30747261752C6576,
      64'h696669731B000000,
      64'hD00000003000000,
      64'h40000001D020000,
      64'h400000003000000,
      64'h30303030303034,
      64'h35406C6169726573,
      64'h100000002000000,
      64'h6D656DA8010000,
      64'h400000003000000,
      64'h10000000100,
      64'h2E01000008000000,
      64'h300000000306D6F,
      64'h722C657669666973,
      64'h1B0000000C000000,
      64'h300000000000030,
      64'h30303031406D6F72,
      64'h100000002000000,
      64'h500000099010000,
      64'h400000003000000,
      64'h100000012020000,
      64'h400000003000000,
      64'h1000000FF010000,
      64'h400000003000000,
      64'h6C6F72746E6F63,
      64'hA801000008000000,
      64'h300000000000004,
      64'hC2E010000,
      64'h800000003000000,
      64'h900000003000000,
      64'hB00000003000000,
      64'hDE01000010000000,
      64'h300000084010000,
      64'h3000000,
      64'h3063696C702C76,
      64'h637369721B000000,
      64'hC00000003000000,
      64'h100000073010000,
      64'h400000003000000,
      64'h30303030,
      64'h3030634072656C6C,
      64'h6F72746E6F632D74,
      64'h7075727265746E69,
      64'h100000002000000,
      64'h10000000300000,
      64'h2E01000008000000,
      64'h300000000000030,
      64'h726F7272652C6576,
      64'h696669731B000000,
      64'hE00000003000000,
      64'h3030303340,
      64'h6563697665642D72,
      64'h6F72726501000000,
      64'h2000000006C6F72,
      64'h746E6F63A8010000,
      64'h800000003000000,
      64'h10000000000000,
      64'h2E01000008000000,
      64'h3000000FFFF0000,
      64'h3000000DE010000,
      64'h800000003000000,
      64'h6761746A,
      64'hF201000005000000,
      64'h300000000000000,
      64'h3331302D67756265,
      64'h642C766373697200,
      64'h3331302D67756265,
      64'h642C657669666973,
      64'h1B00000021000000,
      64'h300000000003040,
      64'h72656C6C6F72746E,
      64'h6F632D6775626564,
      64'h100000002000000,
      64'h6C6F72746E6F63,
      64'hA801000008000000,
      64'h300000000100000,
      64'h10002E010000,
      64'h800000003000000,
      64'h303030303031,
      64'h4072657461672D6B,
      64'h636F6C6301000000,
      64'h2000000006C6F72,
      64'h746E6F63A8010000,
      64'h800000003000000,
      64'h10000000002,
      64'h2E01000008000000,
      64'h300000007000000,
      64'h300000003000000,
      64'h3000000DE010000,
      64'h1000000003000000,
      64'h30746E69,
      64'h6C632C7663736972,
      64'h1B0000000D000000,
      64'h300000000000030,
      64'h3030303030324074,
      64'h6E696C6301000000,
      64'h200000001000000,
      64'h9901000004000000,
      64'h30000000C000000,
      64'hCC01000004000000,
      64'h3000000006C6F72,
      64'h746E6F63A8010000,
      64'h800000003000000,
      64'h10000000000102,
      64'h2E01000008000000,
      64'h300000002000000,
      64'h1D01000004000000,
      64'h300000000000000,
      64'h6568636163003065,
      64'h6863616365766973,
      64'h756C636E692C6576,
      64'h696669731B000000,
      64'h1D00000003000000,
      64'hBE01000000000000,
      64'h300000000000800,
      64'h8500000004000000,
      64'h300000000040000,
      64'h7800000004000000,
      64'h300000002000000,
      64'hB201000004000000,
      64'h300000040000000,
      64'h6500000004000000,
      64'h300000000000000,
      64'h3030303031303240,
      64'h72656C6C6F72746E,
      64'h6F632D6568636163,
      64'h100000002000000,
      64'h6C6F72746E6F63,
      64'hA801000008000000,
      64'h300000000100000,
      64'h4000002E010000,
      64'h800000003000000,
      64'h3030303440,
      64'h6765722D73736572,
      64'h6464612D746F6F62,
      64'h1000000A1010000,
      64'h3000000,
      64'h7375622D656C70,
      64'h6D697300636F732D,
      64'h6472617970696863,
      64'h2C7261622D626375,
      64'h1B00000020000000,
      64'h300000001000000,
      64'hF00000004000000,
      64'h300000001000000,
      64'h4000000,
      64'h300000000636F73,
      64'h100000002000000,
      64'h200000099010000,
      64'h400000003000000,
      64'h1000000080,
      64'h2E01000008000000,
      64'h300000000007972,
      64'h6F6D656DA6000000,
      64'h700000003000000,
      64'h30303030303030,
      64'h384079726F6D656D,
      64'h100000002000000,
      64'h3066697468,
      64'h2C6263751B000000,
      64'hA00000003000000,
      64'h66697468,
      64'h100000002000000,
      64'h200000002000000,
      64'h300000099010000,
      64'h400000003000000,
      64'h8401000000000000,
      64'h300000000006374,
      64'h6E692D7570632C76,
      64'h637369721B000000,
      64'hF00000003000000,
      64'h100000073010000,
      64'h400000003000000,
      64'h72656C6C,
      64'h6F72746E6F632D74,
      64'h7075727265746E69,
      64'h100000069010000,
      64'h3000000,
      64'h40420F0040000000,
      64'h400000003000000,
      64'h79616B6F,
      64'h6201000005000000,
      64'h300000008000000,
      64'h5101000004000000,
      64'h300000004000000,
      64'h3C01000004000000,
      64'h300000000007465,
      64'h6B636F72785F6D70,
      64'h68697A5F6965636E,
      64'h6566697A5F727363,
      64'h697A636466616D69,
      64'h3436767232010000,
      64'h2700000003000000,
      64'h2E010000,
      64'h400000003000000,
      64'h10000001D010000,
      64'h400000003000000,
      64'h393376732C76,
      64'h6373697214010000,
      64'hB00000003000000,
      64'h2000000009010000,
      64'h400000003000000,
      64'h1000000FE000000,
      64'h400000003000000,
      64'h400000F1000000,
      64'h400000003000000,
      64'h40000000E4000000,
      64'h400000003000000,
      64'h40000000D1000000,
      64'h400000003000000,
      64'h1000000B2000000,
      64'h400000003000000,
      64'h757063A6000000,
      64'h400000003000000,
      64'h200000009B000000,
      64'h400000003000000,
      64'h100000090000000,
      64'h400000003000000,
      64'h40000083000000,
      64'h400000003000000,
      64'h4000000076000000,
      64'h400000003000000,
      64'h4000000063000000,
      64'h400000003000000,
      64'h76637369,
      64'h72003074656B636F,
      64'h722C657669666973,
      64'h1B00000015000000,
      64'h300000000000000,
      64'h5300000004000000,
      64'h300000000000030,
      64'h4075706301000000,
      64'h40420F0040000000,
      64'h400000003000000,
      64'hF000000,
      64'h400000003000000,
      64'h100000000000000,
      64'h400000003000000,
      64'h73757063,
      64'h100000002000000,
      64'h30303030,
      64'h30303435406C6169,
      64'h7265732F636F732F,
      64'h3400000015000000,
      64'h300000000006E65,
      64'h736F686301000000,
      64'h200000000000000,
      64'h3030303030303435,
      64'h406C61697265732F,
      64'h636F732F2C000000,
      64'h1500000003000000,
      64'h73657361696C61,
      64'h100000000000000,
      64'h6472617970696863,
      64'h2C7261622D626375,
      64'h2600000011000000,
      64'h300000000000000,
      64'h7665642D64726179,
      64'h706968632C726162,
      64'h2D6263751B000000,
      64'h1500000003000000,
      64'h10000000F000000,
      64'h400000003000000,
      64'h100000000000000,
      64'h400000003000000,
      64'h1000000,
      64'h0,
      64'h0,
      64'hA000060020000,
      64'h10000000,
      64'h1100000028000000,
      64'h380A000038000000,
      64'h980C0000EDFE0DD0,
      64'h1330200073,
      64'h3006307308000613,
      64'h185859300000597,
      64'hF140257334151073,
      64'h5350300004537,
      64'h5A02300B505B3,
      64'h251513FE029EE3,
      64'h5A283FC1FF06F,
      64'h0,
      64'hFFDFF06F,
      64'h1050007330052073,
      64'h3045107300800513,
      64'h3030107300028463,
      64'h12F2934122D293,
      64'h301022F330551073,
      64'hFC05051300000517,
      64'h0,
      64'h0,
      64'h6C0006F,
      64'hFE069AE3FFC62683,
      64'h46061300D62023,
      64'h10069300458613,
      64'h780006F00050463,
      64'hF1402573020005B7};	// @[BootROM.scala:53:47]
  TLMonitor_61 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (auto_in_d_ready),
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (auto_in_a_valid),
    .io_in_d_bits_size    (auto_in_a_bits_size),
    .io_in_d_bits_source  (auto_in_a_bits_source)
  );
  assign auto_in_a_ready = auto_in_d_ready;
  assign auto_in_d_valid = auto_in_a_valid;
  assign auto_in_d_bits_size = auto_in_a_bits_size;
  assign auto_in_d_bits_source = auto_in_a_bits_source;
  assign auto_in_d_bits_data = (|(auto_in_a_bits_address[15:12])) ? 64'h0 : _GEN[auto_in_a_bits_address[11:3]];	// @[BootROM.scala:46:22, :51:34, :52:64, :53:{47,53}]
endmodule

