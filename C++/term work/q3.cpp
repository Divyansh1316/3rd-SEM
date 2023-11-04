/* Q3.Define a class Hotel in C++ with the following specifications
 Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the value of days* Tariff
>10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff,
NOD and Amount (amount to be displayed by calling function) CALC()*/

#include <iostream>
#include <string>
using namespace std;
class hotel
{
private:
    int rno;
    string name;
    int tariff;
    int NOD;
    float calc()
    {
        float amount = NOD * tariff;
        if ((amount) > 10000)
        {
            amount = 1.05 * amount;
        }
        cout << "Amount is : ";
        return amount;
    }

public:
    void checkin()
    {
        cout << "Enter room number : ";
        cin >> rno;
        cin.ignore();
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter tariff : ";
        cin >> tariff;
        cout << "Enter NOD : ";
        cin >> NOD;
    }
    void checkout()
    {
        cout << "Room number : " << rno << "\n";
        cout << "Name : " << name << "\n";
        cout << "Tariff : " << tariff << "\n";
    }
    float calculate()
    {
        return calc();
    }
};
int main()
{
    hotel s;
    s.checkin();
    cout << "Details : \n";
    s.checkout();
    float amount = s.calculate();
    cout << amount;
}