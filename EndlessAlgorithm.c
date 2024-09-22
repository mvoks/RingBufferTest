//
// Created by Volodymyr on 22.09.24.
//
#include "RingBuffer.h"
#include "EndlessAlgorithm.h"

static int ringBufferData[ENDLESS_ALGORITHM_CAPACITY];
static RingBuffer ringBuffer = {
    .capacity = ENDLESS_ALGORITHM_CAPACITY,
    .pData = ringBufferData,
    .first = 0,
    .last = 0,
    .type = ENDLESS_ALGORITHM
};

unsigned endlessAlgorithmCapacity() {
    return ringBufferCapacity(&ringBuffer);
}

extern void endlessAlgorithmClear() {
    ringBufferClear(&ringBuffer);
}

extern endlessAlgorithmGetValue(int *pValue) {
    return ringBufferGetValue(&ringBuffer, pValue);
}

extern endlessAlgorithmPutValue(int pValue) {
    return ringBufferPutValue(&ringBuffer, pValue);
}
