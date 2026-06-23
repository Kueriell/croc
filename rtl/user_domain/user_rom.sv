// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyril Koenig <cykoenig@iis.ee.ethz.ch>
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

// Simple ROM with 2-Cycle Latency Pipeline Stage
module user_rom #(
  // The OBI configuration for all ports
  parameter obi_pkg::obi_cfg_t ObiCfg    = obi_pkg::ObiDefaultConfig,
  parameter type                obi_req_t = logic,
  parameter type                obi_rsp_t = logic
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

  // Define some registers to hold the requests fields (Pipeline Stage 1)
  logic req_d, req_q;                           // Request valid
  logic we_d, we_q;                             // Write enable
  logic [ObiCfg.AddrWidth-1:0] addr_d, addr_q; // Internal address of the word to read
  logic [ObiCfg.IdWidth-1:0] id_d, id_q;        // Id of the request

  // Pipeline Stage 2 to break the critical timing path
  logic req_q2;
  logic we_q2;
  logic [ObiCfg.AddrWidth-1:0] addr_q2;
  logic [ObiCfg.IdWidth-1:0] id_q2;

  // Signals used to create the response
  logic [ObiCfg.DataWidth-1:0] rsp_data; // Data field of the obi response
  logic rsp_err;                         // Error field of the obi response

  // Wire the registers holding the request
  assign req_d  = obi_req_i.req;
  assign id_d   = obi_req_i.a.aid;
  assign we_d   = obi_req_i.a.we;
  assign addr_d = obi_req_i.a.addr;

  // Flip-flops for both pipeline stages
  always_ff @(posedge clk_i, negedge rst_ni) begin
    if (~rst_ni) begin
      // Reset Stage 1
      req_q   <= '0;
      id_q    <= '0;
      we_q    <= '0;
      addr_q  <= '0;
      // Reset Stage 2
      req_q2  <= '0;
      id_q2   <= '0;
      we_q2   <= '0;
      addr_q2 <= '0;
    end else begin
      // Shift Stage 1
      req_q   <= req_d;
      id_q    <= id_d;
      we_q    <= we_d;
      addr_q  <= addr_d;
      // Shift Stage 2
      req_q2  <= req_q;
      id_q2   <= id_q;
      we_q2   <= we_q;
      addr_q2 <= addr_q;
    end
  end

  // Assign the OBI response data based on Stage 2 registers
  logic [6:0] word_addr;
  always_comb begin
    rsp_data  = '0;
    rsp_err   = '0;
    word_addr = addr_q2[6:2];

    if(req_q2) begin
      if(~we_q2) begin
        case(word_addr)
          5'h00: rsp_data = 32'h69727943; // "C y r i"
          5'h01: rsp_data = 32'h49266C6C; // "l l & I"
          5'h02: rsp_data = 32'h276E616F; // "o a n '"
          5'h03: rsp_data = 32'h53412073; // "s   A S"
          5'h04: rsp_data = 32'h76204349; // "I C   v"
          5'h05: rsp_data = 32'h00302E31; // "1 . 0 \0"
          default: rsp_data = 32'h0;
        endcase
      end else begin
        rsp_err = '1;
      end
    end
  end

  // Assign the OBI response signals
  // A channel (combinational grant to accept the request immediately)
  assign obi_rsp_o.gnt = obi_req_i.req;
  
  // R channel (driven by the 2nd pipeline stage)
  assign obi_rsp_o.rvalid       = req_q2;
  assign obi_rsp_o.r.rdata      = rsp_data;
  assign obi_rsp_o.r.rid        = id_q2;
  assign obi_rsp_o.r.err        = rsp_err;
  assign obi_rsp_o.r.r_optional = '0;

endmodule