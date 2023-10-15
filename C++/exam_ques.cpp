// Implement a C++ to overload the binary operator of the type ob2=20-ob1, where ob1 is an object of class Complex that contains two arguments (real, imaginary), here 10 is interpreted as a real part only(20-0*i) i.e., no imaginary part. The sequence of the statement ob2= 20-ob1 should not be changed

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+i" << b << endl;
    }
    friend complex operator-(int num, complex &ob);
};
complex operator-(int num, complex &ob)
{
    complex temp;
    temp.a = num - ob.a;
    temp.b = 0 - ob.b;
    return temp;
}
int main()
{
    complex ob1(5, 10);
    complex ob2;
    ob2 = 20 - ob1;
    ob2.display();
    return 0;
}