/* Q4.Implement a Program in C++ by defining a class to represent a bank account.
 Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance*/

#include <iostream>
#include <string>
using namespace std;
class bank
{
    string name;
    int acc;
    string type;
    int bal;
    int amount;
    int with;

public:
    void read();
    void dep();
    void calc();
    void disp();
} s;
void bank ::read()
{
    cout << "Enter details :\n";
    cout << "Enter name : ";
    getline(cin, name);
    cout << "Enter account number : ";
    cin >> acc;
    cin.ignore();
    cout << "Enter type : ";
    getline(cin, type);
    cout << "Enter balance : ";
    cin >> bal;
}
void bank ::dep()
{
    cout << "Enter amount to be deposited : ";
    cin >> amount;
    bal = bal + amount;
    cout << "Current balance is : " << bal << "\n";
}
void bank ::calc()
{
    cout << "Enter amount to be wihdrawn : ";
    cin >> with;
    if (bal >= with)
    {
        bal = bal - with;
        cout << "Withdrawn amount is : " << with << "\n";
        cout << "Current balance is : " << bal << "\n";
    }
    else
    {
        cout << "Insufficient balance";
    }
}
void bank ::disp()
{
    cout << "Name : " << name << "\n";
    cout << "Balance is :" << bal << "\n";
    cout << "Account number : " << acc << "\n";
    cout << "Account type : " << type << "\n";
}
int main()
{
    s.read();
    s.dep();
    s.calc();
    s.disp();
}