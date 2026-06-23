// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

module shake256_fsm (

    // General Inputs
    input  logic clk_i,
    input  logic rst_ni,

    // Inputs from the CTR-REGISTER
    input logic start_calc,
    input logic new_data,
    input logic start_squeeze,

    // Controll Signals
    output logic pre_calc_done,
    output logic keccak_start,
    input logic keccak_done_i,
    output logic keccak_done_buf_o,
    input logic keccak_busy,

    // Use Calculated Data
    input logic need_second_block_i,
    output logic use_block0_o,
    output logic use_block1_o,

    // Round Parameters
    input  logic [7:0] absorbtion_rounds,
    input  logic [7:0] squeeze_rounds,

    // Visible Count
    output logic [7:0] absorbtion_cnt_o,
    output logic [7:0] squeeze_cnt_o,
    output logic       is_penultimate_absorb_o,
    output logic       is_last_absorb_o,
    
    //Visible Outputs
    output logic absorb_busy_o,
    output logic squeeze_busy_o,
    output logic squeeze_valid_o,
    output logic shake_done_o

);

    // State definition: IDLE, ABSORB, SQUEEZE
    typedef enum logic [1:0] { IDLE, ABSORB, SQUEEZE } state_t;
    state_t state_q, state_d;

    // Internal controll logic
    logic [7:0] absorbtion_cnt_d, absorbtion_cnt_q;
    logic [7:0] squeeze_cnt_d, squeeze_cnt_q;
    logic merge_q, merge_d;
    logic shake_done_q, shake_done_d;
    logic keccak_done_buf_q, keccak_done_buf_d;
    logic squeeze_valid;
    
    // Output Logic assignments
    assign absorbtion_cnt_o  = absorbtion_cnt_q;
    assign squeeze_cnt_o = squeeze_cnt_q;

    // For padding, we need to know, in which round we are
    assign is_penultimate_absorb_o = (absorbtion_cnt_q == (absorbtion_rounds - 8'd2));
    assign is_last_absorb_o = (absorbtion_cnt_q == (absorbtion_rounds - 8'd1));
    
    // Visible Output 
    assign absorb_busy_o = (state_q == ABSORB);
    assign squeeze_busy_o = (state_q == SQUEEZE); 
    assign squeeze_valid_o = squeeze_valid;
    assign keccak_done_buf_o = keccak_done_buf_q;
    assign shake_done_o = shake_done_q;

    always_comb begin

        // Default states
        state_d = state_q;
        absorbtion_cnt_d = absorbtion_cnt_q;
        squeeze_cnt_d = squeeze_cnt_q;

        // Output logic
        pre_calc_done = 1'b0;
        keccak_start = 1'b0;
        use_block0_o = 1'b0;
        use_block1_o = 1'b0;

        // Datapath
        use_block0_o = 1'b0;
        use_block1_o = 1'b0;

        // Controll
        merge_d = merge_q;
        keccak_done_buf_d = 1'b0;
        squeeze_valid = 1'b0;
        shake_done_d = 1'b0;
        
        // Keccak_done (Asserted in last round of calculation)
        if (keccak_done_i && state_q == ABSORB) begin
            // Prepare Output Ready-Signal
            keccak_done_buf_d = 1'b1;
            // Increase Absorbtion Count
            absorbtion_cnt_d = absorbtion_cnt_q + 8'd1;
            if (absorbtion_cnt_q + 8'd1 == absorbtion_rounds) begin
                squeeze_valid = 1'b1;
            end
        end

        if (keccak_done_i && state_q == SQUEEZE) begin
            // Prepare Output Ready-Signal
            keccak_done_buf_d = 1'b1;
            // Increase Squeeze Count
            squeeze_cnt_d = squeeze_cnt_q + 8'd1;
            squeeze_valid = 1'b1;
        end

        // FSM-Logic
        case (state_q)
            
            IDLE : begin
                // reset counters
                absorbtion_cnt_d = '0;
                squeeze_cnt_d = '0;
                if(start_calc) begin
                    state_d = ABSORB;
                    // Make Precalculations for padding
                    pre_calc_done = 1'b1;
                    // Prepare Merge for the next cycle
                    merge_d = 1'b1;
                end
            end

            ABSORB : begin
                // In this Version, we can start Keccak_f directly
                if(merge_q) begin
                    keccak_start = 1'b1;
                    merge_d = 1'b0;
                end
                
                // Need to load new data first, before starting a new round:
                if (new_data && !keccak_busy) begin
                    merge_d = 1'b1;
                end

                // Depending on the Situation, there is one last absorbtion round needed:
                if (need_second_block_i && !keccak_busy && is_last_absorb_o && !merge_q) begin
                    merge_d = 1'b1;
                end

                // Decide, which block to use for the next absorbtion round
                if (need_second_block_i) begin
                    if (is_penultimate_absorb_o) begin
                        use_block0_o = 1'b1;
                    end else if (is_last_absorb_o) begin
                        use_block1_o = 1'b1;
                    end
                end else begin
                    if (is_last_absorb_o) begin
                        use_block0_o = 1'b1;
                    end
                end

                // Check, if absorbtion is done
                if (absorbtion_cnt_q == absorbtion_rounds) begin
                    // Case: only need 1 squeeze round
                    if (squeeze_cnt_q + 8'd1 == squeeze_rounds) begin
                        state_d = IDLE;
                        shake_done_d = 1'b1;
                    end else begin
                        state_d = SQUEEZE;
                        squeeze_cnt_d = squeeze_cnt_q + 8'd1;
                    end
                end
            end

            SQUEEZE : begin
                if (start_squeeze && !keccak_busy) begin
                    keccak_start = 1'b1;
                end

                // Check, if squeeze is done
                if (squeeze_cnt_q == squeeze_rounds) begin
                    state_d = IDLE;
                    shake_done_d = 1'b1;
                end
            end

            default: begin
                state_d = IDLE;
            end

        endcase
    
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= IDLE;
            absorbtion_cnt_q <= '0;
            squeeze_cnt_q <= '0;
            merge_q <= 1'b0;
            keccak_done_buf_q <= 1'b0;
            shake_done_q <= 1'b0;

        end else begin
            state_q <= state_d;
            absorbtion_cnt_q <= absorbtion_cnt_d;
            squeeze_cnt_q <= squeeze_cnt_d;
            merge_q <= merge_d;
            keccak_done_buf_q <= keccak_done_buf_d;
            shake_done_q <= shake_done_d;
        end
    end

endmodule