// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>

module inv_key_expansion_round (

    input  logic [127:0] current_key_i,
    input  logic   [4:0] round_i,       // counts down from 10 to 1
    output logic [127:0] prev_key_o

);
    localparam int Round9  = 9;
    localparam int Round10 = 10;

    logic [31:0] w0_curr, w1_curr, w2_curr, w3_curr;
    logic [31:0] w0_prev, w1_prev, w2_prev, w3_prev;
    logic [31:0] rot_word, s2, rcon;

    // Split the incoming key into four 32-bit words
    assign w0_curr = current_key_i[127:96];
    assign w1_curr = current_key_i[95:64];
    assign w2_curr = current_key_i[63:32];
    assign w3_curr = current_key_i[31:0];

    // Recover Words 1, 2, and 3 via direct XOR reversal
    assign w3_prev = w3_curr ^ w2_curr;
    assign w2_prev = w2_curr ^ w1_curr;
    assign w1_prev = w1_curr ^ w0_curr;

    // Prepare RotWord for Word 0 recovery
    assign rot_word = {w3_prev[23:0], w3_prev[31:24]};

    // SubBytes (Strictly the FORWARD S-Box)
    sub_bytes #(
        .num_bytes(4)
    ) i_sub_bytes (
        .bytes_i(rot_word),
        .bytes_o(s2)
    );

    always_comb begin
        // Compute rcon value
        unique case (round_i)
            Round9  : rcon = 32'h1b << 8'd24;
            Round10 : rcon = 32'h36 << 8'd24;
            default : rcon = 32'h01 << (8'd23 + round_i);
        endcase

        // Recover Word 0
        w0_prev = w0_curr ^ s2 ^ rcon;
        
        // Assemble the previous 128-bit key
        prev_key_o = {w0_prev, w1_prev, w2_prev, w3_prev};
    end

endmodule