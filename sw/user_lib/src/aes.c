// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>


// This File implments the (inv-)Cipher-Algorithm according to the NIST FIPS 197 Standard

#include "../inc/aes.h"
#include <stdio.h>

// Coverage-Arrays (definition)
uint32_t sbox_used[16][16]     = {0};
uint32_t inv_sbox_used[16][16] = {0};


// This part implements the KeyExpansion 

// Round constants
static const uint32_t Rcon[10] = {
    0x01000000, 0x02000000, 0x04000000, 0x08000000, 0x10000000,
    0x20000000, 0x40000000, 0x80000000, 0x1b000000, 0x36000000
};

// ROTWORD([a0,a1,a2,a3]) = [a1,a2,a3,a0]
uint32_t RotWord(uint32_t word) {
    return (word << 8) | (word >> 24);
}

uint32_t SubWord(uint32_t word) {
    uint32_t out = 0;
    // Iterate thorugh the word, by using byte granularity
    for (int i = 0; i < 4; i++) {
        // extract ith-byte (MSB starting) 
        uint8_t byte = (word >> (24 - 8*i)) & 0xFF;
        // get coordinates from the SBOX
        uint8_t x = (byte >> 4) & 0xF;
        uint8_t y = byte & 0xF;
        extern const uint8_t SBox[16][16];

        // write modified byte back into word
        out |= ((uint32_t)SBox[x][y] << (24 - 8*i));
    }
    return out;
}

// Function to extract the w[0..3]
void extract_w0123(uint8_t key[16], uint32_t w_local[4*(Nr + 1)]) {
    w_local[0] = (key[0] << 24) | (key[1] << 16) | (key[2] << 8) | key[3];
    w_local[1] = (key[4] << 24) | (key[5] << 16) | (key[6] << 8) | key[7];
    w_local[2] = (key[8] << 24) | (key[9] << 16) | (key[10] << 8) | key[11];
    w_local[3] = (key[12] << 24) | (key[13] << 16) | (key[14] << 8) | key[15];
}

// KeyExpansion (based on the Pseudocode)
// routine that is applied to the key to generate 4 * (Nr+1) word
void KeyExpansion(uint8_t key[16], uint32_t w_local[4*(Nr + 1)]) {

    // extract the first few words out of the key
    extract_w0123(key, w_local);
    // generate the NK <= i < 4*(Nr + 1) missing words
    uint8_t i = Nk;

    while (i < 4 * (Nr + 1)) {
        uint32_t temp = w_local[i - 1];
        if (i % Nk == 0) {
            temp = SubWord(RotWord(temp)) ^ Rcon[i / Nk - 1];
        }
        w_local[i] = w_local[i - Nk] ^ temp;
        i++;
    }
    /*
    // print the whole expanded key:
    for (int i = 0; i < 4*(Nr + 1); i++) {
    uint32_t w = w_local[i];
    printf("w[%2d]: %02x %02x %02x %02x\n", i, (w >> 24) & 0xff, (w >> 16) & 0xff, (w >>  8) & 0xff, (w >>  0) & 0xff);
    }  
    */
}

// This part implements general valid functions and parameters

// AES: Multiplication in GF(2^8):
// m(x)= x^8 + x^4 + x^3 + x + 1, where x^8 = x^4 + x^3 + x + 1
static const uint8_t m_const = 0x1b;

uint8_t xTimes(uint8_t b) {
    // extract MSB from b:
    uint8_t temp = (b << 1);

    // if b7 = 0: {b6 b5 b4 b3 b2 b1 b0 0}
    // else: {b6 b5 b4 b3 b2 b1 b0 0}?{00011011 (m)}
    return (b & 0x80) ? (temp ^ m_const) : temp;
}

// The Multiplication in GF(2^8): b(x)c(x) mod m(x).
// higher powers of x can be implemented by the repeated application of  xTimes()
uint8_t GF(uint8_t b, uint8_t c) {

    uint8_t result = 0;

    // Start with the LSB of c(x), go through c(x) bit by bit
    while (c) {

        if (c & 1) result ^= b;

        // recursive application
        b = xTimes(b);
        c >>= 1;
    }
    return result;
}

// AddRoundKey function (transformation of the state): 
// [s0,c, s1,c, s2,c, s3,c] = [s0,c, s1,c, s2,c, s3,c]?[w(4*round+c)] for 0 = c < 4
void AddRoundKey(uint8_t state[16], uint8_t round, uint32_t w_local[4*(Nr + 1)]) {
    for (uint8_t c = 0; c < 4; c++) {
        uint32_t word = w_local[4*round + c];
        for (uint8_t r = 0; r < 4; r++) {
            state[4*c + r] ^= (word >> (24 - 8*r)) & 0xFF;
        }
    }
}

// This part implements the Encryption-Algorithm

// AES S-box (defined once)
const uint8_t SBox[16][16] = {
    {0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76},
    {0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0},
    {0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15},
    {0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75},
    {0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84},
    {0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf},
    {0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8},
    {0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2},
    {0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73},
    {0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb},
    {0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79},
    {0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08},
    {0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a},
    {0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e},
    {0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf},
    {0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16}
};

// SubBytes: invertible, non-linear transformation of the state
void SubBytes(uint8_t state[16]) {
    // Iterate through all the states:
    for (uint8_t i = 0; i < 16; i++) {
        // Extract the x,y values out of the state:
        uint8_t x = (state[i] >> 4) & 0xF;
        uint8_t y = state[i] & 0xF;
        // overwrite old state, with new value out of the S-Box
        state[i] = SBox[x][y];
        // Increment SBox-count
        sbox_used[x][y]++;
    }
}

// ShiftRows: transformation of the state, in which the bytes in the last
// three rows are cyclically shifted
// S'_{r,c} = S_{r,(c+r) mod4} for 0 = r < 4 and 0 = c < 4. r,c
void ShiftRows(uint8_t state[16]) {
    uint8_t temp;

    temp = state[1];
    // Row 0 remains unchanged
    // Row 1: Shift the columns by 1 to the left
    state[1] = state[5];
    state[5] = state[9];
    state[9] = state[13];
    state[13] = temp;

    // Row 2: Shift columns by 2 to the left
    temp = state[2];
    state[2] = state[10];
    state[10] = temp;
    temp = state[6];
    state[6] = state[14];
    state[14] = temp;

    // row 3: Shift columns by 3 to the left
    temp = state[3];
    state[3] = state[15];
    state[15] = state[11];
    state[11] = state[7];
    state[7] = temp;
}

// MixColumns: transformation of the state, 
// that multiplies each of the four columns of the state by a single fixed matrix
void MixColumns(uint8_t state[16]) {
    for (uint8_t c = 0; c < 4; c++) {
        // Get for every iteration the states:
        uint8_t s0 = state[4*c];        // row 0
        uint8_t s1 = state[4*c + 1];    // row 1
        uint8_t s2 = state[4*c + 2];    // row 2
        uint8_t s3 = state[4*c + 3];    // row 3

        // apply the matrix multiplication (fixed parameters already included)
        // and map the modified states back (@same old place)
        state[4*c] = GF(s0,2) ^ GF(s1,3) ^ s2 ^ s3;
        state[4*c + 1] = s0 ^ GF(s1,2) ^ GF(s2,3) ^ s3;
        state[4*c + 2] = s0 ^ s1 ^ GF(s2,2) ^ GF(s3,3);
        state[4*c + 3] = GF(s0,3) ^ s1 ^ s2 ^ GF(s3,2);
    }
}

// // Implementation of CIPHER: 
// AES-128(in,key) = Cipher(in, Nr, KeyExpansion(key))
// 1) the data input in, which is a block represented as a linear array of 16 bytes;
// 2) the number of rounds Nr for the instance; and 3) the round keys
// returns the 16-byte output block (ciphertext)
void Cipher(uint8_t in[16], uint8_t out[16], uint32_t w_local[4*(Nr + 1)]) {
    
    //(void)out;
    // state <- in
    uint8_t state[16];
    for (int i = 0; i < 16; i++) state[i] = in[i];

    // state <- ADDROUNDKEY(state,w[0..3])
    // one first application before starting the Nr-rounds
    AddRoundKey(state, 0, w_local);

    // for round from 1 to Nr-1 do
    for (uint8_t round = 1; round < Nr; round++) {
        // state <- SUBBYTES(state)
        SubBytes(state);
        // state <- SHIFTROWS(state)
        ShiftRows(state);
        // state <- MIXCOLUMNS(state)
        MixColumns(state);
        // state <- ADDROUNDKEY(state,w[4 * round..4 * round+3])
        AddRoundKey(state, round, w_local);

    } // end for

    // state <- SUBBYTES(state)
    SubBytes(state);
    // state <- SHIFTROWS(state)
    ShiftRows(state);
    // state <- ADDROUNDKEY(state,w[4 *Nr..4 *Nr+3])
    AddRoundKey(state, Nr, w_local);

    // return state (copy state into "out")
    for (int i = 0; i < 16; i++){
        out[i] = state[i];
        // printf("%02x ", out[i]);
    }
    //printf("\n");
}


// This part implements the Decryption-Algorithm

// AES InvS-box (defined once)
static const uint8_t InvSBox[16][16] = {
    {0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb},
    {0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb},
    {0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e},
    {0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25},
    {0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92},
    {0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84},
    {0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06},
    {0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b},
    {0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73},
    {0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e},
    {0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b},
    {0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4},
    {0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f},
    {0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef},
    {0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61},
    {0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d}
};

// InvSubBytes: invertible, non-linear transformation of the state
void InvSubBytes(uint8_t state[16]) {

    // Iterate through all the states:
    for (uint8_t i = 0; i < 16; i++) {
        // Extract the x,y values out of the state:
        uint8_t x = (state[i] >> 4) & 0xF;
        uint8_t y = state[i] & 0xF;
        // overwrite old state, with new value out of the S-Box
        state[i] = InvSBox[x][y];
        // Increment InvSBox-count
        inv_sbox_used[x][y]++;
    }
}

// InvShiftRows: transformation of the state, in which the bytes in the last
// three rows are cyclically shifted
// S'_{r,c} = S_{r,(c-r) mod4} for 0 = r < 4 and 0 = c < 4. r,c
void InvShiftRows(uint8_t state[16]) {
    uint8_t temp;

    temp = state[13];
    // Row 0 remains unchanged
    // Row 1: Shift the columns by 1 to the right
    state[13] = state[9];
    state[9] = state[5];
    state[5] = state[1];
    state[1] = temp;

    // Row 2: Shift columns by 2 to the right
    temp = state[2];
    state[2] = state[10];
    state[10] = temp;
    temp = state[6];
    state[6] = state[14];
    state[14] = temp;

    // row 3: Shift columns by 3 to the right
    temp = state[3];
    state[3] = state[7];
    state[7] = state[11];
    state[11] = state[15];
    state[15] = temp;
}

// InvMixColumns: transformation of the state, 
// that multiplies each of the four columns of the state by a single fxed matrix
void InvMixColumns(uint8_t state[16]) {
    for (uint8_t c = 0; c < 4; c++) {
        // Get for every iteration the states:
        uint8_t s0 = state[4*c];        // row 0
        uint8_t s1 = state[4*c + 1];    // row 1
        uint8_t s2 = state[4*c + 2];    // row 2
        uint8_t s3 = state[4*c + 3];    // row 3

        // apply the matrix multiplication
        // and map the modified states back (@same old place)
        state[4*c] = GF(s0,14) ^ GF(s1,11) ^ GF(s2,13) ^ GF(s3,9);
        state[4*c + 1] = GF(s0,9)  ^ GF(s1,14) ^ GF(s2,11) ^ GF(s3,13);
        state[4*c + 2] = GF(s0,13) ^ GF(s1,9)  ^ GF(s2,14) ^ GF(s3,11);
        state[4*c + 3] = GF(s0,11) ^ GF(s1,13) ^ GF(s2,9)  ^ GF(s3,14);
    }
}

// // Implementation of InvCIPHER: 
// AES-128(in,key) = InvCipher(in, Nr, KeyExpansion(key))
// 1) the data input in, which is a block represented as a linear array of 16 bytes;
// 2) the number of rounds Nr for the instance; and 3) the round keys
// returns the 16-byte output block (ciphertext)
void InvCipher(uint8_t in[16], uint8_t out[16], uint32_t w_local[4*(Nr + 1)]) {
    
    //(void)out;
    //  state <- in 
    uint8_t state[16];
    for (int i = 0; i < 16; i++) state[i] = in[i];

    //  state <- ADDROUNDKEY(state,w[4 *Nr..4 *Nr+3])
    // one first application before starting the Nr-rounds
    // ! Inverse order, so we start from Nr and go down
    AddRoundKey(state, Nr, w_local);

    //  for round from Nr-1 downto 1 do
    for (uint8_t round = Nr - 1; round > 0; round--) {
        //  state <- INVSHIFTROWS(state)
        InvShiftRows(state);
        //  state <- INVSUBBYTES(state)
        InvSubBytes(state);
        //  state <- ADDROUNDKEY(state,w[4 * round..4 * round+3])
        AddRoundKey(state, round, w_local);
        //  state <- INVMIXCOLUMNS(state)
        InvMixColumns(state);

    } // end for

    // state <- INVSHIFTROWS(state)
    InvShiftRows(state);
    // state <- INVSUBBYTES(state)
    InvSubBytes(state);
    // state <- ADDROUNDKEY(state,w[0..3])
    AddRoundKey(state, 0, w_local);

    // return state (copy state into "out")
    for (int i = 0; i < 16; i++){
        out[i] = state[i];
        //printf("%02x ", out[i]);
    }
    //printf("\n");
}

