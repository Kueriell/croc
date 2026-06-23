// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "obi/typedef.svh"

package user_pkg;

  //////////////////
  // User Manager //
  //////////////////

  // None


  ///////////////////////
  // User Subordinates //
  ///////////////////////

  // The base address of the user domain can be retrived from `croc_pkg::UserBaseAddr`
  // Recommended: place subordinates at 4KB boundaries (32'hXXXX_X000)
  localparam bit [31:0] UserRomAddr     = croc_pkg::UserBaseAddr + 32'h0000_0000;
  localparam bit [31:0] UserShakeAddr   = croc_pkg::UserBaseAddr + 32'h0000_1000;
  localparam bit [31:0] UserAESenAddr   = croc_pkg::UserBaseAddr + 32'h0000_2000;
  localparam bit [31:0] UserAESdeAddr   = croc_pkg::UserBaseAddr + 32'h0000_3000;

  /// Enum with user domain demultiplexer subordinate idxs
  typedef enum bit [4:0]  {
    UserError  = 0,
    UserRom    = 1,
    UserShake  = 2,
    UserAESen  = 3,
    UserAESde  = 4
  } user_demux_outputs_e;

  /// Address rules given to user domain demultiplexer (see croc_pkg.sv for examples)
  localparam croc_pkg::addr_map_rule_t [3:0] UserAddrMap = '{
    '{ idx: UserRom,     start_addr: UserRomAddr,    end_addr: (UserRomAddr   + 32'h0000_1000) },
    '{ idx: UserShake,   start_addr: UserShakeAddr,  end_addr: (UserShakeAddr + 32'h0000_1000) },
    '{ idx: UserAESen,   start_addr: UserAESenAddr,  end_addr: (UserAESenAddr + 32'h0000_1000) },
    '{ idx: UserAESde,   start_addr: UserAESdeAddr,  end_addr: (UserAESdeAddr + 32'h0000_1000) }
  };
  // All addresses outside the defined address rules go to the error subordinate

  // +1 for additional OBI error
  localparam int unsigned NumDemuxSbr = $size(UserAddrMap) + 1;

endpackage
