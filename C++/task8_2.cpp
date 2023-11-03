#include <iostream>
using namespace std;

class CalArea {
protected:
    float r, h;

public:
    void getdata() {
        cout << "Enter the values for r and h: ";
        cin >> r >> h;
    }

    virtual void display_volume() = 0;
};

class Cone : public CalArea {
public:
    void display_volume() {
        cout << "Volume of cone: " << (1.0 / 3) * 3.141 * r * r * h << endl;
    }
};

class Hemisphere : public CalArea {
public:
    void display_volume() {
        cout << "Volume of hemisphere: " << (2.0 / 3) * 3.141 * r * r * r << endl;
    }
};

class Cylinder : public CalArea {
public:
    void display_volume() {
        cout << "Volume of cylinder: " << 3.141 * r * r * h << endl;
    }
};

int main() {
   CalArea *ptr;
    Cone c;
    ptr=&c;
    ptr->getdata();
    ptr->display_volume();

    Hemisphere h;
    ptr=&h;
    ptr->getdata();
    ptr->display_volume();


    Cylinder cy;
    ptr=&cy;
    ptr->getdata();
    ptr->display_volume();
;

    return 0;
}
