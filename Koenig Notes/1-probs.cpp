/*
 * Chapter 1 practice problems
 */

#include <iostream>
#include <string>


void exercises() {
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
}


void content() {
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name;
    // the second expression is a character literal, type char
    // type char: ordinary characters
    // type wchar_t: wide characters for other languages
    const std::string spaces(greeting.size() , ' ');
    // string concatentation
    const std::string empty = "* " + spaces + " *";
    // .size() is a member function, called to obtain a value
    const std::string line(empty.size(), '*');

    std::cout << line << std::endl;
    std::cout << empty << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << empty << std::endl;
    std::cout << line << std::endl;
}


int main() {
//    content();
    exercises();
    return 0;
}

/*
 * overloaded: operator has different meanings for operands of different types e.g. + for number or string
 * const: value of variable will not change, must initialize
 */