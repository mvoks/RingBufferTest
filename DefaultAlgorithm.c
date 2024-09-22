//
// Created by Volodymyr on 22.09.24.
//
#include "RingBuffer.h"
#include "DefaultAlgorithm.h"

static int ringBufferData[DEFAULT_ALGORITHM_CAPACITY];
static RingBuffer ringBuffer = {
    .capacity = DEFAULT_ALGORITHM_CAPACITY,
    .pData = ringBufferData,
    .first = 0,
    .last = 0,
    .type = DEFAULT_ALGORITHM
};

unsigned defaultAlgorithmCapacity() {
    return ringBufferCapacity(&ringBuffer);
}

extern void defaultAlgorithmClear() {
    ringBufferClear(&ringBuffer);
}

extern defaultAlgorithmGetValue(int *pValue) {
    return ringBufferGetValue(&ringBuffer, pValue);
}

extern defaultAlgorithmPutValue(int pValue) {
    return ringBufferPutValue(&ringBuffer, pValue);
}
