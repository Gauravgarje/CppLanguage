/*
KEYWORD: static
SCOPE: Local
DEFAULT VALUE: Zero
MEMORY LOCATION: RAM
LIFETIME: Whole Program
*/
#include <iostream>
using namespace std;

// Function containing static variables
// Memory is retained during execution
int staticFunc()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;
}

// Function containing non-static variables
// Memory is destroyed
int nonStaticFunc()
{
    cout << "For non-static variables: ";
    int count = 0;
    count++;
    return count;
}

int main()
{
    // Calling static parts
    cout << staticFunc() << endl; // 1
    cout << staticFunc() << endl; // 2

    // Calling non-static parts
    cout << nonStaticFunc() << endl; // 1
    cout << nonStaticFunc() << endl; // 1

    return 0;
}