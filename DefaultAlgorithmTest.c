//
// Created by Volodymyr on 22.09.24.
//
#include "DefaultAlgorithm.h"
#include "DefaultAlgorithmTest.h"
#include <stdio.h>

void defaultAlgorithmCapacityTest() {
    printf("\nCount %d\n", defaultAlgorithmCapacity());
}

void defaultAlgorithmGetTest(unsigned count) {
    int value;
    printf("\nStarting read values (%d) from buffer:\n", count);
    unsigned i = 0;
    for (; i < count; i++) {
        if (defaultAlgorithmGetValue(&value)) {
            printf("Read %d\n", value);
        } else {
            printf("Buffer is empty!\n");
            break;
        }
    }
    printf("Finished reading values (%d) from buffer.\n", i);
}

void defaultAlgorithmPutTest(unsigned count, int startValue) {
    printf("\nStarting write values (%d) to buffer:\n", count);
    int i = 0;
    for (; i < count; i++) {
        if (defaultAlgorithmPutValue(startValue)) {
            printf("Put %d\n", startValue);
        } else {
            printf("Buffer is full!\n");
            break;
        }
        startValue++;
    }
    printf("Finished writing values (%d) to buffer.\n", i);
}
