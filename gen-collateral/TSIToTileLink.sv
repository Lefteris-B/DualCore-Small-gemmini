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

module TSIToTileLink(
  input         clock,
                reset,
                auto_out_a_ready,
                auto_out_d_valid,
  input  [63:0] auto_out_d_bits_data,
  input         io_tsi_in_valid,
  input  [31:0] io_tsi_in_bits,
  input         io_tsi_out_ready,
  output        auto_out_a_valid,
  output [2:0]  auto_out_a_bits_opcode,
  output [3:0]  auto_out_a_bits_size,
  output [31:0] auto_out_a_bits_address,
  output [7:0]  auto_out_a_bits_mask,
  output [63:0] auto_out_a_bits_data,
  output        auto_out_d_ready,
                io_tsi_in_ready,
                io_tsi_out_valid,
  output [31:0] io_tsi_out_bits
);

  reg  [31:0] cmd;	// @[TSIToTileLink.scala:47:16]
  reg  [63:0] addr;	// @[TSIToTileLink.scala:48:17]
  reg  [63:0] len;	// @[TSIToTileLink.scala:49:16]
  reg  [31:0] body_0;	// @[TSIToTileLink.scala:50:17]
  reg  [31:0] body_1;	// @[TSIToTileLink.scala:50:17]
  reg  [1:0]  bodyValid;	// @[TSIToTileLink.scala:51:22]
  reg         idx;	// @[TSIToTileLink.scala:52:16]
  reg  [3:0]  state;	// @[TSIToTileLink.scala:58:22]
  wire        _T = state == 4'h0;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_2 = state == 4'h1;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_5 = state == 4'h2;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_23 = state == 4'h6;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_19 = state == 4'h5;	// @[TSIToTileLink.scala:58:22, :62:29]
  wire [63:0] _GEN = {32'h0, addr[31:3] + 29'h1, 3'h0};	// @[Cat.scala:33:92, TSIToTileLink.scala:48:17, :65:22, :66:31, :69:28, :125:24]
  wire [65:0] len_size = {len + 64'h1, 2'h0};	// @[Cat.scala:33:92, TSIToTileLink.scala:49:16, :70:26]
  wire [65:0] _GEN_0 = {2'h0, _GEN - addr};	// @[Cat.scala:33:92, TSIToTileLink.scala:48:17, :69:28, :71:31]
  wire [65:0] raw_size = len_size < _GEN_0 ? len_size : _GEN_0;	// @[Cat.scala:33:92, TSIToTileLink.scala:71:{21,31}]
  wire [1:0]  rsize = raw_size == 66'h4 ? 2'h2 : raw_size == 66'h2 ? 2'h1 : raw_size == 66'h1 ? 2'h0 : 2'h3;	// @[Cat.scala:33:92, Mux.scala:81:{58,61}, TSIToTileLink.scala:71:21]
  wire        pow2size = {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, raw_size[0]} + {1'h0, raw_size[1]}} + {1'h0, {1'h0, raw_size[2]} + {1'h0, raw_size[3]}}} + {1'h0, {1'h0, {1'h0, raw_size[4]} + {1'h0, raw_size[5]}} + {1'h0, {1'h0, raw_size[6]} + {1'h0, raw_size[7]}}}} + {1'h0, {1'h0, {1'h0, {1'h0, raw_size[8]} + {1'h0, raw_size[9]}} + {1'h0, {1'h0, raw_size[10]} + {1'h0, raw_size[11]}}} + {1'h0, {1'h0, {1'h0, raw_size[12]} + {1'h0, raw_size[13]}} + {1'h0, {1'h0, raw_size[14]} + {1'h0, raw_size[15]}}}}} + {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, raw_size[16]} + {1'h0, raw_size[17]}} + {1'h0, {1'h0, raw_size[18]} + {1'h0, raw_size[19]}}} + {1'h0, {1'h0, {1'h0, raw_size[20]} + {1'h0, raw_size[21]}} + {1'h0, {1'h0, raw_size[22]} + {1'h0, raw_size[23]}}}} + {1'h0, {1'h0, {1'h0, {1'h0, raw_size[24]} + {1'h0, raw_size[25]}} + {1'h0, {1'h0, raw_size[26]} + {1'h0, raw_size[27]}}} + {1'h0, {1'h0, {1'h0, raw_size[28]} + {1'h0, raw_size[29]}} + {1'h0, {1'h0, raw_size[30]} + {1'h0, raw_size[31]} + {1'h0, raw_size[32]}}}}}} + {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, raw_size[33]} + {1'h0, raw_size[34]}} + {1'h0, {1'h0, raw_size[35]} + {1'h0, raw_size[36]}}} + {1'h0, {1'h0, {1'h0, raw_size[37]} + {1'h0, raw_size[38]}} + {1'h0, {1'h0, raw_size[39]} + {1'h0, raw_size[40]}}}} + {1'h0, {1'h0, {1'h0, {1'h0, raw_size[41]} + {1'h0, raw_size[42]}} + {1'h0, {1'h0, raw_size[43]} + {1'h0, raw_size[44]}}} + {1'h0, {1'h0, {1'h0, raw_size[45]} + {1'h0, raw_size[46]}} + {1'h0, {1'h0, raw_size[47]} + {1'h0, raw_size[48]}}}}} + {1'h0, {1'h0, {1'h0, {1'h0, {1'h0, raw_size[49]} + {1'h0, raw_size[50]}} + {1'h0, {1'h0, raw_size[51]} + {1'h0, raw_size[52]}}} + {1'h0, {1'h0, {1'h0, raw_size[53]} + {1'h0, raw_size[54]}} + {1'h0, {1'h0, raw_size[55]} + {1'h0, raw_size[56]}}}} + {1'h0, {1'h0, {1'h0, {1'h0, raw_size[57]} + {1'h0, raw_size[58]}} + {1'h0, {1'h0, raw_size[59]} + {1'h0, raw_size[60]}}} + {1'h0, {1'h0, {1'h0, raw_size[61]} + {1'h0, raw_size[62]}} + {1'h0, {1'h0, raw_size[63]} + {1'h0, raw_size[64]} + {1'h0, raw_size[65]}}}}}} == 7'h1;	// @[Bitwise.scala:51:90, :53:100, TSIToTileLink.scala:47:16, :71:21, :75:37]
  wire [2:0]  byteAddr = pow2size ? addr[2:0] : 3'h0;	// @[Cat.scala:33:92, TSIToTileLink.scala:48:17, :75:37, :76:{21,36}]
  wire        get_acquire_a_mask_size = rsize == 2'h2;	// @[Misc.scala:208:26, Mux.scala:81:{58,61}]
  wire        get_acquire_a_mask_acc = (&rsize) | get_acquire_a_mask_size & ~(byteAddr[2]);	// @[Misc.scala:205:21, :208:26, :209:26, :210:20, :214:{29,38}, Mux.scala:81:58, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_acc_1 = (&rsize) | get_acquire_a_mask_size & byteAddr[2];	// @[Misc.scala:205:21, :208:26, :209:26, :214:{29,38}, Mux.scala:81:58, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_size_1 = rsize == 2'h1;	// @[Misc.scala:208:26, Mux.scala:81:58]
  wire        get_acquire_a_mask_eq_2 = ~(byteAddr[2]) & ~(byteAddr[1]);	// @[Misc.scala:209:26, :210:20, :213:27, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_acc_2 = get_acquire_a_mask_acc | get_acquire_a_mask_size_1 & get_acquire_a_mask_eq_2;	// @[Misc.scala:208:26, :213:27, :214:{29,38}]
  wire        get_acquire_a_mask_eq_3 = ~(byteAddr[2]) & byteAddr[1];	// @[Misc.scala:209:26, :210:20, :213:27, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_acc_3 = get_acquire_a_mask_acc | get_acquire_a_mask_size_1 & get_acquire_a_mask_eq_3;	// @[Misc.scala:208:26, :213:27, :214:{29,38}]
  wire        get_acquire_a_mask_eq_4 = byteAddr[2] & ~(byteAddr[1]);	// @[Misc.scala:209:26, :210:20, :213:27, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_acc_4 = get_acquire_a_mask_acc_1 | get_acquire_a_mask_size_1 & get_acquire_a_mask_eq_4;	// @[Misc.scala:208:26, :213:27, :214:{29,38}]
  wire        get_acquire_a_mask_eq_5 = byteAddr[2] & byteAddr[1];	// @[Misc.scala:209:26, :213:27, TSIToTileLink.scala:76:21]
  wire        get_acquire_a_mask_acc_5 = get_acquire_a_mask_acc_1 | get_acquire_a_mask_size_1 & get_acquire_a_mask_eq_5;	// @[Misc.scala:208:26, :213:27, :214:{29,38}]
  wire        _T_28 = state == 4'h7;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_13 = state == 4'h3;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_30 = state == 4'h8;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_15 = state == 4'h4;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  wire        _T_6 = _T_5 & io_tsi_in_valid;	// @[TSIToTileLink.scala:117:25, package.scala:16:47]
  wire        _GEN_1 = _T_6 & idx;	// @[TSIToTileLink.scala:52:16, :117:25, :120:43]
  wire        _T_8 = cmd == 32'h1;	// @[TSIToTileLink.scala:47:16, :122:17]
  wire        _T_14 = _T_13 & auto_out_a_ready;	// @[TSIToTileLink.scala:133:30, package.scala:16:47]
  wire        _T_1 = _T & io_tsi_in_valid;	// @[TSIToTileLink.scala:100:25, package.scala:16:47]
  wire        _T_3 = _T_2 & io_tsi_in_valid;	// @[TSIToTileLink.scala:108:26, package.scala:16:47]
  wire [94:0] _GEN_2 = {63'h0, io_tsi_in_bits};	// @[Mux.scala:81:61, TSIToTileLink.scala:94:12]
  wire [94:0] _GEN_3 = {89'h0, idx, 5'h0};	// @[Cat.scala:33:92, TSIToTileLink.scala:52:16, :94:12]
  wire        _T_16 = _T_15 & auto_out_d_valid;	// @[TSIToTileLink.scala:137:31, package.scala:16:47]
  wire        _T_20 = _T_19 & io_tsi_out_ready;	// @[TSIToTileLink.scala:62:29, :144:31]
  wire        _T_24 = _T_23 & io_tsi_in_valid;	// @[TSIToTileLink.scala:151:32, package.scala:16:47]
  wire        _T_27 = idx | ~(|len);	// @[TSIToTileLink.scala:49:16, :52:16, :147:15, :154:{42,49}]
  wire        _GEN_4 = ~_T_24 | _T_27;	// @[TSIToTileLink.scala:144:52, :151:{32,52}, :154:{42,58}]
  wire        _T_31 = _T_30 & auto_out_d_valid;	// @[TSIToTileLink.scala:166:31, package.scala:16:47]
  wire        _GEN_5 = _T_31 & (|len);	// @[TSIToTileLink.scala:49:16, :108:46, :137:47, :140:10, :147:15, :166:{31,47}, :167:24, :170:12]
  wire [94:0] _addr_T_2 = _GEN_2 << _GEN_3;	// @[TSIToTileLink.scala:94:12]
  wire [94:0] _len_T_2 = _GEN_2 << _GEN_3;	// @[TSIToTileLink.scala:94:12]
  wire        _GEN_6 = _T_3 & idx;	// @[TSIToTileLink.scala:52:16, :100:45, :108:{26,46}, :111:43, :113:13]
  always @(posedge clock) begin
    if (_T_1)	// @[TSIToTileLink.scala:100:25]
      cmd <= io_tsi_in_bits;	// @[TSIToTileLink.scala:47:16]
    if (_GEN_5 | _T_16)	// @[TSIToTileLink.scala:108:46, :137:{31,47}, :140:10, :166:47, :167:24, :170:12]
      addr <= _GEN;	// @[TSIToTileLink.scala:48:17, :69:28]
    else if (_T_3)	// @[TSIToTileLink.scala:108:26]
      addr <= addr | _addr_T_2[63:0];	// @[TSIToTileLink.scala:48:17, :94:12, :109:18]
    else if (_T_1)	// @[TSIToTileLink.scala:100:25]
      addr <= 64'h0;	// @[Bundles.scala:259:74, TSIToTileLink.scala:48:17]
    if (_GEN_5) begin	// @[TSIToTileLink.scala:108:46, :137:47, :140:10, :166:47, :167:24, :170:12]
      len <= len - 64'h1;	// @[TSIToTileLink.scala:49:16, :171:18]
      bodyValid <= 2'h0;	// @[Cat.scala:33:92, TSIToTileLink.scala:51:22]
    end
    else begin	// @[TSIToTileLink.scala:108:46, :137:47, :140:10, :166:47, :167:24, :170:12]
      if (_GEN_4) begin	// @[TSIToTileLink.scala:144:52, :151:52, :154:58]
        if (_T_20)	// @[TSIToTileLink.scala:144:31]
          len <= len - 64'h1;	// @[TSIToTileLink.scala:49:16, :146:16]
        else if (_T_6)	// @[TSIToTileLink.scala:117:25]
          len <= len | _len_T_2[63:0];	// @[TSIToTileLink.scala:49:16, :94:12, :118:16]
        else if (_T_1)	// @[TSIToTileLink.scala:100:25]
          len <= 64'h0;	// @[Bundles.scala:259:74, TSIToTileLink.scala:49:16]
      end
      else	// @[TSIToTileLink.scala:144:52, :151:52, :154:58]
        len <= len - 64'h1;	// @[TSIToTileLink.scala:49:16, :158:18]
      if (_T_24)	// @[TSIToTileLink.scala:151:32]
        bodyValid <= bodyValid | 2'h1 << idx;	// @[Mux.scala:81:58, OneHot.scala:57:35, TSIToTileLink.scala:51:22, :52:16, :153:28]
      else if (_T_6 & idx & _T_8)	// @[TSIToTileLink.scala:51:22, :52:16, :117:{25,45}, :120:43, :122:{17,32}, :123:19]
        bodyValid <= 2'h0;	// @[Cat.scala:33:92, TSIToTileLink.scala:51:22]
    end
    if (_T_24 & ~idx)	// @[TSIToTileLink.scala:52:16, :137:47, :151:{32,52}, :152:15]
      body_0 <= io_tsi_in_bits;	// @[TSIToTileLink.scala:50:17]
    else if (_T_16)	// @[TSIToTileLink.scala:137:31]
      body_0 <= auto_out_d_bits_data[31:0];	// @[TSIToTileLink.scala:50:17, :138:37]
    if (_T_24 & idx)	// @[TSIToTileLink.scala:52:16, :137:47, :151:{32,52}, :152:15]
      body_1 <= io_tsi_in_bits;	// @[TSIToTileLink.scala:50:17]
    else if (_T_16)	// @[TSIToTileLink.scala:137:31]
      body_1 <= auto_out_d_bits_data[63:32];	// @[TSIToTileLink.scala:50:17, :138:37]
    idx <= (~_T_31 | ~(|len)) & (_GEN_4 ? (_T_20 ? idx - 1'h1 : _T_16 ? addr[2] : _T_6 ? (idx ? addr[2] : idx - 1'h1) : _T_3 ? ~idx & idx - 1'h1 : ~_T_1 & idx) : idx - 1'h1);	// @[TSIToTileLink.scala:48:17, :49:16, :52:16, :98:33, :100:{25,45}, :102:9, :108:{26,46}, :110:{9,16}, :111:43, :112:11, :117:{25,45}, :119:{9,16}, :120:43, :121:11, :137:{31,47}, :139:9, :144:{31,52}, :145:{9,16}, :147:15, :151:52, :154:58, :157:18, :166:{31,47}, :167:{15,24}]
    if (reset)
      state <= 4'h0;	// @[TSIToTileLink.scala:58:22]
    else if (_T_31) begin	// @[TSIToTileLink.scala:166:31]
      if (|len)	// @[TSIToTileLink.scala:49:16, :147:15]
        state <= 4'h6;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
      else	// @[TSIToTileLink.scala:147:15]
        state <= 4'h0;	// @[TSIToTileLink.scala:58:22]
    end
    else if (_T_28 & auto_out_a_ready)	// @[TSIToTileLink.scala:162:32, package.scala:16:47]
      state <= 4'h8;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
    else if (_T_24 & _T_27)	// @[TSIToTileLink.scala:144:52, :151:{32,52}, :154:{42,58}, :155:13]
      state <= 4'h7;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
    else if (_T_20) begin	// @[TSIToTileLink.scala:144:31]
      if (|len) begin	// @[TSIToTileLink.scala:49:16, :147:15]
        if (idx)	// @[TSIToTileLink.scala:52:16]
          state <= 4'h3;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
        else if (_T_16)	// @[TSIToTileLink.scala:137:31]
          state <= 4'h5;	// @[TSIToTileLink.scala:58:22, :62:29]
        else if (_T_14)	// @[TSIToTileLink.scala:133:30]
          state <= 4'h4;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
        else if (_GEN_1) begin	// @[TSIToTileLink.scala:120:43]
          if (_T_8)	// @[TSIToTileLink.scala:122:17]
            state <= 4'h6;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
          else if (|cmd) begin	// @[TSIToTileLink.scala:47:16, :125:24]
            if (_GEN_6)	// @[TSIToTileLink.scala:100:45, :108:46, :111:43, :113:13]
              state <= 4'h2;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
            else if (_T_1)	// @[TSIToTileLink.scala:100:25]
              state <= 4'h1;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
          end
          else	// @[TSIToTileLink.scala:125:24]
            state <= 4'h3;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
        end
        else if (_GEN_6)	// @[TSIToTileLink.scala:100:45, :108:46, :111:43, :113:13]
          state <= 4'h2;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
        else if (_T_1)	// @[TSIToTileLink.scala:100:25]
          state <= 4'h1;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
      end
      else	// @[TSIToTileLink.scala:147:15]
        state <= 4'h0;	// @[TSIToTileLink.scala:58:22]
    end
    else if (_T_16)	// @[TSIToTileLink.scala:137:31]
      state <= 4'h5;	// @[TSIToTileLink.scala:58:22, :62:29]
    else if (_T_14)	// @[TSIToTileLink.scala:133:30]
      state <= 4'h4;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
    else if (_GEN_1) begin	// @[TSIToTileLink.scala:120:43]
      if (_T_8)	// @[TSIToTileLink.scala:122:17]
        state <= 4'h6;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
      else if (|cmd) begin	// @[TSIToTileLink.scala:47:16, :125:24]
        if (_GEN_6)	// @[TSIToTileLink.scala:100:45, :108:46, :111:43, :113:13]
          state <= 4'h2;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
        else if (_T_1)	// @[TSIToTileLink.scala:100:25]
          state <= 4'h1;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
      end
      else	// @[TSIToTileLink.scala:125:24]
        state <= 4'h3;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
    end
    else if (_GEN_6)	// @[TSIToTileLink.scala:100:45, :108:46, :111:43, :113:13]
      state <= 4'h2;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
    else if (_T_1)	// @[TSIToTileLink.scala:100:25]
      state <= 4'h1;	// @[TSIToTileLink.scala:58:22, package.scala:16:47]
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[TSIToTileLink.scala:128:15]
      if (_GEN_1 & ~_T_8 & (|cmd) & ~reset) begin	// @[TSIToTileLink.scala:47:16, :120:43, :122:{17,32}, :125:24, :128:15]
        if (`ASSERT_VERBOSE_COND_)	// @[TSIToTileLink.scala:128:15]
          $error("Assertion failed: Bad TSI command\n    at TSIToTileLink.scala:128 assert(false.B, \"Bad TSI command\")\n");	// @[TSIToTileLink.scala:128:15]
        if (`STOP_COND_)	// @[TSIToTileLink.scala:128:15]
          $fatal;	// @[TSIToTileLink.scala:128:15]
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
        cmd = _RANDOM_0;	// @[TSIToTileLink.scala:47:16]
        addr = {_RANDOM_1, _RANDOM_2};	// @[TSIToTileLink.scala:48:17]
        len = {_RANDOM_3, _RANDOM_4};	// @[TSIToTileLink.scala:49:16]
        body_0 = _RANDOM_5;	// @[TSIToTileLink.scala:50:17]
        body_1 = _RANDOM_6;	// @[TSIToTileLink.scala:50:17]
        bodyValid = _RANDOM_7[1:0];	// @[TSIToTileLink.scala:51:22]
        idx = _RANDOM_7[2];	// @[TSIToTileLink.scala:51:22, :52:16]
        state = _RANDOM_7[6:3];	// @[TSIToTileLink.scala:51:22, :58:22]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign auto_out_a_valid = _T_28 | _T_13;	// @[package.scala:16:47, :73:59]
  assign auto_out_a_bits_opcode = _T_28 ? 3'h1 : 3'h4;	// @[Edges.scala:493:15, Mux.scala:81:61, TSIToTileLink.scala:86:20, package.scala:16:47]
  assign auto_out_a_bits_size = _T_28 ? 4'h3 : {2'h0, rsize};	// @[Cat.scala:33:92, Edges.scala:457:15, Mux.scala:81:58, TSIToTileLink.scala:86:20, package.scala:16:47]
  assign auto_out_a_bits_address = {addr[31:3], _T_28 | ~pow2size ? 3'h0 : addr[2:0]};	// @[Cat.scala:33:92, TSIToTileLink.scala:48:17, :65:22, :75:37, :76:36, :86:20, package.scala:16:47]
  assign auto_out_a_bits_mask = _T_28 ? {{4{bodyValid[1]}}, {4{bodyValid[0]}}} : {get_acquire_a_mask_acc_5 | get_acquire_a_mask_eq_5 & byteAddr[0], get_acquire_a_mask_acc_5 | get_acquire_a_mask_eq_5 & ~(byteAddr[0]), get_acquire_a_mask_acc_4 | get_acquire_a_mask_eq_4 & byteAddr[0], get_acquire_a_mask_acc_4 | get_acquire_a_mask_eq_4 & ~(byteAddr[0]), get_acquire_a_mask_acc_3 | get_acquire_a_mask_eq_3 & byteAddr[0], get_acquire_a_mask_acc_3 | get_acquire_a_mask_eq_3 & ~(byteAddr[0]), get_acquire_a_mask_acc_2 | get_acquire_a_mask_eq_2 & byteAddr[0], get_acquire_a_mask_acc_2 | get_acquire_a_mask_eq_2 & ~(byteAddr[0])};	// @[Bitwise.scala:28:17, :77:12, Cat.scala:33:92, Misc.scala:209:26, :210:20, :213:27, :214:29, TSIToTileLink.scala:51:22, :76:21, :86:20, package.scala:16:47]
  assign auto_out_a_bits_data = _T_28 ? {body_1, body_0} : 64'h0;	// @[Bundles.scala:259:74, TSIToTileLink.scala:50:17, :80:10, :86:20, package.scala:16:47]
  assign auto_out_d_ready = _T_30 | _T_15;	// @[package.scala:16:47, :73:59]
  assign io_tsi_in_ready = _T | _T_2 | _T_5 | _T_23;	// @[package.scala:16:47, :73:59]
  assign io_tsi_out_valid = _T_19;	// @[TSIToTileLink.scala:62:29]
  assign io_tsi_out_bits = idx ? body_1 : body_0;	// @[TSIToTileLink.scala:50:17, :52:16, :63:19]
endmodule

