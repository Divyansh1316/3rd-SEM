/*
If the base class constructor does not have any arguments, there is no need for any constructor in the derived class.
But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor.
If both base and derived classes have constructors, base class constructor is executed first.

Special syntax:
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
The constructors for virtual base classes are invoked before a non-virtual base class
*/

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int x)
    {
        a = x;
        cout << "A's constuctor called" << a << endl;
    }
};

class B
{
public:
    int b;
    B(int y)
    {
        b = y;
        cout << "B's constuctor called" << b << endl;
    }
};

class C : public B, public A // If we make A as vitual then A's constructor will be called first
{
public:
    C(int x, int y) : A(x), B(y)
    {
        cout << "C's constuctor called" << endl;
    }
};

int main()
{
    C ob(10, 25);
    return 0;
}