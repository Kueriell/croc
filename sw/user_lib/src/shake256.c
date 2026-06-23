// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements SHAKE-256 according to NIST FIPS 202

#include "../inc/shake256.h"
#include "../inc/sponge.h"

/* -------------------------------------------------------------------------
   SHAKE256 domain separation byte (0x1F):

   FIPS 202 defines the SHAKE XOFs as:
       SHAKE256(M, d) = KECCAK[512]( M || 1111 , d )

   The 4-bit suffix "1111" is appended to the message *before* the
   standard Keccak pad10*1 padding is applied.

   In Keccak, bits are packed LSB-first into bytes. Therefore:
     - The first bit that enters the byte is the least significant bit.
     - The suffix bits "1111" occupy bit positions 1..4.
     - The leading '1' bit of pad10*1 occupies bit position 0.

   Combined, the suffix and the pad10*1 leading bit form the 5-bit pattern:
       1 (pad10*1) + 1111 (suffix)
       
   Packed LSB-first into a byte, this becomes:
       bit0 = 1
       bit1 = 1
       bit2 = 1
       bit3 = 1
       bit4 = 1
       bit5 = 0
       bit6 = 0
       bit7 = 0

   Which corresponds to:
       0b00011111 = 0x1F

   This is why SHAKE256 uses 0x1F as its domain separation byte.
   ------------------------------------------------------------------------- */
static sponge_t sp;

void shake256(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen)
{

    sponge_init(&sp, 136);          // SHAKE256 bitrate = 1088 bits

    // Absorb the input message into the sponge
    sponge_absorb(&sp, in, inlen);

    // Apply SHAKE-specific padding: domain separation 0x1F + pad10*1
    sponge_pad10x1(&sp);

    // Squeeze the requested number of output bytes
    sponge_squeeze(&sp, out, outlen);
}
