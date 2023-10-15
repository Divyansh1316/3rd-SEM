// Implementation of copy constructor

#include <iostream>
using namespace std;

class num
{
    int a;

public:
    num()
    {
        a = 0;
    }
    num(int x)
    {
        a = x;
    }
    num(num &ob)
    {
        cout << "Copy constructor invoked !!!" << endl;
        a = ob.a;
    }
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    num ob1(5);
    ob1.display();
    num ob2(ob1); // one method of using copy constructor
    ob2.display();
    num ob3 = ob1; // another method of using copy constructor
    ob3.display();
    num ob4;
    ob4 = ob1; // here copy constructor is not invoked as this is assignment operation, not creation or initialization of object.
    ob4.display();
    return 0;
}