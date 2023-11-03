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
        cout << "Volume of cone is : " << 0.33 * 3.14 * r * r * h << endl;
    }
};

class hemisphere : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of hemisphere is : " << 0.67 * 3.14 * r * r * r << endl;
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
    cal_area *ptr;

    cone ob1;
    ptr = &ob1;
    ptr->getdata();
    ptr->display_vol();

    hemisphere ob2;
    ptr = &ob2;
    ptr->getdata();
    ptr->display_vol();

    cylinder ob3;
    ptr = &ob3;
    ptr->getdata();
    ptr->display_vol();
    return 0;
}
