// Demonstrate Static variables in a function
#include <iostream>
#include <string>
using namespace std;

void updateCount()
{
    static int count = 0;
    cout << count << endl;

    // value updated here will be carried on to next function call
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        updateCount();
    }

    return 0;
}