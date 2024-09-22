//
// Created by Volodymyr on 22.09.24.
//
#include <stdio.h>
#include "RingBuffer.h"
#define RING_BUFFER_CAPACITY 11

static int ringBufferData[RING_BUFFER_CAPACITY];
static RingBuffer ringBuffer = {
    .capacity = RING_BUFFER_CAPACITY,
    .pData = ringBufferData,
    .first = 0,
    .last = 0
};

void printRingBufferCapacity() {
    printf("\nCount %d\n", ringBufferCapacity(&ringBuffer));
}

void ringBufferGetValues(unsigned count) {
    int value;
    printf("\nStarting read values (%d) from buffer:\n", count);
    unsigned i = 0;
    for (; i < count; i++) {
        if (ringBufferGetValue(&ringBuffer, &value)) {
            printf("Read %d\n", value);
        } else {
            printf("Buffer is empty!\n");
            break;
        }
    }
    printf("Finished reading values (%d) from buffer.\n", i);
}

void ringBufferPutValues(unsigned count, int startValue) {
    printf("\nStarting write values (%d) to buffer:\n", count);
    int i = 0;
    for (; i < count; i++) {
        if (ringBufferPutValue(&ringBuffer, startValue)) {
            printf("Put %d\n", startValue);
        } else {
            printf("Buffer is full!\n");
            break;
        }
        startValue++;
    }
    printf("Finished writing values (%d) to buffer.\n", i);
}

int main(void) {
    printRingBufferCapacity();
    ringBufferPutValues(10, 101);
    printRingBufferCapacity();
    ringBufferGetValues(2);
    printRingBufferCapacity();
    ringBufferPutValues(1, 201);
    printRingBufferCapacity();
    ringBufferGetValues(2);
    printRingBufferCapacity();
    ringBufferGetValues(10);
    printRingBufferCapacity();
    return 0;
}
