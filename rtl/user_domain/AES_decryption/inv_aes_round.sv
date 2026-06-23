// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>

module inv_aes_round (

    input logic          final_round_i,
    input logic  [127:0] round_key_i,
    input logic  [127:0] block_i,
    
    output logic [127:0] block_o
);
    
    logic [127:0] s1, s2, s3, s4;

    //Inv Shift Rows
    assign s1[127:96] = {block_i[127:120], block_i[ 23: 16], block_i[ 47: 40], block_i[ 71: 64]}; 
    assign s1[ 95:64] = {block_i[ 95: 88], block_i[119:112], block_i[ 15:  8], block_i[ 39: 32]}; 
    assign s1[ 63:32] = {block_i[ 63: 56], block_i[ 87: 80], block_i[111:104], block_i[  7:  0]}; 
    assign s1[ 31: 0] = {block_i[ 31: 24], block_i[ 55: 48], block_i[ 79: 72], block_i[103: 96]}; 

    //Inv Sub bytes
    inv_sub_bytes #(
        .num_bytes(16)
    ) i_inv_sub_bytes (
        .bytes_i(s1),
        .bytes_o(s2)
    );

    //Add round key
    assign s3 = s2 ^ round_key_i;

    //Inv mix cols
    inv_mix_columns i_inv_mix_columns (
        .block_i(s3),
        .block_o(s4)
    );

    assign block_o = (final_round_i) ? s3 : s4;

endmodule