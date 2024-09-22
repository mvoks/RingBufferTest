//
// Created by Volodymyr on 22.09.24.
//
#include "DefaultAlgorithmTest.h"
#include "EndlessAlgorithmTest.h"

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

void endlessAlgorithmTest() {
    endlessAlgorithmCapacityTest();
    endlessAlgorithmPutTest(25, 101);
    endlessAlgorithmCapacityTest();
    endlessAlgorithmGetTest(5);
    endlessAlgorithmCapacityTest();
    endlessAlgorithmPutTest(5, 1001);
    endlessAlgorithmCapacityTest();
    endlessAlgorithmGetTest(10);
    endlessAlgorithmCapacityTest();
}

int main(void) {
    defaultAlgorithmTest();
    endlessAlgorithmTest();
    return 0;
}
