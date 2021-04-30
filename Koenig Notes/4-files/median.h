//
// Created by gaoje on 4/30/2021.
// The file that the implementation decides is the one that corresponds to the name median.h
//

// preprocessor magic
// #ifndef directive: checks whether ACCELERATED_CPP_KOENIG_MEDIAN_H is defined
//      name of the preprocessor variable - controls how program is compiled
#ifndef ACCELERATED_CPP_KOENIG_MEDIAN_H
// if undefined, define it and continue with declarations
#define ACCELERATED_CPP_KOENIG_MEDIAN_H

/*
 * only declare names that are necessary
 * headers should be fully qualified with std:: instead of -using
 */
#include <vector>
double median(std::vector<double>);

#endif // if already defined ACCELERATED_CPP_KOENIG_MEDIAN_H


