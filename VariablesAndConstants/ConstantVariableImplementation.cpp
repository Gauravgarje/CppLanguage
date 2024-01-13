#include <iostream>
using namespace std;

// defining a constant using #define preprocessor
#define PI 3.14

int main()
{
    // Method 1: Using const keyword
    // Syntax: const DATATYPE variable_name = value;
    const int int_const = 4;
    const char char_const = 'A';
    const float float_const = 54.54;

    cout << int_const << endl;   // Output: 4
    cout << char_const << endl;  // Output: A
    cout << float_const << endl; // Output: 54.54

    // Method 2: Using constexpr keyword
    // Syntax: constexpr DATATYPE variable_name = value;
    constexpr int hours_in_day = 24;

    cout << hours_in_day << endl; // Output: 24

    // Method 2: Using constexpr keyword
    // Syntax: #define MACRO_NAME replacement_value

    cout << PI << endl; // Output: 3.14
}