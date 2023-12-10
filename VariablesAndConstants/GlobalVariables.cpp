#include <iostream>
using namespace std;

// global variable
int global_var = 5;

int main()
{
    cout << global_var << endl; // accessing global varaible | output = 5

    // changing value of global variable in main func
    global_var = 40;

    // local variable defined with same name as global variable
    int global_var = 67;

    cout << ::global_var << endl; // accessing global varaible | output = 40
    cout << global_var << endl;   // accessing local variable | output = 67
}