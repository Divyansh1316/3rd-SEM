#include <iostream>
using namespace std;

int main()
{
    int n, row, col, s;
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        s = row;
        for (col = 1; col <= n; col++)
        {
            if (s >= col)
            {
                cout << s << " ";
            }
            else
            {
                cout << col << " ";
            }
        }
        cout << "\n";
    }
}