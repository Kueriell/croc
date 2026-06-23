// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

import keccak_pkg::keccak_state_t;

module theta (
    input  keccak_state_t state_i,
    output keccak_state_t state_o
);

// local (temproal) wires
logic [4:0][63:0] state_C;
logic [4:0][63:0] state_D;

always_comb begin

    // C[x] = A[x,0] ^ A[x,1] ^ ... ^ A[x,4]
    for (int x = 0; x < 5; x++) begin
        automatic logic [63:0] t0 = state_i[x][0] ^ state_i[x][1];
        automatic logic [63:0] t1 = state_i[x][2] ^ state_i[x][3];
        state_C[x] = t0 ^ t1 ^ state_i[x][4];
    end

    // D[x] = C[x-1] ^ ROT(C[x+1], 1)
    state_D[0] = state_C[4] ^ ({state_C[1][62:0], state_C[1][63]});
    state_D[1] = state_C[0] ^ ({state_C[2][62:0], state_C[2][63]});
    state_D[2] = state_C[1] ^ ({state_C[3][62:0], state_C[3][63]});
    state_D[3] = state_C[2] ^ ({state_C[4][62:0], state_C[4][63]});
    state_D[4] = state_C[3] ^ ({state_C[0][62:0], state_C[0][63]});

    // A[x,y] ^= D[x]
    for (int x = 0; x < 5; x++) begin
        for (int y = 0; y < 5; y++) begin
            state_o[x][y] = state_i[x][y] ^ state_D[x];
        end
    end
end
endmodule