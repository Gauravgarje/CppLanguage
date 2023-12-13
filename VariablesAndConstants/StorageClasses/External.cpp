/*
KEYWORD: extern
SCOPE: Global
DEFAULT VALUE: Zero
MEMORY LOCATION: RAM
LIFETIME: Whole Program
*/
#include <iostream>
using namespace std;

// declaring variable which is to be made extern.
// an initial value can also be initialized to x
int x = 80;

void externStorageClass()
{
    cout << "Demonstrating extern class" << endl;

    // telling the compiler that x is an extern variable and has been defined elsewhere
    extern int x;

    cout << "Value of variable x is: " << x << endl;

    x = 5; // external variable's value modified

    cout << "Modified value of variable x is: " << x << endl;
}

int main()
{
    externStorageClass();
    return 0;
}