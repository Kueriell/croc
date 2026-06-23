// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Tim Wyss <tiwyss@ethz.ch>

module key_expansion_round (
    input  logic [127:0] prev_key_i,
    input  logic   [4:0] round_i,
    output logic [127:0] next_key_o
);
    localparam int Round9  = 9;
    localparam int Round10 = 10;

    logic [31:0] last_word, s1, s2, rcon, w0, w1, w2, w3;

    // Rot Word
    assign last_word = prev_key_i[31:0];
    assign s1        = {last_word[23:0], last_word[31:24]};

    // Sub Bytes
    sub_bytes i_sub_bytes(
        .bytes_i(s1),
        .bytes_o(s2)
    );

    always_comb begin
        // Compute rcon value
        unique case (round_i)
            Round9  : rcon = 32'h1b << 8'd24;
            Round10 : rcon = 32'h36 << 8'd24;
            default : rcon = 32'h01 << (8'd23 + round_i);
        endcase

        // Compute next key
        w0 = s2 ^ prev_key_i[127:96] ^ rcon;
        w1 = w0 ^ prev_key_i[95:64];
        w2 = w1 ^ prev_key_i[63:32];
        w3 = w2 ^ prev_key_i[31:0];
        
        next_key_o = {w0, w1, w2, w3};
    end   

endmodule