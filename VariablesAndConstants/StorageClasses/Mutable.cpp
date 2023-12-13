/*
KEYWORD: mutable
SCOPE: Local
DEFAULT VALUE: Garbage Value
MEMORY LOCATION: RAM
LIFETIME: Class
*/
#include <iostream>
using namespace std;

class Test {
    public:
        int x;

        mutable int y;

        Test(){
            x = 4;
            y = 10;
        }
};

int main(){
    // t1 is constant object
    const Test t1;

    t1.y = 111;
    cout<<t1.y;

    // This will throw error
    // t1.x = 0;
    
    return 0;
}