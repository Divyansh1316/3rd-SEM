// unary operations using operator overloading:

// 1. post increment operator using operator overloading.

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
    post operator++(int) // we have used dummy variable int so that compiler can differentiate bw pre and post increment operator.
    {
        post temp;
        temp.a = a++;
        return temp;
    }
};

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
// 2. pre increment operator using operator overloading.

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
    pre operator++()
    {
        pre temp;
        temp.a = ++a;
        return temp;
    }
};

int main()
{
    pre ob1(5);
    ob1.display();
    pre ob2;
    ob2 = ++ob1;
    ob2.display();
    return 0;
}


// 3. negation operator using operator overloading.

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
    neg operator-() // in unary operation no need to pass object as argument
    {
        neg temp;
        temp.a = -a;
        return temp;
    }
};

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

// 1. binary addition of 2 complex numbers using operator overloading.

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
        cout << a << " +i" << b;
    }
    complex operator+(complex &ob)
    {
        complex temp;
        temp.a = a + ob.a; //'a' is of ob1 and 'ob.a' is of ob2
        temp.b = b + ob.b;
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
    return 0;
}

// 2. binary subtraction of 2 complex numbers using operator overloading.

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
        cout << a << " +i" << b;
    }
    complex operator-(complex &ob)
    {
        complex temp;
        temp.a = a - ob.a;
        temp.b = b - ob.b;
        return temp;
    }
};

int main()
{
    complex ob1(5, 10);
    complex ob2(2, 5);
    complex ob3;
    ob3 = ob1 - ob2; // ob3=ob1.subtract(ob2);
    ob3.display();
    return 0;
}*/