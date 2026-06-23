// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

module fsm_keccak #(
    parameter logic [4:0] N_ROUNDS = 24
)(
    input logic     clk_i,
    input logic     rst_ni,
    input logic     start_i,

    output logic    done_o,
    output logic    busy_o,
    output logic [$clog2(N_ROUNDS)-1:0] round_cnt_o
);

// State logic
typedef enum logic[1:0] { Idle, Round, Done } state_t;
state_t state_d, state_q;

// Round counter
logic [$clog2(N_ROUNDS)-1:0] round_cnt_d, round_cnt_q;

// Make the number of rounds visible to the outside
assign round_cnt_o = (state_q != Idle) ? round_cnt_q : '0;
assign busy_o  = (state_q != Idle);

always_comb begin
    // Default assignment
    done_o = 1'b0;
    state_d = state_q;
    round_cnt_d = round_cnt_q;

    case (state_q)
        // Idle: just do nothing
        Idle: begin
            // Change state to load
            if(start_i)begin
                state_d = Round;
                round_cnt_d = '0;
            end
            // else : stay in Idle
        end
        
        // Round: Do the number of rounds defined
        Round: begin
            round_cnt_d = round_cnt_q + 1'b1;
            // Done in the same cycle as the last round
            if(round_cnt_q == N_ROUNDS-2) begin
                state_d = Done;
            end
        end

        // Done: Indicated, computation is completed
        Done: begin
            done_o = 1'b1;
            round_cnt_d = 0;
            //round_cnt_d = round_cnt_q + 1'b1;
            if(start_i) begin
                state_d = Round;
                //round_cnt_d = 0;
            end else begin
                state_d = Idle;
                //round_cnt_d = '0;
            end
        end
        default: begin
            state_d = Idle;
        end
    endcase
end

always_ff @(posedge clk_i, negedge rst_ni ) begin
    if(!rst_ni) begin
        state_q <= Idle;
        round_cnt_q <= '0;
    end else begin
        state_q <= state_d;
        round_cnt_q <= round_cnt_d;
    end    
end

endmodule