//
// Created by gaoje on 3/29/2021.
//

/*
 * https://www.toptal.com/c-plus-plus/c-plus-plus-understanding-compilation
*/
#include <iostream>
#include "sum.h"

void printSum(int a, int b) {
    std::cout << a << " + " << b << " = " << sumI(a, b) << std::endl;
}

void printSum(float a, float b) {
    std::cout << a << " + " << b << " = " << sumF(a, b) << std::endl;
}

extern "C" void printSumInt(int a, int b) {
    printSum(a, b);
}

extern "C" void printSumFloat(float a, float b) {
    printSum(a, b);
}

/*
 * Using nm.exe to printout the preprocessed source code, we can see the exported symbols
 * "T" indicates a text segment, so function name
 * "U" indicates undefined symbols, provided by object files/libraries that will be linked
 *
 * The ii or ff following _Z8printSum is called function name mangling which allows for function overloading(same
 * function name with different parameters)
 * -- this does not require extern "C" as it is a feature of C++
 *
 * The function printSumInt and printSumFloat require extern "C" because it prevents the function from being overloaded
 * -- these two functions were declared with C linkage
 */