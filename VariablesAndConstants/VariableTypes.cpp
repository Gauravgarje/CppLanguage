/*
Program to implement:
1) Local variables
2) Instance variables
3) Static variables
*/
#include <iostream>
using namespace std;

class NewClass
{
public:
    static int a; // static/class variable
    int b = 9;    // instance variable
public:
    void func()
    {
        int c; // local variable
    }
};

// initialization
int NewClass::a = 90;

int main()
{
    cout << NewClass::a << endl; // accessing static variable

    NewClass myClass;
    cout << myClass.b << endl; // accessing instance variable

    return 0;
}