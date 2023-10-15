// Implement a program in C++ to find armstrong number out of n inputed numbers.

#include <iostream>
using namespace std;

int main()
{
    int arr[50], i, n, r, sum = 0, orig;
    cout << "Enter n numbers : ";
    cin >> n;
    cout << "Enter " << n << " elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        orig = arr[i];
        while (arr[i] != 0)
        {
            r = arr[i] % 10;
            sum += r * r * r;
            arr[i] = arr[i] / 10;
        }
        if (orig == sum)
        {
            cout << orig << " is Armstrong\n";
        }
        else
        {
            cout << orig << " is Not Armstrong\n";
        }
    }
}