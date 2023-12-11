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
    friend decr operator--(decr &ob);
    friend decr operator--(decr &ob, int);
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

int main()
{
    decr ob1(5);
    cout << "Ob1 before post decrement : " << endl;
    ob1.display();
    decr ob2;
    ob2 = ob1--;
    cout << "Ob2 after post decrement : " << endl;
    ob2.display();
    cout << "Ob1 after post decrement : " << endl;
    ob1.display();
    decr ob3(10);
    cout << "Ob3 before pre decrement : " << endl;
    ob3.display();
    decr ob4;
    ob4 = --ob3;
    cout << "Ob4 after pre decrement : " << endl;
    ob4.display();
    cout << "Ob3 after pre decrement : " << endl;
    ob3.display();
    return 0;
}
/*
#include <iostream>
using namespace std;

class inc
{
    int a;

public:
    inc()
    {
        a = 0;
    }
    inc(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend inc operator++(inc &ob);
    friend inc operator++(inc &ob, int);
};
inc operator++(inc &ob)
{
    inc temp;
    temp.a = ++ob.a;
    return temp;
}
inc operator++(inc &ob, int)
{
    inc temp;
    temp.a = ob.a++;
    return temp;
}

int main()
{
    inc ob1(5);
    cout << "Ob1 before post increment : " << endl;
    ob1.display();
    inc ob2;
    ob2 = ob1++;
    cout << "Ob2 after post increment : " << endl;
    ob2.display();
    cout << "Ob1 after post increment : " << endl;
    ob1.display();
    inc ob3(10);
    cout << "Ob3 before pre increment : " << endl;
    ob3.display();
    inc ob4;
    ob4 = ++ob3;
    cout << "Ob4 after pre increment : " << endl;
    ob4.display();
    cout << "Ob3 after pre increment : " << endl;
    ob3.display();
    return 0;
}*/