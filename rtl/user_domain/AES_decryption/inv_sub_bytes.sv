// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Ioan Popescu <ipopescu@ethz.ch>

module inv_sub_bytes #(
    parameter  int num_bytes = 4,
    localparam int Byte      = 8
) (
    input logic  [num_bytes * Byte - 1 : 0] bytes_i,
    output logic [num_bytes * Byte - 1 : 0] bytes_o
);

    generate
        for (genvar i = 0; i < num_bytes; i++) begin
            inv_sbox_cf_small i_sbox_lut (
                .in_i (bytes_i[(i + 1) * Byte - 1 : i * Byte]),
                .out_o(bytes_o[(i + 1) * Byte - 1 : i * Byte])
            );
        end
    endgenerate

endmodule