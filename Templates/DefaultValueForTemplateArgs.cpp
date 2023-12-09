// we can specify default values for template arguments
#include <iostream>
using namespace std;

template <class M, class N = char>
class DefaultValueTemplateClass
{
public:
    M m;
    N n;
    DefaultValueTemplateClass()
    {
        cout << "DefaultValueTemplateClass constructor created" << endl;
    }
};

int main()
{
    // this will call DefaultValueTemplateClass<char, char>
    DefaultValueTemplateClass<char> myClass;

    return 0;
}