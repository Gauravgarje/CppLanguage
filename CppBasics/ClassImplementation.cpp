#include <iostream>
using namespace std;

class Calculate
{
    // Access modifiers
public:
    // data members
    int num1 = 90;
    int num2 = 84;

    // member functions
    int addition()
    {
        int result = num1 + num2;
        cout << result << endl;
    }
};

int main()
{
    // object declaration - class_name object_name
    Calculate cal;
    cal.addition();
    return 0;
}