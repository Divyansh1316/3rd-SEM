// Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class.

#include <iostream>
using namespace std;

class base1
{
protected:
    int a1;

public:
    void set1(int r)
    {
        a1 = r;
    }
};

class base2
{
protected:
    int a2;

public:
    void set2(int r)
    {
        a2 = r;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is : " << a1 << endl;
        cout << "The value of base2 is : " << a2 << endl;
        cout << "The sum is : " << a1 + a2 << endl;
    }
};

int main()
{
    derived d;
    d.set1(5);
    d.set2(10);
    d.show();
    return 0;
}