// Implement a program with the help of an array the sorting mechanism of n numbers.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[50], t, i, j;
    cout << "Enter n elements : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    cout << "Sorted array is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}