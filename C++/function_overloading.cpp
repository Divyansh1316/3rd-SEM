// Implementation of function overloading.

// Example 1:

#include <iostream>
using namespace std;

int volume(int a)
{
    cout << "The volume of cube is : ";
    return (a * a * a);
}

int volume(int l, int b, int h)
{
    cout << "The volume of cubiod is : ";
    return (l * b * h);
}

double volume(double r, double h)
{
    cout << "The volume of cylinder is : ";
    return (3.14 * r * r * h);
}

int main()
{
    cout << volume(2) << endl;
    cout << volume(2, 3, 4) << endl;
    cout << volume(2, 3) << endl;
    return 0;
}

/*
//Example 2:

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

double add(double a, int b)
{
    return (a + b);
}

int add(int a, int b, int c)
{
    return (a + b + c);
}

double add(double a, double b, int c)
{
    return (a + b + c);
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(2.5, 3) << endl;
    cout << add(2, 3, 4) << endl;
    cout << add(2.5, 3.5, 6) << endl;
    return 0;
}
*/