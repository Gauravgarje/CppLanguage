// In Function Templates we write generic function that can be used for different data types
#include <iostream>
using namespace std;

// One function works for all data types.
template <typename T>
T myMaxFunc(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMaxFunc<int>(3, 5) << endl;
    cout << myMaxFunc<char>('a', 'g') << endl;
    cout << myMaxFunc<double>(3.4, 3.3) << endl;

    return 0;
}