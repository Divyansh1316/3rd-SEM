
// add two complex numbers using friend class

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    // only declaring the function as compiler dosent know about objects yet.
    int sumRealComplex(Complex &o1, Complex &o2);
    int sumCompComplex(Complex &o1, Complex &o2);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex &, Complex &);
    // friend int Calculator ::sumCompComplex(Complex &, Complex &);

    // Alter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    Complex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void display()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex &o1, Complex &o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex &o1, Complex &o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1(1, 4);
    o1.display();
    Complex o2(5, 7);
    o2.display();
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
/*
// swapping two numbers using friend class.

#include <iostream>
using namespace std;

class complex;

class calc
{
public:
    int swap(complex &, complex &);
};

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
    friend class calc;
};

int calc::swap(complex &ob1, complex &ob2)
{
    int temp = ob1.a;
    ob1.a = ob2.a;
    ob2.a = temp;
}

int main()
{
    complex ob1(5);
    cout << "1st number before swapping : ";
    ob1.display();
    complex ob2(10);
    cout << "2nd number before swapping : ";
    ob2.display();
    calc c;
    c.swap(ob1, ob2);
    cout << "1st number after swapping : ";
    ob1.display();
    cout << "2nd number after swapping : ";
    ob2.display();
    return 0;
}

// add two numbers using friend class.

#include <iostream>
using namespace std;

class complex;

class calc
{
public:
    int sum(complex &, complex &);
};

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
    friend class calc;
};

int calc::sum(complex &ob1, complex &ob2)
{
    int temp;
    temp = ob1.a + ob2.a;
    return temp;
}

int main()
{
    complex ob1(5);
    complex ob2(10);
    ob1.display();
    ob2.display();
    calc c;
    int res = c.sum(ob1, ob2);
    cout << res;
    return 0;
}*/