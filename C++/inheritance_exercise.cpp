/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? Ans. Multiple inheritance.
    Q2. Which mode of Inheritance are you using? Ans. Public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented? Ans. Reusability is implemented because we reuse the typed code in derived class,so we dont have to type the member functions of the base class again and again to use in the derived class.
*/
#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void set1(int x, int y)
    {
        a = x;
        b = y;
    }
    void calc1()
    {
        cout << "Sum is : " << a + b << endl;
        cout << "Difference is : " << a - b << endl;
        cout << "Multiplication is : " << a * b << endl;
        cout << "Division is : " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void set2(int x, int y)
    {
        a = x;
        b = y;
    }
    void calc2()
    {
        cout << "Mod is : " << a + b << endl;
        cout << "Exponent is : " << pow(a, b) << endl;
        cout << "Sin of addition is : " << sin(a + b) << endl;
        cout << "Cos of addition is : " << cos(a + b) << endl;
    }
};

class hybridcalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void disp()
    {
        calc1();
        calc2();
    }
};

int main()
{
    hybridcalculator s1;
    s1.set1(10, 5);
    s1.set2(5, 2);
    s1.disp();
    return 0;
}