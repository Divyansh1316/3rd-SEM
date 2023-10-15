#include <iostream>
using namespace std;

int prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (prime(num1))
    {
        cout << num1 << " is a prime number.\n";
    }
    else
    {
        cout << num1 << " is not a prime number.\n";
    }

    if (prime(num2))
    {
        cout << num2 << " is a prime number.\n";
    }
    else
    {
        cout << num2 << " is not a prime number.\n";
    }

    if (!prime(num1) || !prime(num2))
    {
        cout << "Can't check for twin prime.";
    }
    else if ((num1 - num2) == 2 || (num1 - num2) == -2)
    {
        cout << "Twin Prime";
    }
    else
    {
        cout << "NOT Twin Prime";
    }

    return 0;
}
