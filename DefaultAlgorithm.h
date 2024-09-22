//
// Created by Volodymyr on 22.09.24.
//
#ifndef DEFAULTALGORITHM_H
#define DEFAULTALGORITHM_H

#ifndef DEFAULT_ALGORITHM_CAPACITY
#define DEFAULT_ALGORITHM_CAPACITY 11
#endif

extern unsigned defaultAlgorithmCapacity();

extern void defaultAlgorithmClear();

extern defaultAlgorithmGetValue(int *pValue);

extern defaultAlgorithmPutValue(int pValue);

#endif //DEFAULTALGORITHM_H
