// Static variables in a class
#include <iostream>
using namespace std;

class MyClass
{
public:
    static int i;

    MyClass(){
        // static variables can't be initialized using constructors;
    };
};

// Define the static variable outside the class
int MyClass::i = 10;

int main()
{
    cout << MyClass::i << endl;

    MyClass obj1;
    MyClass obj2;

    obj1.i += 10;
    obj2.i += 80;

    // both obj refer to same i shared among them
    cout << obj1.i << endl;
    cout << obj2.i << endl;

    return 0;
}