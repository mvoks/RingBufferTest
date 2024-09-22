//
// Created by Volodymyr on 22.09.24.
//
#include "RingBuffer.h"

int defaultGetValue(RingBuffer *pCircularBuffer, int *pValue) {
    if (pCircularBuffer->last == pCircularBuffer->first) {
        // buffer is empty
        return 0;
    }
    *pValue = pCircularBuffer->pData[pCircularBuffer->last];
    pCircularBuffer->last = (pCircularBuffer->last + 1) % pCircularBuffer->capacity;
    return 1;
}

int defaultPutValue(RingBuffer *pCircularBuffer, int value) {
    unsigned nextFirst = (pCircularBuffer->first + 1) % pCircularBuffer->capacity;
    if (nextFirst == pCircularBuffer->last) {
        // buffer is full
        return 0;
    }
    pCircularBuffer->pData[pCircularBuffer->first] = value;
    pCircularBuffer->first = nextFirst;
    return 1;
}

int endlessPutValue(RingBuffer *pCircularBuffer, int value) {
    unsigned nextFirst = (pCircularBuffer->first + 1) % pCircularBuffer->capacity;
    if (nextFirst == pCircularBuffer->last) {
        // buffer is full
        unsigned nextLast = (pCircularBuffer->last + 1) % pCircularBuffer->capacity;
        pCircularBuffer->last = nextLast;
    }
    pCircularBuffer->pData[pCircularBuffer->first] = value;
    pCircularBuffer->first = nextFirst;
    return 1;
}

unsigned ringBufferCapacity(RingBuffer *pRingBuffer) {
    if (pRingBuffer->first >= pRingBuffer->last) {
        return (pRingBuffer->first - pRingBuffer->last);
    } else {
        return pRingBuffer->capacity - pRingBuffer->last - pRingBuffer->first;
    }
}

void ringBufferClear(RingBuffer *pRingBuffer) {
    pRingBuffer->first = 0;
    pRingBuffer->last = 0;
}

int ringBufferGetValue(RingBuffer *pRingBuffer, int *pValue) {
    return defaultGetValue(pRingBuffer, pValue);
}

int ringBufferPutValue(RingBuffer *pRingBuffer, int value) {
    switch (pRingBuffer->type) {
        case 0b00000000: // DEFAULT_ALGORITHM
            return defaultPutValue(pRingBuffer, value);
        case 0b00000001: // ENDLESS_ALGORITHM
            return endlessPutValue(pRingBuffer, value);
    }
    return defaultPutValue(pRingBuffer, value);
}
