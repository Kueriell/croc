// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements Sponge according to NIST FIPS 202

#ifndef SPONGE_H
#define SPONGE_H

#include "keccak_f.h"

#include <stdint.h>
#include <stddef.h>

// 1600-bit state width in bytes
#define SPONGE_WIDTH 200

// Sponge context working directly on keccak_state
typedef struct {
    keccak_state st;   // full 5×5×64-bit Keccak state
    size_t rate;       // rate in bytes (r)
    size_t absorbed;   // bytes currently filled in the rate portion
} sponge_t;

// Initialize sponge with given rate (capacity = 200 - rate)
void sponge_init(sponge_t *sp, size_t rate);

// Absorb input N (Algorithm 8, steps 16, ohne Padding)
void sponge_absorb(sponge_t *sp, const uint8_t *N, size_t len);

// Apply pad10*1 and finalize absorb phase
void sponge_pad10x1(sponge_t *sp);

// Squeeze outlen bytes of output (Algorithm 8, steps 710)
void sponge_squeeze(sponge_t *sp, uint8_t *out, size_t outlen);

#endif