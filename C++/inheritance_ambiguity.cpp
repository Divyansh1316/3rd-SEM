#include <iostream>
using namespace std;

class base1
{
public:
    void disp()
    {
        cout << "Hello world" << endl;
    }
};

class base2
{
public:
    void disp()
    {
        cout << "Hello this is Divyansh" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void print()
    {
        // disp(); //since compiler dosent know which disp() we are calling so we have to specify using scope resolution operator.
        base1::disp();
        base2::disp();
    }
};

/*
class B
{
public:
    void disp()
    {
        cout << "Hello" << endl;
    }
};

class D : public B
{
public:
    void disp() // If we have a base class and a derived class with the same member function name, then the ambiguity is automatically removed, as the compiler overrites the previous one with the same name.
    {
        cout << "Hello" << endl;
    }
};
*/

int main()
{
    derived d;
    d.print();
    return 0;
}