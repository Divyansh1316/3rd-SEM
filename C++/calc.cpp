// WAP to make menu driven program for calculator.

#include <iostream>
using namespace std;

int main()
{
    int a, b, ch, sum, diff, prod, mod;
    float div;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    do
    {
        cout << "\nEnter choice :\n1 for addition\n2 for subtraction\n3 for product\n4 for division\n5 for modulus\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            sum = a + b;
            cout << "Sum is : " << sum;
            break;
        case 2:
            diff = a - b;
            cout << "Difference is : " << diff;
            break;
        case 3:
            prod = a * b;
            cout << "Product is : " << prod;
            break;
        case 4:
            div = float(a) / b;
            cout << "Division is : " << div;
            break;
        case 5:
            mod = a % b;
            cout << "Modulus is : " << mod;
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    } while (ch != 0);
}