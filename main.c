//
// Created by Volodymyr on 22.09.24.
//
#include "DefaultAlgorithmTest.h"

void defaultAlgorithmTest() {
    // test1
    defaultAlgorithmCapacityTest();
    defaultAlgorithmPutTest(25, 101);
    defaultAlgorithmCapacityTest();
    defaultAlgorithmGetTest(25);
    defaultAlgorithmCapacityTest();
    // test2
    defaultAlgorithmPutTest(5, 201);
    defaultAlgorithmCapacityTest();
    defaultAlgorithmGetTest(2);
    defaultAlgorithmCapacityTest();
    defaultAlgorithmPutTest(5, 21);
    defaultAlgorithmCapacityTest();
    defaultAlgorithmGetTest(25);
    defaultAlgorithmCapacityTest();
}

int main(void) {
    defaultAlgorithmTest();
    return 0;
}
