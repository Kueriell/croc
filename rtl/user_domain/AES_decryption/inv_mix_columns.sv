// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>

module inv_mix_columns (
    input [127:0] block_i,
    output [127:0] block_o
);
    logic [31:0] c0, c1, c2, c3;
    logic [7:0] t0, t1, t2, t3;
    logic [7:0] t8_0, t8_1, t8_2, t8_3;

    // Split blocks into columns
    assign c0 = block_i[127:96];
    assign c1 = block_i[95:64];
    assign c2 = block_i[63:32];
    assign c3 = block_i[31:0];

    // Base Multipliers
    //x^2
    function logic [7:0] g_mul2(input logic [7:0] a);
        begin
            g_mul2 = a[7] ? ((a << 1) ^ 8'h1b) : (a << 1);
        end
    endfunction
    //x^4
    function logic [7:0] g_mul4(input logic [7:0] a);
        begin
            g_mul4 = g_mul2(g_mul2(a));
        end
    endfunction
    //x^8
    function logic [7:0] g_mul8(input logic [7:0] a);
        begin
            g_mul8 = g_mul2(g_mul4(a));
        end
    endfunction

    // --- Column 0 ---
    assign t0   = c0[31:24] ^ c0[23:16] ^ c0[15:8] ^ c0[7:0];
    assign t8_0 = g_mul8(t0);
    
    assign block_o[127:96] = {
        t8_0 ^ g_mul4(c0[31:24] ^ c0[15:8]) ^ g_mul2(c0[31:24] ^ c0[23:16]) ^ t0 ^ c0[31:24],
        t8_0 ^ g_mul4(c0[23:16] ^ c0[7:0])  ^ g_mul2(c0[23:16] ^ c0[15:8])  ^ t0 ^ c0[23:16],
        t8_0 ^ g_mul4(c0[15:8]  ^ c0[31:24])^ g_mul2(c0[15:8]  ^ c0[7:0])   ^ t0 ^ c0[15:8],
        t8_0 ^ g_mul4(c0[7:0]   ^ c0[23:16])^ g_mul2(c0[7:0]   ^ c0[31:24]) ^ t0 ^ c0[7:0]
    };

    // --- Column 1 ---
    assign t1   = c1[31:24] ^ c1[23:16] ^ c1[15:8] ^ c1[7:0];
    assign t8_1 = g_mul8(t1);
    
    assign block_o[95:64] = {
        t8_1 ^ g_mul4(c1[31:24] ^ c1[15:8]) ^ g_mul2(c1[31:24] ^ c1[23:16]) ^ t1 ^ c1[31:24],
        t8_1 ^ g_mul4(c1[23:16] ^ c1[7:0])  ^ g_mul2(c1[23:16] ^ c1[15:8])  ^ t1 ^ c1[23:16],
        t8_1 ^ g_mul4(c1[15:8]  ^ c1[31:24])^ g_mul2(c1[15:8]  ^ c1[7:0])   ^ t1 ^ c1[15:8],
        t8_1 ^ g_mul4(c1[7:0]   ^ c1[23:16])^ g_mul2(c1[7:0]   ^ c1[31:24]) ^ t1 ^ c1[7:0]
    };

    // --- Column 2 ---
    assign t2   = c2[31:24] ^ c2[23:16] ^ c2[15:8] ^ c2[7:0];
    assign t8_2 = g_mul8(t2);
    
    assign block_o[63:32] = {
        t8_2 ^ g_mul4(c2[31:24] ^ c2[15:8]) ^ g_mul2(c2[31:24] ^ c2[23:16]) ^ t2 ^ c2[31:24],
        t8_2 ^ g_mul4(c2[23:16] ^ c2[7:0])  ^ g_mul2(c2[23:16] ^ c2[15:8])  ^ t2 ^ c2[23:16],
        t8_2 ^ g_mul4(c2[15:8]  ^ c2[31:24])^ g_mul2(c2[15:8]  ^ c2[7:0])   ^ t2 ^ c2[15:8],
        t8_2 ^ g_mul4(c2[7:0]   ^ c2[23:16])^ g_mul2(c2[7:0]   ^ c2[31:24]) ^ t2 ^ c2[7:0]
    };

    // --- Column 3 ---
    assign t3   = c3[31:24] ^ c3[23:16] ^ c3[15:8] ^ c3[7:0];
    assign t8_3 = g_mul8(t3);
    
    assign block_o[31:0] = {
        t8_3 ^ g_mul4(c3[31:24] ^ c3[15:8]) ^ g_mul2(c3[31:24] ^ c3[23:16]) ^ t3 ^ c3[31:24],
        t8_3 ^ g_mul4(c3[23:16] ^ c3[7:0])  ^ g_mul2(c3[23:16] ^ c3[15:8])  ^ t3 ^ c3[23:16],
        t8_3 ^ g_mul4(c3[15:8]  ^ c3[31:24])^ g_mul2(c3[15:8]  ^ c3[7:0])   ^ t3 ^ c3[15:8],
        t8_3 ^ g_mul4(c3[7:0]   ^ c3[23:16])^ g_mul2(c3[7:0]   ^ c3[31:24]) ^ t3 ^ c3[7:0]
    };

endmodule