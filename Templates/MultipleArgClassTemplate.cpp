// we can pass more than one data type as arguments to templates
#include <iostream>
using namespace std;

template <class M, class N>
class MultipleArgClass
{
    M m;
    N n;

public:
    MultipleArgClass()
    {
        cout << "myMultipleArgClass constructor called" << endl;
    }
};

int main()
{
    MultipleArgClass<char, char> classA;
    MultipleArgClass<int, double> classB;
    return 0;
}