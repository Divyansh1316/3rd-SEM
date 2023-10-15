#include <iostream>
using namespace std;
int comp(int n)
{
    int i, c = 0;
    if (n == 1 || n == 2)
    {
        cout << "Not composite number";
    }
    else
    {

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "Composite\n";
        }
        else
        {
            cout << "Not Composite\n";
        }
    }
}
int small(int n)
{
    int a[10], i, min, dig, count = 0;
    dig = n;
    while (dig != 0)
    {
        dig /= 10;
        count++;
    }
    for (i = 0; n != 0; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }
    min = a[0];
    for (i = 0; i < count; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Minimum digit is : " << min << "\n";
}
int main()
{
    int n, ch;
    cout << "Enter a number : ";
    cin >> n;
    do
    {
        cout << "Enter a choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            comp(n);
            break;
        case 2:
            small(n);
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    } while (ch != 0);
}