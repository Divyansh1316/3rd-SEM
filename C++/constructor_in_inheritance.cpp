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
    A()
    {
        cout << "A's constuctor called" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B's constuctor called" << endl;
    }
};

class C : public B, public A // If we make A as vitual then A's constructor will be called first
{
public:
    C() : A(), B()
    {
        cout << "C's constuctor called" << endl;
    }
};

int main()
{
    C ob;
    return 0;
}