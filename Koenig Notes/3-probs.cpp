//
// Chapter 3 Notes
// Working with batches of data
//
#include <iomanip> // defines setprecision: how many sigfigs in output
#include <ios>  // defines streamsize: type used to represent sizes
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;


void content_1() {
    // could have initialized sum to 0.0
    // not run-time overhead as the 0 is converted to double during compilation
    int count = 1;
    double sum = 0;
    // default-initialization of built-in types are undefined

    int x = 0;
    while (cin >> x) {
        // using cin as condition == testing whether last attempt to read from cin is successful
        // cin also reads value into x
        // cin has type istream
        sum += x;
        cout << sum << endl;
    }

    int midterm = 1;
    int final = 1;
    // setprecision: manipulator, sets number of sigfigs
    streamsize prec = cout.precision(); // store default precision
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         << setprecision(prec) << endl;
    // after setting precision to 3, precision is reset to initial sigfigs
}


void content_2() {
    // #include <vector>
    std::vector<double> homework; // container that holds a collection of values
    // defined using language feature: template class
    homework.push_back(1.0); // member function push_back() adds element to end of vector

    // store size of vector
    // type definition - vector<double>::size_type
    //      size_type is an unsigned type guaranteed to hold the size of largest possible vector
    //      defines vector_size as synonym for vector<double>::size_type
    typedef std::vector<double>::size_type vector_size;
    vector_size size = homework.size();

    // #include <algorithm>
    // sort() works in-place, begin and end get first and last elements
    sort(homework.begin(), homework.end());

    vector_size mid = size/2;
    double median;
    // conditional operator ? :
    median = (size % 2 == 0) ? (homework[mid] + homework[mid-1]) / 2 : (homework[mid]);
    cout << median << endl;

    // when ordinary ints and unsigned ints combine in expression, result is converted to unsigned
    // E.g. homework.size() < 100 will always be positive

    // sort() is no slowed than O(nlogn)
    // standard library manages memory automatically such that vector will allocate memory dynamically
}


void exercise_1() {
    /*
     * The median of a collection of values must not be discarded for the median to be true.
     * The same result can be achieved on accident when discarding values but is not "representative"
     * E.g. 1 2 2 2 2 5 --> median: 2
     * E.g. 1 2 2 2 5 6 --> median: 2
     */
}


// cmopute and print quartiles
void exercise_2() {
    std::vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    typedef std::vector<int>::size_type vector_size;

    vector_size size = nums.size();
    vector_size mid = size/2;
    vector_size q1 = size/4;
    vector_size q3 = size/4 * 3;
    double median = size % 2 == 0 ? (nums[mid-1] + nums[mid]) / 2 : nums[mid];
    cout << "Median: " << median << endl;

    double q1_value = mid % 2 == 0 ? (nums[q1-1] + nums[q1]) / 2 : nums[q1];
    cout << "Q1: " << q1_value << endl;

    double q3_value = mid % 2 == 0 ? (nums[q3-1] + nums[q3]) / 2 : nums[q3];
    cout << "Q3: " << q3_value << endl;
}


// count word frequency
void exercise_3() {
    std::vector<string> words;
    std::vector<int> counts;
    string x;
    cout << "Type end to finish." << endl;
    cout << "Enter a word: ";
    while (cin >> x) {
        if (x == "end") {
            break;
        }
        if (std::count(words.begin(), words.end(), x)) {
            int index = 0;
            for (int i = 0; i < words.size(); i++) {
                if (words[i] == x) {
                    index = i;
                }
            }
            counts[index] += 1;
        } else {
            words.push_back(x);
            counts.push_back(1);
        }
        cout << "Enter a word: ";
    }

    for (int i = 0; i < counts.size(); i++) {
        cout << words[i] << " " << counts[i] << endl;
    }
}


// shortest and longest word
void exercise_4() {
    string x;
    int shortest;
    int longest;
    bool defined = false;
    while (cin >> x) {
        if (!defined) {
            shortest = x.length();
            longest = x.length();
            defined = true;
        } else if (x.length() < shortest) {
            shortest = x.length();
        } else if (x.length() > longest) {
            longest = x.length();
        }
        cout << shortest << " " << longest << endl;
    }
}


int main() {
//    content_1();
//    content_2();
//    exercise_1();
//    exercise_2();
//    exercise_3();
    exercise_4();
    return 0;
}
