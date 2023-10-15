#include <iostream>
using namespace std;

/*int main()
{
    int n, row, col, num = 1;
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        int currentNum = num + 2 * (row - 1);
        for (col = 1; col <= row; col++)
        {
            cout << currentNum << " ";
            currentNum -= 2;
        }
        cout << "\n";
    }
}*/
int main()
{
    int n, row, col, num = 1;
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        int currentNum = num;
        for (col = 1; col <= row; col++)
        {
            cout << currentNum << " ";
            currentNum -= 2;
        }
        num += 2;
        cout << "\n";
    }
}