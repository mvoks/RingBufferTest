//
// Created by Volodymyr on 22.09.24.
//
#include "EndlessAlgorithm.h"
#include "EndlessAlgorithmTest.h"
#include <stdio.h>

void endlessAlgorithmCapacityTest() {
    printf("\nCount %d\n", endlessAlgorithmCapacity());
}

void endlessAlgorithmGetTest(unsigned count) {
    int value;
    printf("\nStarting read values (%d) from buffer:\n", count);
    unsigned i = 0;
    for (; i < count; i++) {
        if (endlessAlgorithmGetValue(&value)) {
            printf("Read %d\n", value);
        } else {
            printf("Buffer is empty!\n");
            break;
        }
    }
    printf("Finished reading values (%d) from buffer.\n", i);
}

void endlessAlgorithmPutTest(unsigned count, int startValue) {
    printf("\nStarting write values (%d) to buffer:\n", count);
    int i = 0;
    for (; i < count; i++) {
        if (endlessAlgorithmPutValue(startValue)) {
            printf("Put %d\n", startValue);
        } else {
            printf("Buffer is full!\n");
            break;
        }
        startValue++;
    }
    printf("Finished writing values (%d) to buffer.\n", i);
}
