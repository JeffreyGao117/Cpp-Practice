//
// Chapter 4 Notes
// Organizing Programs and Data
// Created by gaoje on 4/29/2021.
//

#include <vector>
#include <algorithm> // contains sort and max
#include <stdexcept> // domain_error
#include <istream>
#include <iostream>

using std::vector;
using std::domain_error;
using std::istream;
using std::cout;
using std::endl;


/*
 * Organizing Programs
 */
void content_1() {
    // When computing an empty vector, could throw an exception
    // When throwing exception, program stops where throw appears and passes exception object

    // catch clause
    try {
        cout << "try" << endl;
    } catch (domain_error) {
        cout << "catch" << endl;
    }
}


double median(const vector<double>& vec) {
    typedef vector<double>::size_type vec_size;
    vec_size size = vec.size();
    if (size == 0) {
        throw domain_error("median of an empty vector");
    }
    sort(vec.begin(), vec.end());
    vec_size mid = size/2;
    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}


void reference() {
    // const std::vector<double>& hw
    // This is a reference to a const vector of double
    // Reference: just another name for the object
    vector<double> homework;
    vector<double> &hw = homework; // hw is a synonym for homework
    const vector<double> &chw = homework; // chw is a read-only synonym for homework
    vector<double>& hw1 = hw; // still referencing original homework
//  vector<double>& hw2 = chw; // does not work because chw is const
}


// Function overloading
double grade(double midterm, double final, double hw) {
    return hw;
}


// Use function to subdivide program
// Takes in a parameter list
// Call function by supplying arguments
double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.empty()) {
        throw domain_error("student has done no work");
    }
    return grade(midterm, final, median(hw)); // references overloaded function
}


// indirectly return more than one value from function
istream& read_hw(istream& in, vector<double>& hw) {
    // lvalue: a value that denotes a nontemporary object
    if (in) {
        hw.clear(); // discards vector objects
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear(); // resets any error indications
    }
    return in;
}


/*
 * Organizing Data --------------------------------------------------------------------------------
 */
#include <string>

using std::string;


// struct
struct Student_info {
    string name;
    double midterm, final;
    vector<double> homework;
};


// Reads in input and reads HW
istream& read(istream& is, Student_info& s) {
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}


// Overload grade
double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}

// Sort()
// typically uses < to compare values but what about custom structs?
// optional 3rd argument: predicate(bool)
bool compare(const Student_info& x, const Student_info& y) {
    // both arguments are const because we only compare, not modify
    return x.name < y.name;
}
// --->> sort(students.begin(), students.end(), compare);


/*
 * Putting it all together ---------------------------------------------------------------------------------
 */

// Separate compilation:
//      Put programs into separate files and compile files independently



int main() {
//    content_1();
    return 0;
}