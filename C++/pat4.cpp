#include <iostream>
using namespace std;

int main()
{
    int n, row, col, s;
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        s = 2 * row - 1;
        for (col = 1; col <= n; col++)
        {
            if (s > 9)
            {
                s = 1;
            }
            cout << s << " ";
            s += 2;
        }
        cout << "\n";
    }
}