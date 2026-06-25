// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>
// - Cyrill Rüttimann <cruettima@ethz.ch>


`include "common_cells/registers.svh"

module user_aes_de #(

  parameter obi_pkg::obi_cfg_t ObiCfg    = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t = logic,
  parameter type               obi_rsp_t = logic

) (

  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o

);

  // OBI Request Registers
  logic req_d, req_q;
  logic we_d, we_q;
  logic [ObiCfg.AddrWidth-1:0] addr_d, addr_q;
  logic [  ObiCfg.IdWidth-1:0] id_d, id_q;
  logic [ObiCfg.DataWidth-1:0] wdata_d, wdata_q;
  
  // Test, if actual request wants to read from the Output
  logic is_output_read_req;
  assign is_output_read_req = obi_req_i.req && !obi_req_i.a.we && (obi_req_i.a.addr[11:2] >= 10'h008) && (obi_req_i.a.addr[11:2] <= 10'h00b);
  
  // BACKPRESSURE: Don't GNT, as long AES Calc isn't ready
// Block Reads:
  logic block_reads_q, block_reads_d;
  `FF(block_reads_q, block_reads_d, '0);
  assign obi_rsp_o.gnt = obi_req_i.req && !(is_output_read_req && block_reads_q);
 
  // Signals used to create the response
  logic [ObiCfg.DataWidth-1:0] rsp_data; // Data field of the obi response
  logic rsp_err;                         // Error field of the obi response

  `FF(req_q, req_d, '0);
  `FF(id_q, id_d, '0);
  `FF(we_q, we_d, '0);
  `FF(wdata_q, wdata_d, '0);
  `FF(addr_q, addr_d, '0);

  assign req_d   = obi_req_i.req && obi_rsp_o.gnt;
  assign id_d    = obi_req_i.a.aid;
  assign we_d    = obi_req_i.a.we;
  assign addr_d  = obi_req_i.a.addr;
  assign wdata_d = obi_req_i.a.wdata;

  // ---------------------------------------------------
  // Address decode (word address)
  logic [9:0] word_addr;
  assign word_addr = addr_q[11:2];

  // Internal signals/registers
  logic [3:0][31:0] input_q, input_d;
  logic [3:0][31:0] key_q, key_d;

  logic [3:0][31:0] output_q, output_d;

  logic start, start_q, start_d;
  assign start = start_q;
  logic [127:0] output_block;

  // Edge Detection, when Output is ready:
  logic output_ready;
  logic output_ready_ff_q;
  logic output_ready_pulse;

  assign output_ready_pulse = output_ready & ~output_ready_ff_q;
  `FF(output_ready_ff_q, output_ready, 1'b0)

  // Assign the response data
  always_comb begin

    // Defaults
    // Loads
    input_d = input_q;
    key_d   = key_q;

    // Stores
    output_d = output_q;

    // OBI Response
    rsp_data = '0;
    rsp_err  = '0;

    // Controll Signals
    start_d = 1'b0;
    block_reads_d = block_reads_q;

    // Capture Output:
    if (output_ready_pulse) begin
        output_d = output_block[127:0];
        block_reads_d = 1'b0;
    end
    // WRITES
    if (req_q && we_q) begin
        unique case (word_addr)
            // INPUT (128 Bit, 0x00-0x0C)
            10'h000: begin
                input_d[3] = wdata_q;
                block_reads_d = 1'b1;
            end
            10'h001: input_d[2] = wdata_q;
            10'h002: input_d[1] = wdata_q;
            10'h003: input_d[0] = wdata_q;

            // KEY (128 Bit, 0x10-0x1C)
            10'h004: key_d[3] = wdata_q;
            10'h005: key_d[2] = wdata_q;
            10'h006: key_d[1] = wdata_q;
            10'h007: begin
                key_d[0] = wdata_q;
                start_d = 1'b1;
            end

            default: begin
                // nothing
            end
        endcase
    end

    if (req_q && !we_q) begin
        unique case (word_addr)
            // OUTPUT (128 Bit, 0x20-0x2C)
            10'h008: rsp_data = output_d[3];
            10'h009: rsp_data = output_d[2];
            10'h00a: rsp_data = output_d[1];
            10'h00b: rsp_data = output_d[0];
            default: begin
                // nothing
            end
        endcase
    end
  end

`FF(input_q,  input_d,  '0)
`FF(key_q,    key_d,    '0)
`FF(output_q, output_d, '0)
`FF(start_q, start_d, 1'b0)

  // Assign the response
  // A channel
  //assign obi_rsp_o.gnt = obi_req_i.req;
  // R channel
  assign obi_rsp_o.rvalid       = req_q;
  assign obi_rsp_o.r.rdata      = rsp_data;
  assign obi_rsp_o.r.rid        = id_q;
  assign obi_rsp_o.r.err        = rsp_err;
  assign obi_rsp_o.r.r_optional = '0;


// ------------------------------------------------------
// AES-128 Accelerator
top_aes_de i_aes_de_acc
(
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .start_i    (start),
    .seedpk_i   (key_q),
    .blocks_i   (input_q),

    .ready_o    (output_ready),
    .blocks_o   (output_block)
);

endmodule