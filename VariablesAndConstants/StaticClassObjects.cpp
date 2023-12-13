#include <iostream>
using namespace std;

// object of this class would be non-static
class FirstClass
{
    int i;

public:
    FirstClass()
    {
        i = 0;
        cout << "FirstClass constructor called" << endl;
    }

    ~FirstClass()
    {
        cout << "FirstClass destructor called" << endl;
    }
};

// object of this class would be static
class SecondClass
{
    int i;

public:
    SecondClass()
    {
        i = 0;
        cout << "SecondClass constructor called" << endl;
    }

    ~SecondClass()
    {
        cout << "SecondClass destructor called" << endl;
    }
};

int main()
{
    cout << "Inside main()" << endl;
    {
        FirstClass firstClassObj;
    }
    cout << "Between firstClassObj and secondClassObj block" << endl;
    {
        static SecondClass secondClassObj;
    }
    cout << "End of main()" << endl;

    return 0;
}