// Implement a program in C++ and find factorial of a number using recursion.

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter a number to find its factorial : ";
    cin >> n;
    fact(n);
    cout << "Factorial of " << n << " is : " << fact(n);
}