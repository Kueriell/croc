// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;

module string_to_state(
    input  logic [1599:0] string_i,
    output keccak_state_t state_o
);
    always_comb begin
        for (int y = 0; y < 5; y++)
            for (int x = 0; x < 5; x++)
                for (int z = 0; z < 64; z++)
                    state_o[x][y][z] = string_i[64*(5*y + x) + z];
    end
endmodule
