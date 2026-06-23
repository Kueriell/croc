// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>


// This File implments the (inv-)Cipher-Algorithm according to the NIST FIPS 197 Standard

#ifndef AES_H
#define AES_H

#include <stdint.h>

// Coverage-Array
extern uint32_t sbox_used[16][16];
extern uint32_t inv_sbox_used[16][16];

// Key-Block-Round Combinations (AES-128)
#define Nk 4    // Keylength
#define Nb 4    // Block size
#define Nr 10   // Number of rounds

// Key expansion
uint32_t RotWord(uint32_t word);
uint32_t SubWord(uint32_t word);
void extract_w0123(uint8_t key[16], uint32_t w_local[4*(Nr + 1)]);
void KeyExpansion(uint8_t key[16], uint32_t w_local[4*(Nr + 1)]);

// Shared math
uint8_t xTimes(uint8_t b);
uint8_t GF(uint8_t b, uint8_t c);
void AddRoundKey(uint8_t state[16], uint8_t round, uint32_t w_local[4*(Nr + 1)]);

// Encryption
void SubBytes(uint8_t state[16]);
void ShiftRows(uint8_t state[16]);
void MixColumns(uint8_t state[16]);
void Cipher(uint8_t in[16], uint8_t out[16], uint32_t w_local[4*(Nr + 1)]);

// Decryption
void InvSubBytes(uint8_t state[16]);
void InvShiftRows(uint8_t state[16]);
void InvMixColumns(uint8_t state[16]);
void InvCipher(uint8_t in[16], uint8_t out[16], uint32_t w_local[4*(Nr + 1)]);

#endif

