/*
Q1. An electricity board charges the following rates to domestic users to discourage large
consumption of energy
For the first 100 units:- 60 P per unit
For the next 200 units:-80 P per unit
Beyond 300 units:-90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300 then an
additional surcharge of 15% is added. Implement a C++ Program to read the names of users
and number of units consumed and display the charges with names.
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int n, unit, amt, surc;
    cout << "Enter number of users : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter units : ";
        cin >> unit;
        if (unit <= 100)
        {
            amt = 60 * unit;
        }
        else if (unit > 100 && unit <= 200)
        {
            amt = 60 * 100 + 80 * (unit - 100);
        }
        else if (unit <= 300)
        {
            amt = 60 * 100 + 80 * (unit - 100) + 90 * (unit - 200);
        }
        if (amt > 300)
        {
            amt = amt + 50;
            surc = amt * 0.15;
            amt = amt + surc;
        }
        cout << "Total amount of " << name << " is " << amt << endl
             << endl;
    }
    return 0;
}