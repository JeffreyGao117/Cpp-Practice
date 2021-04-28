//
// Created by gaoje on 4/4/2021.
//
#include <iostream>
#include <string>


void content() {
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name;

    const int pad = 1; // spacing between greeting and top border
    const int rows = pad * 2 + 3; // total number of rows in output stream

    std::cout << std::endl; // add empty line
    int r = 0; // index for rows
    // invariant: written r rows so far
    while (r != rows) {
        std::cout << std::endl;
        r++;
    }
}


int main() {
    content();
    return 0;
}