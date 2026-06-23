// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

module shake256_top #(
    
    parameter int  Msg_len_bits = 16,
    parameter int  Out_len_bits = 16
    
)(
    // General Inputs
    input logic     clk,
    input logic     rst_n,

    // Inputs from the CTR-Register
    input logic start_calc,
    input logic new_data,
    input logic start_squeeze,

    // Datatransfer
    input  logic [Msg_len_bits-1:0]  Msg_length,
    input  logic [Out_len_bits-1:0]  Out_length,

    // Datatransfer from Tx (DATA)
    input logic [1087:0] block_i,

    // Datatransfer to Rx
    output logic [1087:0] block_o,
    output logic [10:0] actual_block_len,

    // Visible output
    output logic squeeze_valid_o,
    output logic keccak_busy_o,
    output logic keccak_done_o,
    output logic keccak_done_buf_o,
    output logic shake_done_o

);  
    // Keccak_f / FSM Signals
    logic [1599:0] keccak_in, keccak_out;
    logic keccak_start, keccak_busy, keccak_done, keccak_done_buf;
    logic squeeze_valid, shake_done;

    // Debugging Output
    assign block_o = keccak_out[1087:0];
    assign squeeze_valid_o = squeeze_valid;
    assign keccak_busy_o = keccak_busy;
    assign keccak_done_o = keccak_done;
    assign keccak_done_buf_o = keccak_done_buf;
    assign shake_done_o = shake_done;

    // ----------------------------------------------------------------
    // IDLE
    // ----------------------------------------------------------------

    // ----------------------------------------------------------------
    // Pre-Calc
    // ----------------------------------------------------------------
    // Depending on how fast we can load the Msg from the RISC-V Core (32bit)
    // we probalby need to wait until block is ready (block_ready)

    // While Transferig to the CALC-State, we already trigger the data calculation
    logic pre_calc_done;
    // Calculate the Absorbtion Ceil:
    logic [7:0] absorbtion_rounds;
    always_comb begin : ABSORBTION_CEIL
        absorbtion_rounds = ((Msg_length + 16'd6) / 16'd1089) + 16'd1;
    end
    // Calculate the Squeeze Ceil:
    logic [7:0] squeeze_rounds;
    always_comb begin : SQUEEZE_CEIL
        squeeze_rounds = (Out_length / 16'd1089) + 16'd1;
    end
    // Pre-Calc the domain separation
    logic [10:0] msg_off, msg_off_q, msg_off_d;
    logic [10:0] n, n_q, n_d;
    logic need_second_block, need_second_block_q, need_second_block_d;

    assign msg_off_d = (pre_calc_done) ? msg_off : msg_off_q;
    assign n_d = (pre_calc_done) ? n : n_q;
    assign need_second_block_d = (pre_calc_done) ? need_second_block : need_second_block_q;

    always_comb begin : Pre_CALC_ABSORB
        msg_off = Msg_length % 1088;
        if(msg_off == 0) begin
            n = 0;
            need_second_block = 1'b1;
        end else begin
            n = (1088 - msg_off >= 4) ? 4 : (1088 - msg_off);
            need_second_block = (n < 4) || (msg_off + n >= 1088);
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin : CAPTURE_PRE_ABSORB
        if(!rst_n) begin
            msg_off_q <= '0;
            n_q <= '0;
            need_second_block_q <= 1'b0;
        end else begin
            msg_off_q <= msg_off_d;
            n_q <= n_d;
            need_second_block_q <= need_second_block_d;
        end
    end

    // ----------------------------------------------------------------
    // CALC
    // ----------------------------------------------------------------
    // Here we process the Pre-calculated data:
    // such we get the right padding positions and domain seperations
    // We prepare in this step the different data-blocks
    logic [3:0] DOMAIN = 4'b1111;
    logic [10:0] pos0, pos1;
    // We prepare the different block-options:
    logic [1087:0]  block0, block1;

    // If it fits: Build last absorb block
    always_comb begin : BUILD_BLOCK0
        block0 = '0;
        pos0 = '0;
        // Domain bits gonna spill
        if(need_second_block_q) begin
            if (msg_off_q > 1082) begin
                for (int k = 0; k < 4; k++) begin
                    pos0 = msg_off_q + k;
                    if(pos0 < 1088) begin
                        block0[pos0] = DOMAIN[k];
                    end
                end
            
                // First pad10*1 bit
                pos0 = msg_off_q + n_q;
                if(pos0 < 1088) begin
                    block0[pos0] = 1'b1;
                end
            end
            // Final pad10*1 bit
            if(msg_off_q == 1082) begin
                block0[1087] = 1'b1;
            end
        end else begin
            // Set Domain bits
            for (int k = 0; k < 4; k++) begin
                pos0 = msg_off_q + k;
                if(pos0 < 1088) begin
                    block0[pos0] = DOMAIN[k];
                end
            end
            // Set padding
            // First pad10*1 bit
            pos0 = msg_off_q + n_q;
            if(pos0 < 1088) begin
                block0[pos0] = 1'b1;
            end
            // Last pad10*1 bit
            block0[1087] = 1'b1;
        end
    end

    always_comb begin : BUILD_BLOCK1
        block1 = '0;
        pos1 = '0;

        if(need_second_block_q) begin
            // Place remaining domain bits
            for (int k = 0; k < 4; k++) begin
                if (k >= n_q) begin
                    pos1 = k - n_q;
                    if (pos1 < 1088) begin
                        block1[pos1] = DOMAIN[k];
                    end
                end
            end
            // First pad10*1 bit after remaining DOMAIN bits
            pos1 = (4 - n_q);
            if(pos1 < 1087) begin
                block1[pos1] = 1'b1;
            end
            // Final pad10*1 bit at end of block
            block1[1087] = 1'b1;
        end
    end
    
    // ----------------------------------------------------------------
    // ABSORB
    // ----------------------------------------------------------------
    // Now we need the logic, which merges the Padding, Domainsep. and Msg accordingly
    logic [1087:0] Msg;
    assign Msg = block_i;

    logic [1087:0] block_merged;
    logic use_block0, use_block1;

    // Depending on Status (Penultimate, Last, etc), we can merge the block
    always_comb begin : MERGE
        if(use_block0) begin
            block_merged = Msg | block0;
        end else if (use_block1) begin
            block_merged = block1;
        end else begin
            block_merged = Msg;
        end
    end

    logic [1599:0] block_in, block_out;
    assign block_out = keccak_out;

    always_comb begin : XOR
        block_in[1087:0] = block_merged ^ block_out[1087:0]; 
        block_in[1599:1088] = block_out[1599:1088];
    end

    // Generate Keccak_in for the ABSORBTION/SQUEEZE stage:
    logic absorb_busy, squeeze_busy;
    assign keccak_in = (absorb_busy) ? block_in: (squeeze_busy ? block_out : '0); 

    // ----------------------------------------------------------------
    // SQUEEZE 
    // ----------------------------------------------------------------
    logic [7:0] absorb_cnt, squeeze_cnt;

    always_comb begin : ACTUAL_LENGTH
        if (squeeze_cnt == squeeze_rounds - 1'b1 && (Out_length != 11'd1088)) begin
            actual_block_len = Out_length % 1088;
        end else begin 
            actual_block_len = 11'd1088;
        end
    end

    // ----------------------------------------------------------------
    // Modules for the calculations of the different stages
    // ----------------------------------------------------------------
    // Keccak_f
    keccak_top #(
        .N_ROUNDS(24)
    ) i_keccak_f (
        .clk_i (clk),
        .rst_ni (rst_n),
        .keccak_start_i (keccak_start),
        .keccak_busy_o (keccak_busy),
        .keccak_done_o (keccak_done),
        .string_i (keccak_in),
        .string_o (keccak_out),
        .shake_done_o (shake_done)
    );

    // ----------------------------------------------------------------
    shake256_fsm i_shake_fsm (
        
        // General inputs
        .clk_i (clk),
        .rst_ni (rst_n),

        // CTR-REGISTER
        .start_calc (start_calc),
        .new_data   (new_data),
        .start_squeeze (start_squeeze),

        // Controll Signals
        .pre_calc_done (pre_calc_done),
        .keccak_start (keccak_start),
        .keccak_done_i (keccak_done),
        .keccak_done_buf_o (keccak_done_buf),
        .keccak_busy   (keccak_busy),

        // Calculated Data
        .need_second_block_i (need_second_block_q),
        .use_block0_o (use_block0),
        .use_block1_o (use_block1),

        // Round Parameters
        .absorbtion_rounds (absorbtion_rounds),
        .squeeze_rounds (squeeze_rounds),

        // Visible Count
        .absorbtion_cnt_o (absorb_cnt),
        .squeeze_cnt_o (squeeze_cnt),
        .is_penultimate_absorb_o (),
        .is_last_absorb_o (),

        // Visible Outputs
        .absorb_busy_o (absorb_busy),
        .squeeze_busy_o (squeeze_busy),
        .squeeze_valid_o (squeeze_valid),
        .shake_done_o (shake_done)
  
    );

endmodule
