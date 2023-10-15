/*2.Implement a Program in C++ by defining a class to represent a bank account.
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
using namespace std;
class bank
{
    char name[20];
    int acc;
    char type[20];
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
    cin.getline(name, sizeof(name));
    cout << "Enter account number : ";
    cin >> acc;
    getchar();
    cout << "Enter type : ";
    cin.getline(type, sizeof(type));
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