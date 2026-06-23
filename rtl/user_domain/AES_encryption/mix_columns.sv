// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Tim Wyss <tiwyss@ethz.ch>

module mix_columns (
    input [127:0] block_i,
    output [127:0] block_o
);
    logic [31:0] c0, c1, c2, c3;
    logic [7:0] t0, t1, t2, t3;

    // Split blocks into columns
    assign c0 = block_i[127:96];
    assign c1 = block_i[95:64];
    assign c2 = block_i[63:32];
    assign c3 = block_i[31:0];

    /* This implements the following optimization of the MixColumns step:
     *
     * def mix_single_column(self, a):
     *    t = a[0] ^ a[1] ^ a[2] ^ a[3]
     *    u = a[0]
     *    a[0] ^= t ^ xtime(a[0] ^ a[1])
     *    a[1] ^= t ^ xtime(a[1] ^ a[2])
     *    a[2] ^= t ^ xtime(a[2] ^ a[3])
     *    a[3] ^= t ^ xtime(a[3] ^ u)
     *
     * See: https://github.com/p4-team/crypto-commons/blob/master/crypto_commons/symmetrical/aes.py#L234
     */

    function logic [7:0] g_double(input logic [7:0] a);
        begin
            g_double = a[7] ? ((a << 1) ^ 8'h1b) : (a << 1);
        end
    endfunction

    assign t0 = c0[31:24] ^ c0[23:16] ^ c0[15:8] ^ c0[7:0];
    assign block_o[127:96] = {
        t0 ^ c0[31:24] ^ g_double(c0[31:24] ^ c0[23:16]), 
        t0 ^ c0[23:16] ^ g_double(c0[23:16] ^ c0[15:8]),
        t0 ^ c0[15:8] ^ g_double(c0[15:8] ^ c0[7:0]),
        t0 ^ c0[7:0] ^ g_double(c0[7:0] ^ c0[31:24])
    };

    assign t1 = c1[31:24] ^ c1[23:16] ^ c1[15:8] ^ c1[7:0];
    assign block_o[95:64] = {
        t1 ^ c1[31:24] ^ g_double(c1[31:24] ^ c1[23:16]), 
        t1 ^ c1[23:16] ^ g_double(c1[23:16] ^ c1[15:8]),
        t1 ^ c1[15:8] ^ g_double(c1[15:8] ^ c1[7:0]),
        t1 ^ c1[7:0] ^ g_double(c1[7:0] ^ c1[31:24])
    };

    assign t2 = c2[31:24] ^ c2[23:16] ^ c2[15:8] ^ c2[7:0];
    assign block_o[63:32] = {
        t2 ^ c2[31:24] ^ g_double(c2[31:24] ^ c2[23:16]), 
        t2 ^ c2[23:16] ^ g_double(c2[23:16] ^ c2[15:8]),
        t2 ^ c2[15:8] ^ g_double(c2[15:8] ^ c2[7:0]),
        t2 ^ c2[7:0] ^ g_double(c2[7:0] ^ c2[31:24])
    };

    assign t3 = c3[31:24] ^ c3[23:16] ^ c3[15:8] ^ c3[7:0];
    assign block_o[31:0] = {
        t3 ^ c3[31:24] ^ g_double(c3[31:24] ^ c3[23:16]), 
        t3 ^ c3[23:16] ^ g_double(c3[23:16] ^ c3[15:8]),
        t3 ^ c3[15:8] ^ g_double(c3[15:8] ^ c3[7:0]),
        t3 ^ c3[7:0] ^ g_double(c3[7:0] ^ c3[31:24])
    };

endmodule