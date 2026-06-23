// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;
import keccak_pkg::RC;


module iota #(
    parameter int N_ROUNDS = 24
)(
    input keccak_state_t state_i,
    input logic [$clog2(N_ROUNDS)-1:0] round_cnt_i,
    output keccak_state_t state_o
);

    // st->A[0][0] ^= KECCAKF_ROUND_CONSTANTS[ir];
    always_comb begin
        state_o = state_i;
        state_o[0][0] = state_i[0][0] ^ RC[round_cnt_i];
    end

endmodule
