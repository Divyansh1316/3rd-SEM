#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (int sp = 1; sp <= n - row; sp++)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        for (col = row - 1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << "\n";
    }
}