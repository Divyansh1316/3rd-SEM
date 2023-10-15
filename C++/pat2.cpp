#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    char s = 'A';
    cout << "Enter number of lines : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row + 1; col++)
        {
            cout << s << " ";
            s++;
        }
        cout << "\n";
    }
}