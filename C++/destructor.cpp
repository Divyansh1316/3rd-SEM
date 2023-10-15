// program to implement the concept of destructor in C++

// Destructor is a type of function which is called by the compiler when an object is destroyed. It has no arguments and dosent return any value. Represented by ~objname.

#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Constructor is called for object " << count << endl;
    }
    ~num()
    {
        cout << "Destructor is called for object " << count << endl;
        count--;
    }
};

int main()
{
    num n1;
    {
        cout << "Entering this block" << endl;
        num n2;
        num n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}