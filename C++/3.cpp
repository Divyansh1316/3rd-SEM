/*
Q3.Using the switch statement, Construct a menu-driven program to
calculate the maturity amount of a bank deposit.
The user is given the following options: CO1
(i) Term Deposit
(ii) Recurring Deposit
For option (i) accept Principal (p), rate of interest (r) and time period in years
(n). Calculate and display the maturity amount (a) receivable using the
formula a = p(1 + r / 100)
For option (ii) accept monthly installment (p), rate of interest (r) and time
period in months (n). Calculate and output the maturity amount (a)
receivable using the formula a = p * n + p * n*(n + 1) / 2 * r / 100 * 1 / 12.
For an incorrect option, an appropriate error message should be displayed.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ch;
    double p, r, t, mamt;

    cout << "Bank Deposit Calculator" << endl;
    cout << "1. Term Deposit" << endl;
    cout << "2. Recurring Deposit" << endl;
    cout << "0. Exit" << endl;
    do
    {
        cout << "Enter your choice (1 or 2): ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter Principal Amount (p): ";
            cin >> p;
            cout << "Enter Rate of Interest (r %): ";
            cin >> r;
            cout << "Enter Time Period in Years (n): ";
            cin >> t;

            mamt = p * pow(1 + (r / 100), t);

            cout << "Maturity Amount: " << mamt << " Rs" << endl;
            break;

        case 2:
            cout << "Enter Monthly Installment (p): ";
            cin >> p;
            cout << "Enter Rate of Interest (r %): ";
            cin >> r;
            cout << "Enter Time Period in Months (n): ";
            cin >> t;

            mamt = p * t + p * t * (t + 1) / 2 * r / 100 * 1 / 12;

            cout << "Maturity Amount: " << mamt << " Rs" << endl;
            break;

        default:
            cout << "Invalid choice. Please select option 1 or 2." << endl;
            break;
        }
    } while (ch != 0);
    return 0;
}