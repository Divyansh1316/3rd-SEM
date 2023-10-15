// program to implement dynamic initialization using constructors.

// The dynamic initialization of the object means that the object is initialized at the runtime.

#include <iostream>
using namespace std;

class bank
{
    int principal;
    int years;
    float rate;
    float result;

public:
    bank() {}
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void display();
};

bank::bank(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    result = principal;
    for (int i = 0; i < years; i++)
    {
        result = result * (1 + rate);
    }
}

bank::bank(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    result = principal;
    for (int i = 0; i < years; i++)
    {
        result = result * (1 + rate);
    }
}
void bank ::display()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << result << endl;
}
int main()
{
    bank ob3;
    int p, y;
    float r;
    int R;
    cout << "Enter value of p,y,r" << endl;
    cin >> p >> y >> r;
    bank ob1(p, y, r);
    ob1.display();

    cout << "Enter value of p,y,r" << endl;
    cin >> p >> y >> R;
    bank ob2(p, y, R);
    ob2.display();
    return 0;
}