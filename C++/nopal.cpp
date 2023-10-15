// Count the no.of palindrome in a string

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int p = 0, a = 1, c, i = 0, j;
    cout << "Enter a string : ";
    getline(cin, str);
    str += ' ';
    for (j = 0; j < str.length(); j++)
    {
        if (str[j] == ' ')
        {
            c = j;
            for (i; i < c / 2; i++)
            {
                if (str[i] != str[c - i - 1])
                {
                    a = 0;
                    break;
                }
            }
            i = c + 1;
            if (a == 1)
            {
                p++;
            }
            a = 1;
        }
    }
    cout << p;
    return 0;
}