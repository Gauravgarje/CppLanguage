/*
KEYWORD: register
SCOPE: Local
DEFAULT VALUE: Garbage Value
MEMORY LOCATION: Register in CPU or RAM
LIFETIME: Function Block
*/
#include <iostream>
using namespace std;

void registerStorageClass()
{
    cout << "Demonstrating register storage class" << endl;

    register char c = 'G';

    cout << "Value of variable c: " << c << endl;
}

int main()
{
    registerStorageClass();
    return 0;
}