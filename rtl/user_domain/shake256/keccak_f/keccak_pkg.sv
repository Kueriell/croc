// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Cyrill Rüttimann <cruettima@ethz.ch>

package keccak_pkg;

    // 5×5×64-Bit State
    typedef logic [4:0][4:0][63:0] keccak_state_t;

    // Round Constants
    localparam logic [63:0] RC[24] = '{
        64'h0000000000000001, 64'h0000000000008082,
        64'h800000000000808A, 64'h8000000080008000,
        64'h000000000000808B, 64'h0000000080000001,
        64'h8000000080008081, 64'h8000000000008009,
        64'h000000000000008A, 64'h0000000000000088,
        64'h0000000080008009, 64'h000000008000000A,
        64'h000000008000808B, 64'h800000000000008B,
        64'h8000000000008089, 64'h8000000000008003,
        64'h8000000000008002, 64'h8000000000000080,
        64'h000000000000800A, 64'h800000008000000A,
        64'h8000000080008081, 64'h8000000000008080,
        64'h0000000080000001, 64'h8000000080008008
    };

    // Rho Offsets
    localparam logic [5:0] RHO[5][5] = '{
        '{  0, 36,  3, 41, 18 },
        '{  1, 44, 10, 45,  2 },
        '{ 62,  6, 43, 15, 61 },
        '{ 28, 55, 25, 21, 56 },
        '{ 27, 20, 39,  8, 14 }
    };

endpackage
