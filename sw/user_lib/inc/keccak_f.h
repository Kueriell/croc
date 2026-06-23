// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements keccak_f[1600] according to NIST FIPS 202

#ifndef KECCAK_f_H
#define KECCAK_f_H

#include <stdint.h>

#define state_size_b   1600        // State size in bits
#define keccak_lane_size   64      // Lane size = b/25
#define nr  24                     // Number of rounds for KECCAK-p[1600, 24]

extern const unsigned int rho_offsets[5][5];

typedef struct {
    uint64_t A[5][5];          // 25 lanes à 64 Bit
} keccak_state;

// KECCAK-p permutation working directly on the state
void keccak_p(keccak_state *st);

// Function to convert an input string to a state (and vice versa)
// void string_to_state(keccak_state *st, const uint8_t *S);
// void state_to_string(uint8_t *S, const keccak_state *st);

// Mappings and their helper-functions for KECCAK
// Function to rotate everything by n to the left
uint64_t ROTL64(uint64_t x, unsigned int n);
// Theta:
void Theta(keccak_state *st);
// Rho:
extern const unsigned int rho_offsets[5][5];
void Rho(keccak_state *st);
// Pi:
void Pi(keccak_state *st);
// Chi:
void Chi(keccak_state *st);
// Iota
extern const uint64_t KECCAKF_ROUND_CONSTANTS[24];
void Iota(keccak_state *st, int ir);
#endif

