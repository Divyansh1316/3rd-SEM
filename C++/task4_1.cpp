/*
1. Construct a Program in C++ to show the working of function overloading(compile time
polymorphism) by using a function named calculate Area () to calculate area of square,
rectangle and triangle using different signatures as required.
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    // Function to calculate the area of a square
    double calculateArea(double side)
    {
        return side * side;
    }

    // Function to calculate the area of a rectangle
    double calculateArea(double length, double width)
    {
        return length * width;
    }

    // Function to calculate the area of a triangle
    double calculateArea(float base, float height)
    {
        return 0.5 * base * height;
    }
} s;

int main()
{
    // Calculate the area of a square
    double squareArea = s.calculateArea(5.0);
    cout << "Area of the square: " << squareArea << " square units" << endl;

    // Calculate the area of a rectangle
    double rectangleArea = s.calculateArea(4.0, 6.0);
    cout << "Area of the rectangle: " << rectangleArea << " square units" << endl;

    // Calculate the area of a triangle
    double triangleArea = s.calculateArea(3.0, 4.0);
    cout << "Area of the triangle: " << triangleArea << " square units" << endl;

    return 0;
}
