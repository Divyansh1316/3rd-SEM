/*
Q12. Create a class Complex having two int type variable named real & img denoting real and
imaginary part respectively of a complex number. Overload +, - operator to add, to subtract
two complex numbers being denoted by the two complex type objects
*/

#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        cout << real << " +i" << img << endl;
    }
    complex operator+(complex &ob)
    {
        complex temp;
        temp.real = real + ob.real; //'real' is of ob1 and 'ob.real' is of ob2
        temp.img = img + ob.img;
        return temp;
    }
    complex operator-(complex &ob)
    {
        complex temp;
        temp.real = real - ob.real; //'real' is of ob1 and 'ob.real' is of ob2
        temp.img = img - ob.img;
        return temp;
    }
};
int main()
{
    complex ob1(1, 5);
    complex ob2(2, 7);
    complex ob3;
    ob3 = ob1 + ob2; // ob3=ob1.add(ob2);
    ob3.display();
    complex ob4;
    ob4 = ob2 - ob1;
    ob4.display();
    return 0;
}