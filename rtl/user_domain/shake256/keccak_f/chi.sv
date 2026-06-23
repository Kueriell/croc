// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;

module chi (
    input keccak_state_t state_i,
    output keccak_state_t state_o
);

logic [4:0][4:0][63:0] inv;
// st->A[x][y] = st->A[x][y] ^ ((~st->A[(x + 1) % 5][y]) & st->A[(x + 2) % 5][y]);
always_comb begin
    for (int y = 0; y < 5; y++) begin

        // Calculate the inverse first:
        for (int x = 0; x < 5; x++) begin
            inv[x][y] = ~state_i[x][y];
        end
        state_o[0][y] = state_i[0][y] ^ ((inv[1][y] & state_i[2][y]));
        state_o[1][y] = state_i[1][y] ^ ((inv[2][y] & state_i[3][y]));
        state_o[2][y] = state_i[2][y] ^ ((inv[3][y] & state_i[4][y]));
        state_o[3][y] = state_i[3][y] ^ ((inv[4][y] & state_i[0][y]));
        state_o[4][y] = state_i[4][y] ^ ((inv[0][y] & state_i[1][y]));
        
    end
end
endmodule