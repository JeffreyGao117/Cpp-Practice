/*
 * Chapter 2 practice problems
 */
#include <iostream>
#include <string>

using std::cout; // avoid writing std::


void content() {
    cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name;

    const int pad = 1; // spacing between greeting and top border
    const int rows = pad * 2 + 3; // total number of rows in output stream

    // const cols will not change
    // :: scope operator
    // std::string is string from namespace std
    // Also want name size_type from class string
    //
    // Holds number of characters in a string
    // Could use an int but limited to 32767
    // Good habit to use specific purposes
    const std::string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << std::endl;

    for (int r = 0; r != rows; ++r) {
        std::string::size_type c = 0;
        // invariant(the true condition on each loop): written c characters so far in current row
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                // write nonborder character
                cout << greeting;
                c += greeting.size(); // compound assignment operator +=
            } else {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {  // || expression uses short-circuit evaluation
                    // write border character
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
    }

    // symmetric range [m,n] has n - m + 1 elements
    // asymmetric range [m,n) has n - m elements
}


// asterisk to form shape
void exercise_5() {
    // square
    int size;
    cout << "Size of square: ";
    std::cin >> size;
    cout << std::endl;
    for (int i = size; i != 0; i--) {
        for (int j = size; j != 0; j--) {
            cout << '*';
        }
        cout << std::endl;
    }
}


// countdown
void exercise_7() {
    for (int i = 10; i != -6; i--) {
        cout << i << std::endl;
    }
}


// namespace
void exercise_10() {
    int k = 0;
    while (k != 10) {
        using std::cout; // namespace only within scope of while loop
        cout << '*';
        ++k;
    }
    std::cout << std::endl; // out of scope of "using" so must include std::
}



int main() {
//    content();
//    exercise_5();
//    exercise_7();
    exercise_10();
    return 0;
}