// concatenate two strings without +

#include <iostream>
#include <string>
using namespace std;

void getstr(string s1, string s2)
{
    int i = 0, j = 0, l1, l2;
    l1 = s1.length();
    l2 = s2.length();
    s1.resize(l1 + l2);
    for (i = l1, j = 0; i < (l1 + l2); i++, j++)
    {
        s1[i] = s2[j];
    }
    cout << s1;
}

int main()
{
    string s1, s2;
    cout << "Enter a string : ";
    getline(cin, s1);
    cout << "Enter another string : ";
    getline(cin, s2);
    getstr(s1, s2);
    return 0;
}

/*

// concat using +

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter a string : ";
    getline(cin, s1);
    cout << "Enter another string : ";
    getline(cin, s2);
    s1 = s1 + s2;
    cout << s1;
    return 0;
}
*/