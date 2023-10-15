// program to implement constructor overloading.

// Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.

#include <iostream>
using namespace std;

class num
{
    int a, b;

public:
    num()
    {
        a = 0;
        b = 0;
    }
    num(int x)
    {
        a = x;
        b = 0;
    }
    num(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Number is : " << a << " + i" << b << endl;
    }
};

int main()
{
    num ob1;
    ob1.display();

    num ob2(2);
    ob2.display();

    num ob3(1, 5);
    ob3.display();
    return 0;
}