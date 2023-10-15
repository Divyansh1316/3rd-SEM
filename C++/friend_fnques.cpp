
// add two complex numbers using friend function.

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
    // Parameterized constructor
    complex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void display()
    {
        cout << a << " + i" << b << endl;
    }

    friend complex sum(complex &ob1, complex &ob2);
};

complex sum(complex &ob1, complex &ob2)
{
    complex temp;
    temp.a = ob1.a + ob2.a;
    temp.b = ob1.b + ob2.b;
    return temp;
}

int main()
{
    complex ob1(1, 2);
    complex ob2(4, 5);
    complex res = sum(ob1, ob2);
    res.display();
    return 0;
}

/*
// swap two object values using friend function.

#include <iostream>
using namespace std;

class complex
{
    int a;

public:
    complex(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend complex swap(complex &ob1, complex &ob2);
};

complex swap(complex &ob1, complex &ob2)
{
    int temp = ob1.a;
    ob1.a = ob2.a;
    ob2.a = temp;
    return temp;
}

int main()
{
    complex ob1(5);
    complex ob2(10);
    cout << "Before swapping : " << endl;
    ob1.display();
    ob2.display();
    complex res = swap(ob1, ob2);
    cout << "After swapping : " << endl;
    ob1.display();
    ob2.display();
    return 0;
}

// add two object values using friend function

#include <iostream>
using namespace std;

class complex
{
    int a;

public:
    complex()
    {
        a = 0;
    }
    complex(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Sum of two values is : " << a << endl;
    }
    friend complex add(complex &ob1, complex &ob2);
};

complex add(complex &ob1, complex &ob2)
{
    complex temp;
    temp = ob1.a + ob2.a;
    return temp;
}

int main()
{
    complex ob1(5);
    complex ob2(10);
    complex res = add(ob1, ob2);
    res.display();
    return 0;
}


// greatest of 2 numbers in 2 different classes using friend function.

#include <iostream>
using namespace std;

class two;  //fwd declaration

class one
{
    int a;

public:
    one(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend int great(one &ob1, two &ob2);
};

class two
{
    int b;

public:
    two(int y)
    {
        b = y;
    }
    void display()
    {
        cout << b << endl;
    }
    friend int great(one &ob1, two &ob2);
};

int great(one &ob1, two &ob2)
{
    int temp = ob1.a;
    if (ob1.a > ob2.b)
    {
        temp = ob1.a;
    }
    else
    {
        temp = ob2.b;
    }
    return temp;
}

int main()
{
    one ob1(5);
    two ob2(10);
    int res = great(ob1, ob2);
    cout << res;
    return 0;
}*/