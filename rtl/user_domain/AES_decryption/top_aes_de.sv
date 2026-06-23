// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>

// v3.0: 1 compute units, 1 block in 10 cycles
module top_aes_de
(
    input logic          clk_i,
    input logic          rst_ni,
    input logic          start_i,
    input logic  [127:0] seedpk_i,
    input  logic [127:0] blocks_i,

    output logic         ready_o,
    output logic [127:0] blocks_o
);

    localparam int NumRounds = 10;
    
    // Explicit FSM to handle the two-phase 20-cycle latency
    typedef enum logic [1:0] {
        IDLE,
        SETUP_KEY,
        DECRYPT,
        DONE
    } state_e;
    
    state_e fsm_q, fsm_d;
    logic [3:0]   cnt_q, cnt_d;
    
    // Registers
    logic [127:0] key_q, key_d;
    logic [127:0] data_q, data_d;
    logic [127:0] block_cap_q, block_cap_d; // Buffers ciphertext during key setup

    // Combinational Wires
    logic [127:0] fwd_key_next, inv_key_next;
    logic [127:0] inv_round_out;

    assign ready_o  = (fsm_q == DONE);
    assign blocks_o = data_q;

    
    // Forward Key Expansion (Winding up to K10) 
    
    key_expansion_round i_fwd_key_expansion (
        .prev_key_i(key_q),
        .round_i   ({1'b0, cnt_q}), 
        .next_key_o(fwd_key_next)
    );

    
    // Inverse Key Expansion (Unwinding K10 down to K0)
    
    inv_key_expansion_round i_inv_key_expansion (
        .current_key_i(key_q),
        // Maps cnt_q (1 to 10) to reverse round indices (10 down to 1)
        .round_i      (5'd11 - {1'b0, cnt_q}), 
        .prev_key_o   (inv_key_next)
    );

    
    // Inverse AES Round Datapath
    
    inv_aes_round i_inv_aes_round (
        .final_round_i((cnt_q == NumRounds)), // Asserts on cycle 10 to bypass MixColumns
        .block_i      (data_q),
        .round_key_i  (inv_key_next),
        .block_o      (inv_round_out)
    );

    
    // State Machine & Datapath Routing
    
    always_comb begin
        fsm_d       = fsm_q;
        cnt_d       = cnt_q;
        key_d       = key_q;
        data_d      = data_q;
        block_cap_d = block_cap_q;

        if (start_i) begin
            fsm_d       = SETUP_KEY;
            cnt_d       = 4'd1;
            key_d       = seedpk_i;
            block_cap_d = blocks_i; // Capture input block so the external bus can drop it
        end else begin
            case (fsm_q)
                SETUP_KEY: begin
                    key_d = fwd_key_next;
                    
                    if (cnt_q == NumRounds) begin
                        // Setup complete. key_q now contains K9, and fwd_key_next is K10.
                        fsm_d  = DECRYPT;
                        cnt_d  = 4'd1;
                        // Decryption Round 0: Initial AddRoundKey (Ciphertext ^ K10)
                        data_d = block_cap_q ^ fwd_key_next; 
                    end else begin
                        cnt_d = cnt_q + 1'b1;
                    end
                end

                DECRYPT: begin
                    key_d  = inv_key_next;
                    data_d = inv_round_out;
                    
                    if (cnt_q == NumRounds) begin
                        fsm_d = DONE;
                    end else begin
                        cnt_d = cnt_q + 1'b1;
                    end
                end
                
                DONE: begin
                    // Hold outputs valid until the next start_i pulse
                end
                
                default: fsm_d = IDLE;
            endcase
        end
    end

    
    // Sequential Logic
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (~rst_ni) begin
            fsm_q       <= IDLE;
            cnt_q       <= '0;
            key_q       <= '0;
            data_q      <= '0;
            block_cap_q <= '0;
        end else begin
            fsm_q       <= fsm_d;
            cnt_q       <= cnt_d;
            key_q       <= key_d;
            data_q      <= data_d;
            block_cap_q <= block_cap_d;
        end
    end
    

    
endmodule