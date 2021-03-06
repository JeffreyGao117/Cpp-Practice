//
// Created by gaoje on 4/30/2021.
//

#ifndef ACCELERATED_CPP_KOENIG_STUDENT_INFO_H
#define ACCELERATED_CPP_KOENIG_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif //ACCELERATED_CPP_KOENIG_STUDENT_INFO_H
