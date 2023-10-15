#include <iostream>
using namespace std;
int main()
{
    int n, rem, sum = 0, prod = 1, orig;
    cout << "Enter a 2 digit number : ";
    cin >> n;
    orig = n;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    cout << "Sum of digits is : " << sum << "\n";
    cout << "Product of digits is : " << prod << "\n";

    if ((sum + prod) == orig)
    {
        cout << "\nSpecial 2-digit number";
    }
    else
    {
        cout << "\nNot a Special 2-digit number";
    }
}