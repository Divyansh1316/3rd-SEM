/*
Q19. Create a base class called CAL_AREA(Abstract). Use this class to store float type values that could be
used to compute the volume of figures. Derive two specific classes called cone, hemisphere and cylinder
from the base CAL_AREA. Add to the base class, a member function getdata ( ) to initialize base class data
members and another member function display volume( ) to compute and display the volume of figures.
Make display volume ( ) as a pure virtual function and redefine this function in the derived classes to suit
their requirements. Using these three classes, design a program that will accept dimensions of a cone, cylinder
and hemisphere interactively
and display the volumes. Remember values given as input will be and used as follows:
Volume of cone = (1/3)πr
2h
Volume of hemisphere = (2/3)πr
3
Volume of cylinder = πr
2h
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

class cal_area
{
public:
    float r, h;
    void getdata()
    {
        cout << "Enter radius and height : ";
        cin >> r >> h;
    }
    virtual void display_vol() = 0;
};

class cone : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of cone is : " << (1.0 / 3) * 3.14 * r * r * h << endl;
    }
};

class hemisphere : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of hemisphere is : " << (2.0 / 3) * 3.14 * r * r * r << endl;
    }
};

class cylinder : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of cylinder is : " << 3.14 * r * r * h << endl;
    }
};

int main()
{
    cal_area *ptr1 = new cone();
    ptr1->getdata();
    ptr1->display_vol();

    cal_area *ptr2 = new hemisphere();
    ptr2->getdata();
    ptr2->display_vol();

    cal_area *ptr3 = new cylinder();
    ptr3->getdata();
    ptr3->display_vol();
    return 0;
}