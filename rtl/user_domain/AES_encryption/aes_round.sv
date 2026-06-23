// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Tim Wyss <tiwyss@ethz.ch>

module aes_round (
    input logic          final_round_i,
    input logic  [127:0] round_key_i,
    input logic  [127:0] block_i,
    
    output logic [127:0] block_o
);
    
    logic [127:0] s1, s2, s3, s4;


    assign s4 = (final_round_i) ? s2 : s3; // Last round MUX

    // SubBytes
    sub_bytes #(
        .num_bytes(16)
    ) i_sub_bytes (
        .bytes_i(block_i),
        .bytes_o(s1)
    );

    // Shift Rows
    // The 4x4 matrix is constructed col by col, thus each of the assign statements represent one columns
    assign s2[127:96] = {s1[127:120], s1[ 87: 80], s1[ 47: 40], s1[  7: 0]};
    assign s2[ 95:64] = {s1[ 95: 88], s1[ 55: 48], s1[ 15:  8], s1[103:96]};
    assign s2[ 63:32] = {s1[ 63: 56], s1[ 23: 16], s1[111:104], s1[ 71:64]};
    assign s2[ 31: 0] = {s1[ 31: 24], s1[119:112], s1[ 79: 72], s1[ 39:32]};

    
    // Mix Columns
    mix_columns i_mix_columns (
        .block_i(s2),
        .block_o(s3)
    );

    // Add Round Key
    assign block_o = s4 ^ round_key_i;

endmodule