//
// Created by Volodymyr on 22.09.24.
//
#ifndef RINGBUFFER_H
#define RINGBUFFER_H

struct RingBuffer_;
typedef struct RingBuffer_ RingBuffer;

struct RingBuffer_ {
    unsigned capacity;
    int *pData;
    unsigned int first;
    unsigned int last;
};

extern unsigned ringBufferCapacity(RingBuffer *pRingBuffer);

extern void ringBufferClear(RingBuffer *pRingBuffer);

extern int ringBufferGetValue(RingBuffer *pRingBuffer, int *pValue);

extern int ringBufferPutValue(RingBuffer *pRingBuffer, int value);

#endif //RINGBUFFER_H
