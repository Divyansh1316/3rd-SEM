/*
In C++, using function overloading, create a class named 'OverloadDemo' that contains two functions:

1. void numberOverload(string, string): This function takes two strings as input, concatenates the strings, and provides the result as sorted consonants followed by sorted vowels.
2. int numberOverload(string): This function takes an alphanumeric string as input and returns the sum of its digits.
*/

#include <iostream>
using namespace std;

class OverloadDemo
{
public:
    void numberOverload(string s1, string s2)
    {
        s1 = s1 + s2; // concatenating 2 strings.
        string s3;
        string s4;
        int j = 0;
        char temp;
        for (int i = 0; i < s1.length(); i++)
        {
            if ((s1[i] >= 65 && s1[i] <= 90) || (s1[i] >= 97 && s1[i] <= 122))
            {
                if (s1[i] == 'A' || s1[i] == 'a' || s1[i] == 'E' || s1[i] == 'e' || s1[i] == 'I' || s1[i] == 'i' || s1[i] == 'O' || s1[i] == 'o' || s1[i] == 'U' || s1[i] == 'u')
                {
                    s4 += s1[i]; // s4 doesnt have a size so doing this using += operator to adjust size dynamically.
                    j++;
                }
                else
                {
                    s3 += s1[i];
                    j++;
                }
            }
        }
        for (int i = 0; i < s3.length(); i++)
        {
            for (int k = i + 1; k < s3.length(); k++)
            {
                if (s3[i] > s3[k])
                {
                    temp = s3[i];
                    s3[i] = s3[k];
                    s3[k] = temp;
                }
            }
        }
        for (int i = 0; i < s4.length(); i++)
        {
            for (int k = i + 1; k < s4.length(); k++)
            {
                if (s4[i] > s4[k])
                {
                    temp = s4[i];
                    s4[i] = s4[k];
                    s4[k] = temp;
                }
            }
        }
        s3 = s3 + s4;
        cout << s3 << endl;
    }
    int numberOverload(string str)
    {
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                sum += str[i] - '0'; // converting the character to its integer value.
            }
        }
        cout << "Sum is : " << sum << endl;
    }
};

int main()
{
    OverloadDemo ob1;
    string s1 = "hello";
    string s2 = "world";
    ob1.numberOverload(s1, s2);
    string str2 = "abcdef123";
    ob1.numberOverload(str2);
    return 0;
}