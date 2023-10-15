// Left rotation in array.

#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j = 0, d, temp[10];
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter position to shift : ";
    cin >> d;
    for (i = d; i < n; i++)
    {
        temp[j] = a[i];
        j++;
    }
    for (i = 0; i < d; i++)
    {
        temp[j] = a[i];
        j++;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}