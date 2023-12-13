/*
KEYWORD: thread_local
SCOPE: Local or Global
DEFAULT VALUE: Garbage Value
MEMORY LOCATION: RAM
LIFETIME: Whole Thread
*/
#include <iostream>
#include <thread>
using namespace std;

thread_local int var = 10;

int main()
{
    // thread 1
    thread th1([]()
               { cout << "Thread 1 var value: " << (var += 18) << endl; });

    thread th2([]()
               { cout << "Thread 2 var value: " << (var += 7) << endl; });

    thread th3([]()
               { cout << "Thread 3 var value: " << (var += 13) << endl; });

    th1.join();
    th2.join();
    th3.join();

    return 0;
}