// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;


module keccak_top #(
    parameter int N_ROUNDS = 24
)(
    input logic     clk_i,
    input logic     rst_ni,

    // Control
    input logic     keccak_start_i,
    output logic    keccak_busy_o,
    output logic    keccak_done_o,

    // State interface
    input  logic [1599:0] string_i,
    output logic [1599:0] string_o,

    // Serial reset logic
    input logic shake_done_o
);

// Internal State (5x5x64)
keccak_state_t keccak_state_q, keccak_state_d;

// Initialze the FSM-Controller
logic [$clog2(N_ROUNDS)-1:0] keccak_round_cnt;

fsm_keccak #(
    .N_ROUNDS(N_ROUNDS)
) u_ctrl (
    .clk_i       (clk_i),
    .rst_ni      (rst_ni),
    .start_i     (keccak_start_i),
    .done_o      (keccak_done_o),
    .busy_o      (keccak_busy_o),
    .round_cnt_o (keccak_round_cnt)
);

// Converse the input string to the state 
// A[x, y, z] = S[w(5y + x) + z].
keccak_state_t keccak_state_load;

string_to_state u_load (
    .string_i(string_i),
    .state_o(keccak_state_load)
);

// During the first round, we load the inputstring and make a transformation
keccak_state_t round_input;
assign round_input = (keccak_round_cnt == 0) ? keccak_state_load : keccak_state_q;

// Apply the Step Mappings : Theta -> Rho -> Pi -> Chi -> Iota
keccak_state_t theta_o, rho_o, pi_o, chi_o, iota_o;

theta u_theta (
    .state_i(round_input),
    .state_o(theta_o)
);

rho   u_rho   (
    .state_i(theta_o),
    .state_o(rho_o)
);

pi    u_pi    (
    .state_i(rho_o),
    .state_o(pi_o)
);

chi   u_chi   (
    .state_i(pi_o),
    .state_o(chi_o)
);

iota  u_iota  (
    .state_i(chi_o),
    .round_cnt_i(keccak_round_cnt),
    .state_o(iota_o)
);

assign keccak_state_d = keccak_busy_o ? iota_o : keccak_state_q;


// Store the round result in a register
always_ff @(posedge clk_i, negedge rst_ni) begin
    if (!rst_ni) begin
        // async reset only
        keccak_state_q <= '0;
    end else begin
        // synchronous logic
        if (shake_done_o) begin
            keccak_state_q <= '0;
        end else begin
            keccak_state_q <= keccak_state_d;
        end
    end
end

// Backconverse the state to the output string
state_to_string u_store (
    .state_i(keccak_state_q),
    .string_o(string_o)
);

endmodule
