/*
Q11. Create a class called Time that has separate int member data for hours, minutes and seconds.
One constructor should initialize this data to 0, and another should initialize it to fixed values.
A member function should display it in 11:59:59 format. A member function named add()
should add two objects of type time passed as arguments. A main ( ) program should create two
initialized values together, leaving the result in the third time variable. Finally it should display
the value of this third variable.
*/

#include <iostream>
using namespace std;

class time
{
    int h, min, sec;

public:
    time()
    {
        h = 0;
        min = 0;
        sec = 0;
    }
    time(int x, int y, int z)
    {
        h = x;
        min = y;
        sec = z;
    }
    void display()
    {
        cout << "Time is : " << h << ":" << min << ":" << sec << endl;
    }

    void add(time &ob1, time &ob2)
    {
        h = ob1.h + ob2.h;
        min = ob1.min + ob2.min;
        sec = ob1.sec + ob2.sec;
    }
};
int main()
{
    time ob1(10, 10, 10);
    ob1.display();
    time ob2(20, 20, 20);
    ob2.display();
    time res;
    res.add(ob1, ob2);
    res.display();
    return 0;
}