// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// This file provides a single demonstration test vector for AES-128 and SHAKE-256.
// Full validation was performed separately using the complete NIST test suites.

#ifndef TESTVECTORS_H
#define TESTVECTORS_H

#pragma once
#include <stdint.h>


// AES-128 Testvector

typedef struct {
    const uint32_t *Input;
    const uint32_t *Key;
    const uint32_t *Output;
} aes_vector_t;

// Standard Testvector (Appendix B, FIPS 197 for AES-128)
static const uint32_t aes_vec_input[]  = {0x3243f6a8, 0x885a308d, 0x313198a2, 0xe0370734};
static const uint32_t aes_vec_key[]    = {0x2b7e1516, 0x28aed2a6, 0xabf71588, 0x09cf4f3c};
static const uint32_t aes_vec_output[] = {0x3925841d, 0x02dc09fb, 0xdc118597, 0x196a0b32};

static const aes_vector_t aes_en[] = {
    {.Input = aes_vec_input, .Key = aes_vec_key, .Output = aes_vec_output}
};

// For the InvCipher, we just reverse the operation
static const aes_vector_t aes_de[] = {
    {.Input = aes_vec_output, .Key = aes_vec_key, .Output = aes_vec_input}
};

// SHAKE-256 Testvector

typedef struct {
    uint16_t LenBits;
    uint16_t MsgWords;
    uint16_t OutBits;
    uint16_t OutWords;
    const uint32_t *Msg;
    const uint32_t *Output;
} shake_vector_t;

#endif
