// Implement a program in C++ and find the reverse of a number.

#include <iostream>
using namespace std;
int main()
{
    int n, rev, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        rev = n % 10;
        sum = sum * 10 + rev;
        n /= 10;
    }
    cout << "Reverse of number is : " << sum;
}