
// unary operations using operator overloading:

// 1. post increment operator using operator overloading with friend function.

#include <iostream>
using namespace std;

class post
{
    int a;

public:
    post()
    {
        a = 0;
    }
    post(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend post operator++(post &ob, int);
};

post operator++(post &ob, int)
{
    post temp;
    temp.a = ob.a++;
    return temp;
}

int main()
{
    post ob1(5);
    ob1.display();
    post ob2;
    ob2 = ob1++;
    ob2.display();
    ob1.display();
    return 0;
}

/*
// 2. pre increment operator using operator overloading with friend function.

#include <iostream>
using namespace std;

class pre
{
    int a;

public:
    pre()
    {
        a = 0;
    }
    pre(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend pre operator++(pre &ob);
};

pre operator++(pre &ob)
{
    pre temp;
    temp.a = ++ob.a;
    return temp;
}

int main()
{
    pre ob1(5);
    ob1.display();
    pre ob2;
    ob2 = ++ob1;
    ob2.display();
    return 0;
}


// 3. negation operator using operator overloading with friend function.

#include <iostream>
using namespace std;

class neg
{
    int a;

public:
    neg()
    {
        a = 0;
    }
    neg(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend neg operator-(neg &ob);
};

neg operator-(neg &ob) // in unary operation no need to pass object as argument
{
    neg temp;
    temp.a = -ob.a;
    return temp;
}

int main()
{
    neg ob1(5);
    ob1.display();
    neg ob2;
    ob2 = -ob1;
    ob2.display();
    return 0;
}


// binary operations using operator overloading:

// 1. binary addition of 2 complex numbers using operator overloading with friend function.

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
        cout << a << " +i" << b << endl;
    }
    friend complex operator+(complex &ob1, complex &ob2);
};

complex operator+(complex &ob1, complex &ob2)
{
    complex temp;
    temp.a = ob1.a + ob2.a;
    temp.b = ob1.b + ob2.b;
    return temp;
}

int main()
{
    complex ob1(1, 4);
    ob1.display();
    complex ob2(3, 6);
    ob2.display();
    complex ob3;
    ob3 = ob1 + ob2;
    ob3.display();
    return 0;
}

// 2. binary subtraction of 2 complex numbers using operator overloading with friend function.

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
        cout << a << " +i" << b << endl;
    }
    friend complex operator-(complex &ob1, complex &ob2);
};

complex operator-(complex &ob1, complex &ob2)
{
    complex temp;
    temp.a = ob1.a - ob2.a;
    temp.b = ob1.b - ob2.b;
}

int main()
{
    complex ob1(4, 5);
    ob1.display();
    complex ob2(1, 2);
    ob2.display();
    complex ob3;
    ob3 = ob1 - ob2;
    ob3.display();
    return 0;
}

// greatest of 2 numbers using operator overloading using friend function.

#include <iostream>
using namespace std;

class one
{
    int a, b;

public:
    one()
    {
        a = 0;
        b = 0;
    }
    one(int x)
    {
        a = x;
        b = 0;
    }
    one(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    friend one operator>(one &ob1, one &ob2);
};

one operator>(one &ob1, one &ob2)
{
    if (ob1.a > ob2.a)
    {
        return ob1;
    }
    else
    {
        return ob2;
    }
}

int main()
{
    one ob1(5);
    one ob2(10);
    one res = ob1 > ob2;
    res.display();
    return 0;
}*/