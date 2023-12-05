/*
Q22. Implement a Program in c++ using exception
handling to evaluate.
a) Divide by zero exception.
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

int main()
{
    int num, deno, output;
    cout << "Enter numerator and denominator : ";
    cin >> num >> deno;
    try
    {
        if (deno == 0)
        {
            throw(deno);
        }
        else
        {
            output = num / deno;
            cout << "Output is : " << output;
        }
    }
    catch (int deno)
    {
        cout << "Cannot enter 0 in denominator while performing division operation!" << endl;
    }
    return 0;
}