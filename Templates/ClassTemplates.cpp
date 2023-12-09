// Class templates are useful when a class defines something that is independent of the data type
// Implementing template array class
#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
    T *ptr;   // pointer
    int size; // variable

public:
    Array(T arr[], int s); // constructor
    void print();          // member function
};

// constructor implementation
template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = arr[i];
    }
}

// member function implementation
template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i];
        cout << " " << *(ptr + i) << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    Array<int> myArray(arr, 4);
    myArray.print();
    return 0;
}
