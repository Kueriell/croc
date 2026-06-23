// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;

module pi (
    input keccak_state_t state_i,
    output keccak_state_t state_o
);

// st->A[x][y] = st->A[(2x + 3*y) % 5][x];
int xp, yp;

always_comb begin
    state_o = '0;
    for (int x = 0; x < 5; x++) begin
        for (int y = 0; y < 5; y++) begin
            xp = y;
            yp = (2*x + 3*y) % 5;
            state_o[xp][yp] = state_i[x][y];
        end
    end
end


endmodule