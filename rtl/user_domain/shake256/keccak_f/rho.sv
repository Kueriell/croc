// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;
import keccak_pkg::RHO;

module rho (
    input  keccak_state_t state_i,
    output keccak_state_t state_o
);

// st->A[x][y] = ROTL64(st->A[x][y], (rho_offsets[x][y] % keccak_lane_size));
// ROTL64 : (x << n) | (x >> (keccak_lane_size - n));
always_comb begin
    for (int y = 0; y < 5; y++) begin
        for (int x = 0; x < 5; x++) begin
            state_o[x][y] = (state_i[x][y] << RHO[x][y] |state_i[x][y] >> (64 - RHO[x][y]) );
        end
    end
end


endmodule