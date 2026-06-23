// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements Sponge according to NIST FIPS 202

#include "../inc/sponge.h"
#include "../inc/keccak_f.h"
#include <string.h>

/* -------------------------------------------------------------------------
   Apply one permutation f to the full b-bit state S.
   This corresponds to Algorithm 8, Step 6: S = f(S ? (P_i || 0^c)).
   ------------------------------------------------------------------------- */
static void sponge_permute(sponge_t *sp)
{

    // Apply Keccak-p directly on the internal state
    keccak_p(&sp->st);
    sp->absorbed = 0;   // reset rate pointer after permutation

}

/* -------------------------------------------------------------------------
   Initialize sponge state:
   Algorithm 8, Step 5: S = 0^b.
   ------------------------------------------------------------------------- */
void sponge_init(sponge_t *sp, size_t rate)
{
    memset(&sp->st, 0, sizeof(keccak_state));   // S = 0^b
    sp->rate = rate;                            // bitrate r
    sp->absorbed = 0;

}

/* -------------------------------------------------------------------------
   Internal helpers: FIPS-202 byte <-> lane mapping

   For a byte index i in the 1600-bit state string S:

       lane_index = i / 8
       x = lane_index % 5
       y = lane_index / 5
       bit_offset = (i % 8) * 8

   Byte i occupies bits [bit_offset .. bit_offset+7] of lane A[x][y].
   ------------------------------------------------------------------------- */
static inline void absorb_byte(keccak_state *st, size_t i, uint8_t b)
{
    size_t lane  = i >> 3;          // i / 8
    size_t x     = lane % 5;
    size_t y     = lane / 5;
    size_t shift = (i & 7) * 8;     // (i % 8) * 8

    st->A[x][y] ^= ((uint64_t)b) << shift;
}

static inline uint8_t squeeze_byte(const keccak_state *st, size_t i)
{
    size_t lane  = i >> 3;          // i / 8
    size_t x     = lane % 5;
    size_t y     = lane / 5;
    size_t shift = (i & 7) * 8;     // (i % 8) * 8

    return (st->A[x][y] >> shift) & 0xFF;
}

/* -------------------------------------------------------------------------
   Absorb input N into the sponge.
   Implements Algorithm 8, Step 1 (N || pad) and Step 6 (blockwise XOR + f).
   We XOR input bytes into the first r bytes of S. Whenever r bytes are filled,
   we apply the permutation f.
   ------------------------------------------------------------------------- */
void sponge_absorb(sponge_t *sp, const uint8_t *N, size_t len)
{
    while (len > 0) {

        if (sp->absorbed == sp->rate)
            sponge_permute(sp);

        size_t space = sp->rate - sp->absorbed;
        size_t chunk = (len < space) ? len : space;

        for (size_t i = 0; i < chunk; i++)
            absorb_byte(&sp->st, sp->absorbed + i, N[i]);

        sp->absorbed += chunk;
        N += chunk;
        len -= chunk;
    }

}

/* -------------------------------------------------------------------------
   Apply pad10*1 with SHAKE domain separation (0x1F).
   This completes the final block P_{n-1} and then applies one permutation.
   Corresponds to Algorithm 8, Step 1 (padding) and final Step 6.
   ------------------------------------------------------------------------- */
void sponge_pad10x1(sponge_t *sp)
{
    // If the current block is full, permute first.
    if (sp->absorbed == sp->rate)
        sponge_permute(sp);

    // XOR 0x1F at position 'absorbed'
    absorb_byte(&sp->st, sp->absorbed, 0x1F);

    // XOR 0x80 at the last byte of the rate
    absorb_byte(&sp->st, sp->rate - 1, 0x80);

    // Final permutation after padding
    sponge_permute(sp);
}

/* -------------------------------------------------------------------------
   Squeezing phase:
   Implements Algorithm 8, Steps 710.
   - Output Z = Z || Trunc_r(S)
   - If more output is needed, apply S = f(S) and repeat.
   ------------------------------------------------------------------------- */
void sponge_squeeze(sponge_t *sp, uint8_t *out, size_t outlen)
{
    while (outlen > 0) {

        size_t block = (outlen < sp->rate) ? outlen : sp->rate;

        for (size_t i = 0; i < block; i++)
            out[i] = squeeze_byte(&sp->st, i);

        out += block;
        outlen -= block;

        if (outlen > 0)
            sponge_permute(sp);
    }
}
