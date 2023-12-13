/*
KEYWORD: auto
SCOPE: Local
DEFAULT VALUE: Garbage Value
MEMORY LOCATION: RAM
LIFETIME: Function block
*/
#include <iostream>
using namespace std;

void autoStorageClass()
{
    cout << "Demonstrating auto storage class" << endl;

    // Declaring an auto variable
    int a = 32;
    float b = 3.4;
    char *c = "GauravGarje";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    autoStorageClass();
    return 0;
}