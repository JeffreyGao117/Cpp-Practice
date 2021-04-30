//
// Created by gaoje on 4/30/2021.
//

/*
 * Redundancy is harmless, gives compiler opportunity to check for consistency between declarations and definitions
 * Language requires function declarations and definitions to have the same return type
 */
#include "Student_info.h"

using std::istream; using std::vector;

// Suppose we have defined a function median
//  int median(std::vector<double>); // return type should be double, throws an error
//  double median(double); // argument should be vector, no error as could be defined elsewhere
//      error is thrown when the function is called incorrectly
bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}


istream& read(istream& is, Student_info& s)
{
// as defined in §4.2.2/62
}


istream& read_hw(istream& in, vector<double>& hw)
{
// as defined in §4.1.3/57
}
