#include <iostream>
#include <algorithm>
using namespace std;

void pattern1(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // here each row has column = total rows.
        for (col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern2(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // here each row has column = row number.
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern3(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // here each row has column = n-row+1.
        for (col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern4(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // here each row has column = row number.
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << "\n";
    }
}
void pattern5(int n)
{
    int row, col;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        int colno = (row > n) ? 2 * n - row : row;
        for (col = 1; col <= colno; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern28(int n)
{
    int row, col;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        int colno = (row > n) ? 2 * n - row : row;
        int space = n - colno;
        for (int s = 1; s <= space; s++)
        {
            cout << " ";
        }
        for (col = 1; col <= colno; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern30(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (int sp = 1; sp <= n - row; sp++)
        {
            cout << "  ";
        }

        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        for (col = 2; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << "\n";
    }
}
void pattern17(int n)
{
    int row, col;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        int colno = (row > n) ? 2 * n - row : row;
        for (int sp = 1; sp <= n - colno; sp++)
        {
            cout << "  ";
        }
        for (col = colno; col >= 1; col--)
        {
            cout << col << " ";
        }
        for (col = 2; col <= colno; col++)
        {
            cout << col << " ";
        }
        cout << "\n";
    }
}
void pattern31(int n)
{
    int row, col;
    for (row = 1; row <= 2 * n + 1; row++)
    {
        for (col = 1; col <= 2 * n + 1; col++)
        {
            int index = min(min(col - 1, row - 1), min(2 * n - row + 1, 2 * n - col + 1));
            cout << index << " ";
        }
        cout << "\n";
    }
}
void pattern312(int n)
{
    int row, col;
    for (row = 1; row <= 2 * n + 1; row++)
    {
        for (col = 1; col <= 2 * n + 1; col++)
        {
            int index = min(min(col - 1, row - 1), min(2 * n - row + 1, 2 * n - col + 1));
            cout << n - index << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n, ch;
    do
    {
        cout << "Enter number of lines : ";
        cin >> n;

        cout << "Enter a choice from 1 to 10 : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            pattern1(n);
            break;
        case 2:
            pattern2(n);
            break;
        case 3:
            pattern3(n);
            break;
        case 4:
            pattern4(n);
            break;
        case 5:
            pattern5(n);
            break;
        case 6:
            pattern28(n);
            break;
        case 7:
            pattern30(n);
            break;
        case 8:
            pattern17(n);
            break;
        case 9:
            pattern312(n);
            break;
        case 10:
            pattern31(n);
            break;
        }
    } while (ch != 0);
}