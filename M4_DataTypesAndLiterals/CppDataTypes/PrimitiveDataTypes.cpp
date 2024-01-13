#include <iostream>
using namespace std;

int main()
{
    cout << "Size of bool: " << sizeof(bool) << endl;       // 1 byte
    cout << "Size of char: " << sizeof(char) << endl;       // 1 byte
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl; // 2 bytes
    cout << "Size of int: " << sizeof(int) << endl;         // 4 bytes
    cout << "Size of float: " << sizeof(float) << endl;     // 4 bytes
    cout << "Size of double: " << sizeof(double) << endl;   // 8 bytes
    return 0;
}