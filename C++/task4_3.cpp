/*
3. Implement a program to swap the value of data members present in two different classes
with the help of friend function.
*/

#include <iostream>
using namespace std;

class Two; // Forward declaration

class One
{
private:
    int a;

public:
    One(int x)
    {
        a = x;
    }

    // Declare Two as a friend class to access its private members
    friend void swap(One &ob1, Two &ob2);

    void display()
    {
        cout << "One: " << a << endl;
    }
};

class Two
{
private:
    int b;

public:
    Two(int y)
    {
        b = y;
    }

    // Declare One as a friend class to access its private members
    friend void swap(One &ob1, Two &ob2);

    void display()
    {
        cout << "Two: " << b << endl;
    }
};
// Friend function to swap data members between One and Two
void swap(One &ob1, Two &ob2)
{
    int temp = ob1.a;
    ob1.a = ob2.b;
    ob2.b = temp;
}

int main()
{
    One ob1(5);
    Two ob2(10);

    cout << "Before Swap:" << endl;
    ob1.display();
    ob2.display();

    swap(ob1, ob2);

    cout << "\nAfter Swap:" << endl;
    ob1.display();
    ob2.display();

    return 0;
}