#include <iostream>
using namespace std;
int main()
{
    int i, n, a[10], count = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (i = 0; n != 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary of the number is : ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
        if (a[i] == 1)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "\nEvil number";
    }
    else
    {
        cout << "\nNot an Evil number";
    }
}