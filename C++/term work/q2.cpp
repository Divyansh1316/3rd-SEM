/*
2. Implement a C++ program to find the non-repeating characters in string.
Typical Input: graphic era university
Typical Output: c g h n p s t u v y
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;
int main()
{
    char str[100] = "graphic era university";
    int i;
    int freq[256] = {0};
    cout << "Input string : graphic era university" << endl;
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    cout << "The non repeating characters are: ";
    for (i = 0; i < 256; i++)
    {
        if (freq[i] == 1)
        {
            cout << char(i) << "  ";
        }
    }
    return 0;
}