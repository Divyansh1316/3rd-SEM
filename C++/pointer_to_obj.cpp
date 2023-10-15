// program to implement the concept of pointer to objects.

#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    complex(int x, int y)
    {
        r = x;
        i = y;
    }
    void display()
    {
        cout << "Real part is : " << r << endl;
        cout << "Imaginary part is : " << i << endl;
    }
};

int main()
{
    complex ob1(4, 10);
    complex *ptr = &ob1;
    ptr->display(); // this can also be written as : (*ptr).display();
    return 0;
}