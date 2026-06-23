// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Tim Wyss <tiwyss@ethz.ch>

// v3.0: 1 compute units, 1 block in 10 cycles
module top_aes_en
(
    input logic          clk_i,
    input logic          rst_ni,
    input logic          start_i,
    input logic  [127:0] seedpk_i,
    input  logic [127:0] blocks_i,

    output logic         ready_o,
    output logic [127:0] blocks_o
);

    localparam int Byte      = 8;
    localparam int NumRounds = 10;
    localparam int Round0    = 0;
    
    logic running;
    logic [3:0] cnt_d, cnt_q;
    logic [127:0] last_key, next_key, key_d, key_q;
    logic [127:0] state_d, state_q, s0, s5;

    assign last_key = (start_i) ? seedpk_i : key_q;
    assign running  = (cnt_q > 0) && (cnt_q < NumRounds);
    assign blocks_o = state_q;
    assign ready_o  = (cnt_q == NumRounds);    

    key_expansion_round i_key_expansion_round (
        .prev_key_i(last_key),
        .round_i   (start_i ? 5'd1 : cnt_q + 1),
        .next_key_o(next_key)
    );

    // Initial AddRoundKey with seedpk_i for all aes compute units
    always_comb begin
        s0 = (start_i) ? blocks_i ^ seedpk_i : state_q;
    end

  
    aes_round i_aes_round (
        .final_round_i((cnt_q == NumRounds - 1) && !start_i),
        .block_i (s0),
        .round_key_i(next_key),
        .block_o (s5)
    );

    // Handle state (0 = IDLE, 1-10 = BUSY, 11 = FINISHED)
    always_comb begin
        cnt_d   = cnt_q;
        state_d = state_q;
        key_d   = key_q;

        if (start_i) begin
            cnt_d   = 4'd1; // this sets running = 1
            state_d = s5;
            key_d   = next_key;
        end else if (running) begin
            cnt_d   = cnt_q + 1;
            state_d = s5;
            key_d   = next_key;
        end
    end


    always_ff @(posedge clk_i, negedge rst_ni) begin
        if (~rst_ni) begin
            cnt_q   <= '0;
            state_q <= '0;
            key_q   <= '0;
        end else begin
            cnt_q   <= cnt_d;
            state_q <= state_d;
            key_q   <= key_d;
        end
        
    end
    
endmodule