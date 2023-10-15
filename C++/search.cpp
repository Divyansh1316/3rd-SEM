// Implement a program in C++ to search an element in an array of 20 elements.

#include <iostream>
using namespace std;

int main()
{
    int count = 0, arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, ele, i;
    cout << "Enter element u want to search : ";
    cin >> ele;
    for (i = 0; i < 20; i++)
    {
        if (arr[i] == ele)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "Element is present at " << i + 1 << " position.";
    }
    else
    {
        cout << "Element is not present";
    }
}