/*
b)Factorial of a number n( n>0)
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

int main()
{
    int fact = 1, i, n;
    cout << "Enter a number : ";
    cin >> n;
    try
    {
        if (n > 0)
        {
            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            cout << "Factorial of " << n << " is : " << fact;
        }
        else
        {
            throw(n);
        }
    }
    catch (int n)
    {
        cout << "Cannot enter 0 as a number while performing factorial operation!" << endl;
    }
    return 0;
}