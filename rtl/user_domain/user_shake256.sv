// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

`include "common_cells/registers.svh"

module user_shake256 #(
  parameter obi_pkg::obi_cfg_t ObiCfg    = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t = logic,
  parameter type               obi_rsp_t = logic
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

  // ---------------------------------------------------
  // OBI Request Registers (Stufe 1)
  logic                        req_q, req_d;
  logic                        we_q,  we_d;
  logic [ObiCfg.AddrWidth-1:0] addr_q, addr_d;
  logic [ObiCfg.IdWidth-1:0]   id_q,   id_d;
  logic [ObiCfg.DataWidth-1:0] wdata_q, wdata_d;

  // OBI Request Registers (Stufe 2)
  logic                        req_q2;
  logic                        we_q2;
  logic [ObiCfg.AddrWidth-1:0] addr_q2;
  logic [ObiCfg.IdWidth-1:0]   id_q2;
  logic [ObiCfg.DataWidth-1:0] wdata_q2;

  // Test if the actual request wants to write to the Input-Buffer
  logic is_input_write_req;
  assign is_input_write_req = obi_req_i.req && obi_req_i.a.we && 
                              (obi_req_i.a.addr[11:2] >= 10'h040) && 
                              (obi_req_i.a.addr[11:2] <= 10'h061);

  // BACKPRESSURE: Don't GNT as long as block_writes is active
  logic block_writes_q, block_writes_d;
  assign obi_rsp_o.gnt = obi_req_i.req && !(is_input_write_req && block_writes_q);

  // Register Stufe 1 Updates
  `FF(req_q,   req_d,   '0)
  `FF(id_q,    id_d,    '0)
  `FF(we_q,    we_d,    '0)
  `FF(wdata_q, wdata_d, '0)
  `FF(addr_q,  addr_d,  '0)

  // Register Stufe 2 Updates (Die Pipeline)
  `FF(req_q2,   req_q,   '0)
  `FF(id_q2,    id_q,    '0)
  `FF(we_q2,    we_q,    '0)
  `FF(wdata_q2, wdata_q, '0)
  `FF(addr_q2,  addr_q,  '0)

  // OBI Compliance Fix: Only sample target properties if OBI transaction handles a handshake
  assign req_d   = obi_req_i.req && obi_rsp_o.gnt;
  assign id_d    = (obi_req_i.req && obi_rsp_o.gnt) ? obi_req_i.a.aid   : id_q;
  assign we_d    = (obi_req_i.req && obi_rsp_o.gnt) ? obi_req_i.a.we    : we_q;
  assign addr_d  = (obi_req_i.req && obi_rsp_o.gnt) ? obi_req_i.a.addr  : addr_q;
  assign wdata_d = (obi_req_i.req && obi_rsp_o.gnt) ? obi_req_i.a.wdata : wdata_q;

  // ---------------------------------------------------
  // Address decode (word address) - Jetzt basierend auf Stufe 2
  logic [9:0] word_addr_q2;
  assign word_addr_q2 = addr_q2[11:2];

  // Internal Signals & Registers
  logic [15:0] msg_len_q, msg_len_d;
  logic [15:0] out_len_q, out_len_d;
  logic [10:0] msg_total_words_q, msg_total_words_d;
  logic [10:0] out_total_words_q, out_total_words_d;
  logic [10:0] msg_words_q, msg_words_d;
  logic [10:0] out_words_q, out_words_d;

  logic msg_len_valid_q, msg_len_valid_d;
  logic out_len_valid_q, out_len_valid_d;

  // Input/Output Storage Packed Arrays
  logic [33:0][31:0] input_buf_q, input_buf_d;
  logic [5:0]        input_count_q, input_count_d;
  logic              input_ready_q, input_ready_d;

  logic [33:0][31:0] output_buf_q, output_buf_d;
  logic [5:0]        output_count_q, output_count_d;

  logic              squeeze_done_q, squeeze_done_d;
  logic [31:0]       rsp_data;
  logic              rsp_err;

  // Pulses & Synchronization Signals
  logic              input_ready_ff_q;
  logic              input_ready_pulse;
  logic              start_busy_ff_q;
  logic              start_busy_pulse;
  logic              squeeze_done_ff_q;
  logic              new_data_pulse;

  // Accelerator Core Connections
  logic [1087:0]     output_string;
  logic              squeeze_valid;
  logic              keccak_busy;
  logic              keccak_done;
  logic              keccak_done_buf;
  logic              shake_done;
  logic [10:0]       user_actual_block_len, actual_block_len_q, actual_block_len_d;

  logic start_calc_pulse;
  logic first_round_done_q, first_round_done_d;
  logic start_squeeze;

  assign start_calc_pulse  = (!first_round_done_q && input_ready_pulse);
  assign new_data_pulse    = (first_round_done_q && input_ready_pulse);
  assign input_ready_pulse = input_ready_q & ~input_ready_ff_q;
  
  `FF(input_ready_ff_q, input_ready_q, 1'b0)

  assign start_busy_pulse  = (keccak_busy && ~start_busy_ff_q);
  `FF(start_busy_ff_q, keccak_busy, 1'b0)

  logic [10:0] WORDS_PER_BLOCK = 11'd34;
  logic start_squeeze_pulse;
  assign start_squeeze_pulse = (~squeeze_done_q) && squeeze_done_ff_q && (out_total_words_q > WORDS_PER_BLOCK);
  `FF(squeeze_done_ff_q, squeeze_done_q, 1'b0)

  // Handeling the first round tracker
  always_comb begin
    first_round_done_d = first_round_done_q;
    if (start_calc_pulse) begin
      first_round_done_d = 1'b1;
    end
    if (shake_done) begin
      first_round_done_d = 1'b0;
    end
  end
  `FF(first_round_done_q, first_round_done_d, 1'b0)

  assign msg_words_d = (msg_total_words_q > WORDS_PER_BLOCK) ? WORDS_PER_BLOCK : msg_total_words_q;
  assign out_words_d = (out_total_words_q > WORDS_PER_BLOCK) ? WORDS_PER_BLOCK : out_total_words_q;

  // ---------------------------------------------------
  // Main System Memory Access Cycle Combinational Block
  always_comb begin
    msg_len_d         = msg_len_q;
    out_len_d         = out_len_q;
    msg_total_words_d = msg_total_words_q;
    out_total_words_d = out_total_words_q;
    msg_len_valid_d   = msg_len_valid_q;
    out_len_valid_d   = out_len_valid_q;

    input_buf_d       = input_buf_q;
    input_count_d     = input_count_q;
    input_ready_d     = input_ready_q;
    block_writes_d    = block_writes_q;

    output_buf_d      = output_buf_q;
    output_count_d    = output_count_q;
    squeeze_done_d    = squeeze_done_q;

    start_squeeze     = 1'b0;
    rsp_data          = '0;
    rsp_err           = 1'b0;

    if (squeeze_valid) begin
      squeeze_done_d  = 1'b1;
      input_buf_d     = '0;
    end

    if (start_busy_pulse) begin
      input_buf_d     = '0;
      block_writes_d  = 1'b0;
      input_count_d   = '0;
      output_count_d  = '0;
    end

    if (start_calc_pulse) begin
      input_ready_d   = 1'b0;
    end

    // Load Accelerator string into output buffer using explicit cast
    if (keccak_done_buf) begin
      if (actual_block_len_q == 11'd1088) begin
        output_buf_d = output_string;
      end else begin
        output_buf_d = output_string & ((1088'b1 << (actual_block_len_q % 1088)) - 1088'b1);
      end
    end

    // Process Incoming OBI Write Phase Operations (Stufe 2)
    if (req_q2 && we_q2) begin
      unique case (word_addr_q2)
        10'h000: begin
          msg_len_d          = wdata_q2[31:16];
          msg_total_words_d  = (wdata_q2[31:16] + 31) >> 5;
          out_len_d          = wdata_q2[15:0];
          out_total_words_d  = (wdata_q2[15:0] + 31) >> 5;
        end
        default: begin
          if (word_addr_q2 >= 10'h040 && word_addr_q2 <= 10'h061) begin
            input_buf_d[word_addr_q2 - 10'h040] = wdata_q2;
            input_count_d = input_count_q + 1'b1;

            if ((input_count_q + 1'b1) == msg_words_q) begin
              input_ready_d     = 1'b1;
              block_writes_d    = 1'b1;
              msg_total_words_d = (msg_total_words_q > msg_words_q) ? (msg_total_words_q - msg_words_q) : '0;
            end
          end
        end
      endcase
    end

    // Process Incoming OBI Read Phase Operations (Stufe 2)
    if (req_q2 && !we_q2) begin
      unique case (word_addr_q2)
        default: begin
          if (word_addr_q2 >= 10'h080 && word_addr_q2 <= 10'h0A1) begin
            rsp_data       = output_buf_q[word_addr_q2 - 10'h080];
            output_count_d = output_count_q + 1'b1;

            if ((output_count_q + 1'b1) == out_words_q) begin
              squeeze_done_d    = 1'b0;
              output_count_d    = '0;
              out_total_words_d = (out_total_words_q > out_words_q) ? (out_total_words_q - out_words_q) : '0;
              if (out_total_words_q > WORDS_PER_BLOCK) begin
                start_squeeze   = 1'b1;
              end
            end
          end
        end
      endcase
    end

    if (shake_done) begin
      input_ready_d = 1'b0;
    end
  end

  // Sequential Update Synchronizer Blocks
  `FF(msg_len_q,         msg_len_d,         '0)
  `FF(out_len_q,         out_len_d,         '0)
  `FF(msg_len_valid_q,   msg_len_valid_d,   1'b0)
  `FF(out_len_valid_q,   out_len_valid_d,   1'b0)
  `FF(msg_words_q,       msg_words_d,       '0)
  `FF(out_words_q,       out_words_d,       '0)
  `FF(msg_total_words_q, msg_total_words_d, '0)
  `FF(out_total_words_q, out_total_words_d, '0)
  `FF(input_buf_q,       input_buf_d,       '0)
  `FF(input_count_q,     input_count_d,     '0)
  `FF(input_ready_q,     input_ready_d,     1'b0)
  `FF(block_writes_q,    block_writes_d,    1'b0)
  `FF(output_buf_q,      output_buf_d,      '0)
  `FF(output_count_q,    output_count_d,    '0)
  `FF(squeeze_done_q,    squeeze_done_d,    1'b0)

  // Assign standard response output parameters (Stufe 2)
  assign obi_rsp_o.rvalid       = req_q2;
  assign obi_rsp_o.r.rdata      = rsp_data;
  assign obi_rsp_o.r.rid        = id_q2;
  assign obi_rsp_o.r.err        = rsp_err;
  assign obi_rsp_o.r.r_optional = '0;

  assign actual_block_len_d = (keccak_done) ? user_actual_block_len : actual_block_len_q;
  `FF(actual_block_len_q, actual_block_len_d, '0)

  // Drive flat vector connection from 2D packed arrays explicitly
  logic [1087:0] flat_input_block;
  assign flat_input_block = input_buf_q;

  shake256_top #(
    .Msg_len_bits (16),
    .Out_len_bits (16)
  ) i_shake256_acc (
    .clk              (clk_i),
    .rst_n            (rst_ni),
    .start_calc       (start_calc_pulse),
    .new_data         (new_data_pulse),
    .start_squeeze    (start_squeeze),
    .Msg_length       (msg_len_q),
    .Out_length       (out_len_q),
    .block_i          (flat_input_block),
    .block_o          (output_string),
    .actual_block_len (user_actual_block_len),
    .squeeze_valid_o  (squeeze_valid),
    .keccak_busy_o    (keccak_busy),
    .keccak_done_o    (keccak_done),
    .keccak_done_buf_o(keccak_done_buf),
    .shake_done_o     (shake_done)
  );

endmodule