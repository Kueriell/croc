// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;

module state_to_string(
    input  keccak_state_t state_i,
    output logic [1599:0] string_o
);
    always_comb begin
        for (int y = 0; y < 5; y++)
            for (int x = 0; x < 5; x++)
                for (int z = 0; z < 64; z++)
                    string_o[64*(5*y + x) + z] = state_i[x][y][z];
    end
endmodule
