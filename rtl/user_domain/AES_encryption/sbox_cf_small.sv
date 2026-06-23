// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Tim Wyss <tiwyss@ethz.ch>

module sbox_cf_small (
    input  logic [7:0] in_i,
    output logic [7:0] out_o
);

    // --- Inlined Functions ---

    function automatic logic [1:0] gf_2_2_mul(input logic [1:0] a, input logic [1:0] b);
        logic t;
        t = (a[1] ^ a[0]) & (b[1] ^ b[0]);
        gf_2_2_mul[1] = t ^ (a[1] & b[1]);
        gf_2_2_mul[0] = t ^ (a[0] & b[0]);
    endfunction

    function automatic logic [1:0] gf_2_2_sclw2(input logic [1:0] a);
        gf_2_2_sclw2[1] = a[0];
        gf_2_2_sclw2[0] = a[1] ^ a[0];
    endfunction

    function automatic logic [1:0] gf_2_2_sqr_sclw(input logic [1:0] a);
        gf_2_2_sqr_sclw[1] = a[1] ^ a[0];
        gf_2_2_sqr_sclw[0] = a[0];
    endfunction

    function automatic logic [1:0] gf_2_2_sqr(input logic [1:0] a);
        gf_2_2_sqr[1] = a[0];
        gf_2_2_sqr[0] = a[1];
    endfunction

    function automatic logic [1:0] gf_2_2_sqr_sclw2(input logic [1:0] a);
        gf_2_2_sqr_sclw2[1] = a[1];
        gf_2_2_sqr_sclw2[0] = a[1] ^ a[0];
    endfunction

    function automatic logic [1:0] gf_2_2_inv(input logic [1:0] a);
        gf_2_2_inv[1] = a[0];
        gf_2_2_inv[0] = a[1];
    endfunction

    function automatic logic [3:0] gf_2_4_mul(input logic [3:0] a, input logic [3:0] b);
        logic [1:0] t0, t1, t2, t3;
        t0 = gf_2_2_mul(a[1:0], b[1:0]);
        t1 = gf_2_2_mul(a[3:2], b[3:2]);
        t2 = gf_2_2_mul(a[3:2] ^ a[1:0], b[3:2] ^ b[1:0]);
        t3 = gf_2_2_sclw2(t1);
        gf_2_4_mul = {(t2 ^ t0), (t3 ^ t0)};
    endfunction

    function automatic logic [3:0] gf_2_4_sqr_scl(input logic [3:0] a);
        logic [1:0] t10, t11;
        t10 = gf_2_2_sqr_sclw(a[1:0]);
        t11 = gf_2_2_sqr(a[3:2]);
        gf_2_4_sqr_scl = {(t10 ^ t11), t10};
    endfunction

    function automatic logic [3:0] gf_2_4_inv(input logic [3:0] a);
        logic [1:0] t, t0, t1, t2, q1, q0;
        t = a[3:2] ^ a[1:0];
        t0 = gf_2_2_mul(t, a[1:0]);
        t1 = gf_2_2_sqr_sclw2(a[3:2]);
        t2 = gf_2_2_inv(t0 ^ t1);
        q1 = gf_2_2_mul(t2, a[3:2]);
        q0 = gf_2_2_mul(t2, t);
        gf_2_4_inv = {q1, q0};
    endfunction

    // --- Main Logic ---

    logic [7:0] g_in, g_out;
    logic [3:0] t1, t2, t3, t4, t5, t6, t7;

    // Mapping from GF(2^8) to GF(((2^2)^2)^2)
    assign g_in[7] = in_i[7] ^ in_i[2];
    assign g_in[6] = in_i[7] ^ in_i[4];
    assign g_in[5] = in_i[6] ^ in_i[5] ^ in_i[1] ^ in_i[0];
    assign g_in[4] = in_i[7] ^ in_i[6] ^ in_i[5] ^ in_i[0];
    assign g_in[3] = in_i[7] ^ in_i[6] ^ in_i[5] ^ in_i[4] ^ in_i[3] ^ in_i[1];
    assign g_in[2] = in_i[6] ^ in_i[3] ^ in_i[2] ^ in_i[1];
    assign g_in[1] = in_i[6] ^ in_i[5] ^ in_i[0];
    assign g_in[0] = in_i[6] ^ in_i[3] ^ in_i[2] ^ in_i[1] ^ in_i[0];

    // GF(((2^2)^2)^2) Inverter
    assign t1 = g_in[7:4] ^ g_in[3:0];
    assign t2 = gf_2_4_mul(g_in[7:4], g_in[3:0]);
    assign t3 = gf_2_4_sqr_scl(t1);
    assign t4 = t2 ^ t3;
    assign t5 = gf_2_4_inv(t4);
    assign t6 = gf_2_4_mul(t5, g_in[3:0]);
    assign t7 = gf_2_4_mul(t5, g_in[7:4]);
    assign g_out = {t6, t7};

    // Mapping from GF((2^4)^2) to GF(2^8) Combined with Affine Transformation
    assign out_o[7] = g_out[5] ^ g_out[3] ^ g_out[1];
    assign out_o[6] = ~( g_out[7] ^ g_out[5] ^ g_out[3] ^ g_out[1] );
    assign out_o[5] = ~( g_out[6] ^ g_out[4] ^ g_out[0] );
    assign out_o[4] = g_out[7] ^ g_out[3] ^ g_out[1];
    assign out_o[3] = g_out[7] ^ g_out[6] ^ g_out[3] ^ g_out[1];
    assign out_o[2] = g_out[6] ^ g_out[5] ^ g_out[4] ^ g_out[3] ^ g_out[2] ^ g_out[1];
    assign out_o[1] = ~( g_out[5] ^ g_out[4] ^ g_out[1] );
    assign out_o[0] = ~( g_out[6] ^ g_out[1] );

endmodule