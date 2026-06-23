// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements keccak_f[1600] according to NIST FIPS 202

#include "../inc/keccak_f.h"
#include <string.h>


// Let S denote a string of b bits that represents the state for the KECCAK-p[b, nr] permutation. 
// The corresponding state array, denoted by A, is defined as follows:
// For all triples (x, y, z) such that 0 = x < 5, 0 = y < 5, and 0 = z < w,
// A[x, y, z] = S [w(5y + x) + z].

// ----- All the Mappings KECCAK is using -----
// Function to rotate everything by n to the left
uint64_t ROTL64(uint64_t x, unsigned int n) {
    return (x << n) | (x >> (keccak_lane_size - n));
}

// Theta:
void Theta(keccak_state *st)
{
    uint64_t C[5], D[5];

    // C[x] = A[x,0] ^ A[x,1] ^ ... ^ A[x,4]
    for (int x = 0; x < 5; x++) {
        C[x] = st->A[x][0] ^ st->A[x][1] ^ st->A[x][2] ^ st->A[x][3] ^ st->A[x][4];
    }

    // D[x] = C[x-1] ^ ROT(C[x+1], 1)
    for (int x = 0; x < 5; x++) {
        D[x] = C[(x+4)%5] ^ ROTL64(C[(x+1)%5], 1);
    }

    // A[x,y] ^= D[x]
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            st->A[x][y] ^= D[x];
        }
    }
}

// Rho:
// Offset Table of Rho
const unsigned int rho_offsets[5][5] = {
    {   0,  36,   3, 105, 210 },
    {   1, 300,  10,  45,  66 },
    { 190,   6, 171,  15, 253 },
    {  28,  55, 153,  21, 120 },
    {  91, 276, 231, 136,  78 }
};

void Rho(keccak_state *st)
{
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            st->A[x][y] = ROTL64(st->A[x][y], (rho_offsets[x][y] % keccak_lane_size));
        }
    }
}

// Pi:
void Pi(keccak_state *st)
{
    // Generate an Intermediate State
    uint64_t temp[5][5];

    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            temp[x][y] = st->A[(x + 3*y) % 5][x];
        }
    }

    // Copy the entries into the real state
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            st->A[x][y] = temp[x][y];
        }
    }
}

// Chi:
void Chi(keccak_state *st)
{
    uint64_t temp[5][5];

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            temp[x][y] =
                st->A[x][y] ^
                ((~st->A[(x + 1) % 5][y]) & st->A[(x + 2) % 5][y]);
        }
    }

    // Copy the entries into the real state
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            st->A[x][y] = temp[x][y];
        }
    }
}

// Iota:
const uint64_t KECCAKF_ROUND_CONSTANTS[24] = {
    0x0000000000000001ULL,
    0x0000000000008082ULL,
    0x800000000000808AULL,
    0x8000000080008000ULL,
    0x000000000000808BULL,
    0x0000000080000001ULL,
    0x8000000080008081ULL,
    0x8000000000008009ULL,
    0x000000000000008AULL,
    0x0000000000000088ULL,
    0x0000000080008009ULL,
    0x000000008000000AULL,
    0x000000008000808BULL,
    0x800000000000008BULL,
    0x8000000000008089ULL,
    0x8000000000008003ULL,
    0x8000000000008002ULL,
    0x8000000000000080ULL,
    0x000000000000800AULL,
    0x800000008000000AULL,
    0x8000000080008081ULL,
    0x8000000000008080ULL,
    0x0000000080000001ULL,
    0x8000000080008008ULL
};

void Iota(keccak_state *st, int ir)
{
    st->A[0][0] ^= KECCAKF_ROUND_CONSTANTS[ir];
}

// KECCAK-p:
// In-place permutation on the 1600-bit state
void keccak_p(keccak_state *st)
{

    // nr (24) rounds of KECCAK-p[b(1600), nr(24)]
    for (int ir = 0; ir < nr; ir++) {

        // state <- Theta(state)
        Theta(st);

        // state <- Rho(state)
        Rho(st);

        // state <- Pi(state)
        Pi(st);

        // state <- Chi(state)
        Chi(st);

        // state <- Iota(state)
        Iota(st, ir);

    }
}
