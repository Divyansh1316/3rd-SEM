#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void get_data() {
        cout << "Enter the values for x and y: ";
        cin >> x >> y;
    }

    virtual void display_area() {
        cout << "Area: ";
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << x * y << endl;
    }
};

int main() {
    Shape *ptr;
    Triangle t;
    ptr=&t;
    ptr->get_data();
    ptr->display_area();


    Rectangle r;
    ptr=&r;
    ptr->get_data();
    ptr->display_area();

    return 0;
}
