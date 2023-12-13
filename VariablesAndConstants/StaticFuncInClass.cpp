// Note: Static member functions are allowed to access only the static data members or other static member functions
#include <iostream>
using namespace std;

class MyClass
{
public:
    static void myStaticFunction()
    {
        cout << "Welcome to myStaticFunction" << endl;
    }
};

int main()
{
    // Method1: invoking a static member function
    MyClass::myStaticFunction();

    // Method2: invoking a static member function
    MyClass myClassObj;
    myClassObj.myStaticFunction();

    return 0;
}