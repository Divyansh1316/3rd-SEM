/*
Q13.Using the concept of operator overloading. Implement a program to overload the following,
With the help of friend function
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement
*/

#include <iostream>
using namespace std;

class decr
{
    int a;

public:
    decr()
    {
        a = 0;
    }
    decr(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend decr operator++(decr &ob);
    friend decr operator++(decr &ob, int);
    friend decr operator--(decr &ob);
    friend decr operator--(decr &ob, int);
    friend decr operator-(decr &ob);
};
decr operator--(decr &ob)
{
    decr temp;
    temp.a = --ob.a;
    return temp;
}
decr operator--(decr &ob, int)
{
    decr temp;
    temp.a = ob.a--;
    return temp;
}
decr operator++(decr &ob)
{
    decr temp;
    temp.a = ++ob.a;
    return temp;
}
decr operator++(decr &ob, int)
{
    decr temp;
    temp.a = ob.a++;
    return temp;
}
decr operator-(decr &ob)
{
    decr temp;
    temp.a = -ob.a;
    return temp;
}
int main()
{
    decr ob1(5);
    decr ob2, ob3, ob4, ob5, ob6, ob7, ob8, ob9, ob10;

    cout << "Original Values:" << endl;
    ob1.display();

    // Post-Decrement
    ob2 = ob1--;
    cout << "After Post-Decrement:" << endl;
    ob2.display();
    ob1.display();

    // Pre-Decrement
    ob3 = --ob1;
    cout << "After Pre-Decrement:" << endl;
    ob3.display();
    ob1.display();

    // Post-Increment
    ob5 = ob1++;
    cout << "After Post-Increment:" << endl;
    ob5.display();
    ob1.display();

    // Pre-Increment
    ob7 = ++ob1;
    cout << "After Pre-Increment:" << endl;
    ob7.display();
    ob1.display();

    // Unary Minus
    ob10 = -ob9;
    cout << "After Unary Minus:" << endl;
    ob10.display();
    ob9.display();

    return 0;
}