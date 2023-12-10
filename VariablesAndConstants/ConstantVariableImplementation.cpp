#include <iostream>
using namespace std;

// defining a constant using #define preprocessor
#define PI 3.14

int main()
{
    const int int_const = 4;
    const char char_const = 'A';
    const float float_const = 54.54;

    cout << int_const << endl;
    cout << char_const << endl;
    cout << float_const << endl;

    cout << PI << endl;
}