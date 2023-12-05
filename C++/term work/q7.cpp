/*
Q7. Construct a Program in C++ to show the working of function overloading(compile time
polymorphism) by using a function named calculate Area () to calculate area of square,
rectangle and triangle using different signatures as required.
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    double calculateArea(double side)
    {
        return side * side;
    }

    double calculateArea(double length, double width)
    {
        return length * width;
    }

    double calculateArea(float base, float height)
    {
        return 0.5 * base * height;
    }
} s;

int main()
{
    double squareArea = s.calculateArea(5.0);
    cout << "Area of the square: " << squareArea << " square units" << endl;

    double rectangleArea = s.calculateArea(4.0, 6.0);
    cout << "Area of the rectangle: " << rectangleArea << " square units" << endl;

    double triangleArea = s.calculateArea(3.0, 4.0);
    cout << "Area of the triangle: " << triangleArea << " square units" << endl;

    return 0;
}
