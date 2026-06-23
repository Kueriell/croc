// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#include "../../lib/inc/uart.h"
#include "../../lib/inc/print.h"
#include "../../lib/inc/util.h"

#include <string.h>

#include "../inc/shake_acc.h"

// (MAINFUNCTION)
void shake256_acc(uint32_t *msg_data, uint16_t msg_bits, uint16_t msg_words, uint32_t *hash_out, uint16_t out_bits,
                  uint16_t out_words) {
    // Handle the Input-Data
    const uint32_t *msg_ptr = msg_data;
    uint16_t words_left     = msg_words;

    // Handle the Output-Data
    uint32_t *hash_ptr      = hash_out;
    uint16_t out_left       = out_words;

    // Number of Absorbtionblocks needed
    uint16_t ab_blocks      = (msg_words / WORDS_PER_BLOCK) + 1;
    uint16_t ab_words;
    // Number of Squeezeblocks needed
    uint16_t sq_blocks = (out_words / WORDS_PER_BLOCK) + 1;
    // Number of words in this block (Squeeze, first round)
    uint16_t sq_words  = (out_left > WORDS_PER_BLOCK) ? WORDS_PER_BLOCK : out_left;

    uint32_t block_buf[WORDS_PER_BLOCK];

    // ABSORBTION
    for (uint16_t ab = 0; ab < ab_blocks; ab++) {

        // Fill Block-buffer with 0's
        memset(block_buf, 0, sizeof(block_buf));

        // Number of words in this block (Absorbtion)
        ab_words = (words_left > WORDS_PER_BLOCK) ? WORDS_PER_BLOCK : words_left;

        // Copy data into local block
        memcpy(block_buf, msg_ptr, ab_words * sizeof(uint32_t));

        if (ab == 0) {
            // First Round: Set lengths and load data
            // 1. Set Msg- & Outputlength
            *(volatile uint32_t *)(SHAKE_LEN) = (msg_bits << 16) | out_bits;
            
            // 2. Load the data into the Input-Buffers via MMIO for-loop
            for (int i = 0; i < ab_words; i++) {
                *(volatile uint32_t *)(SHAKE_IN_BUF + 4 * i) = block_buf[i];
            }

        } else {
            // further rounds, loads blocks and start round
            // 3. Load the "new" data into the Input-Buffers via MMIO for-loop
            for (int i = 0; i < ab_words; i++) {
                *(volatile uint32_t *)(SHAKE_IN_BUF + 4 * i) = block_buf[i];
            }
        }

        // Move forward
        msg_ptr += ab_words;
        words_left = (words_left > ab_words) ? (words_left - ab_words) : 0;
    }

    // SQUEEZE
    for (uint16_t sq = 0; sq < sq_blocks; sq++) {

        // 1. We need to load from the Output-Buffers (Bleibt wie gehabt eine for-Schleife)
        for (int i = 0; i < sq_words; i++) {
            hash_ptr[i] = *(volatile uint32_t *)(SHAKE_OUT_BUF + 4 * i);
        }

        hash_ptr += sq_words;
        out_left = (out_left > sq_words) ? (out_left - sq_words) : 0;
        // Update the Number of Squeeze-Rounds
        sq_words = (out_left > WORDS_PER_BLOCK) ? WORDS_PER_BLOCK : out_left;
    }
}