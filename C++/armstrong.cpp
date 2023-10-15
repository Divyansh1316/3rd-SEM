// Implement a program in C++ and check if a number is armstrong number or not.

#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, orig;
    cout << "Enter a number : ";
    cin >> n;
    orig = n;
    while (n != 0)
    {
        r = n % 10;
        sum += r * r * r;
        n = n / 10;
    }
    if (orig == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstong";
    }
}