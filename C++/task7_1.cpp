#include <iostream>
using namespace std;

class A
{
    int a, count = 0;

public:
    void setdata1(int x)
    {
        a = x * 2;
        count++;
        cout << "A's function called " << count << " times." << endl;
    }
};

class B
{
    int a, count = 0;

public:
    void setdata2(int x)
    {
        a = x * 3;
        count++;
        cout << "B's function called " << count << " times." << endl;
    }
};

class C
{
    int a, count = 0;

public:
    void setdata3(int x)
    {
        a = x * 5;
        count++;
        cout << "C's function called " << count << " times." << endl;
    }
};

class D : public A, public B, public C
{
    int a, new_val;

public:
    void update_val(int x)
    {
        if (x % 2 == 0)
        {
            setdata1(x);
        }
        if (x % 3 == 0)
        {
            setdata2(x);
        }
        if (x % 5 == 0)
        {
            setdata3(x);
        }
        else
        {
            cout << "Invalid output" << endl;
        }
    }
};

int main()
{
    D d;
    d.update_val(30);
    return 0;
}