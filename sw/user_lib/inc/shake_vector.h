// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#ifndef MSG_H
#define MSG_H

#pragma once
#include <stdint.h>

typedef struct {
    uint16_t LenBits;
    uint16_t MsgWords;
    uint16_t OutBits;
    uint16_t OutWords;
    const uint32_t *Msg;
    const uint32_t *Output;
} shake_vector_t;


static const uint32_t shake_vec0_msg[] = {
    0x88911ac6, 0x39e72a81, 0x6d0dbc94, 0x1be32140, 0x72dc24f1, 0x11499766, 0x7ada3212, 0xc4619ec2
};
static const uint32_t shake_vec0_output[] = {
    0x0000ce23
};


static const shake_vector_t shake_vectors[] = {
  {
    .LenBits  = 256,
    .MsgWords = 8,
    .OutBits  = 16,
    .OutWords = 1,
    .Msg      = shake_vec0_msg,
    .Output   = shake_vec0_output
  },
};
#endif
