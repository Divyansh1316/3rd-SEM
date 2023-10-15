#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    string name;
    string address;
    char purchaseType;
    double purchaseAmount;
    double discountRate;
    double discount;
    double netAmount;

public:
    Customer()
    {
        discountRate = 0.0;
        discount = 0.0;
        netAmount = 0.0;
    }

    void inputInfo()
    {
        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter customer address: ";
        getline(cin, address);
        cout << "Enter purchase amount in Rs.: ";
        cin >> purchaseAmount;
        cout << "Enter purchase type (L for Laptop, D for Desktop): ";
        cin >> purchaseType;
    }

    void calculateDiscount()
    {
        switch (purchaseType)
        {
        case 'L':
            if (purchaseAmount <= 25000)
            {
                discountRate = 0.0;
            }
            else if (purchaseAmount <= 57000)
            {
                discountRate = 5.0;
            }
            else if (purchaseAmount <= 100000)
            {
                discountRate = 7.5;
            }
            else
            {
                discountRate = 10.0;
            }
            break;
        case 'D':
            if (purchaseAmount <= 25000)
            {
                discountRate = 5.0;
            }
            else if (purchaseAmount <= 57000)
            {
                discountRate = 7.6;
            }
            else if (purchaseAmount <= 100000)
            {
                discountRate = 10.0;
            }
            else
            {
                discountRate = 15.0;
            }
            break;
        default:
            cout << "Invalid purchase type. Please enter 'L' for Laptop or 'D' for Desktop." << endl;
            return;
        }

        discount = (discountRate / 100) * purchaseAmount;
        netAmount = purchaseAmount - discount;
    }

    void displayInfo()
    {
        cout << "\nCustomer Name: " << name << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Discount Rate: " << discountRate << "%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Net Amount to be Paid: Rs. " << netAmount << endl;
    }
};

int main()
{
    Customer customer;

    customer.inputInfo();
    customer.calculateDiscount();
    customer.displayInfo();

    return 0;
}

/* Without using classes
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address;
    char purchaseType;
    double purchaseAmount, discountRate = 0.0, discount = 0.0, netAmount = 0.0;

    // Input customer information
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter customer address: ";
    getline(cin, address);
    cout << "Enter purchase amount in Rs.: ";
    cin >> purchaseAmount;
    cout << "Enter purchase type (L for Laptop, D for Desktop): ";
    cin >> purchaseType;

    // Determine discount rate based on purchase amount and type
    switch (purchaseType) {
        case 'L':
            if (purchaseAmount <= 25000) {
                discountRate = 0.0;
            } else if (purchaseAmount <= 57000) {
                discountRate = 5.0;
            } else if (purchaseAmount <= 100000) {
                discountRate = 7.5;
            } else {
                discountRate = 10.0;
            }
            break;
        case 'D':
            if (purchaseAmount <= 25000) {
                discountRate = 5.0;
            } else if (purchaseAmount <= 57000) {
                discountRate = 7.6;
            } else if (purchaseAmount <= 100000) {
                discountRate = 10.0;
            } else {
                discountRate = 15.0;
            }
            break;
        default:
            cout << "Invalid purchase type. Please enter 'L' for Laptop or 'D' for Desktop." << endl;
            return 1; // Exit program with error code 1
    }

    // Calculate discount and net amount
    discount = (discountRate / 100) * purchaseAmount;
    netAmount = purchaseAmount - discount;

    // Display customer information and net amount
    cout << "\nCustomer Name: " << name << endl;
    cout << "Customer Address: " << address << endl;
    cout << "Discount Rate: " << discountRate << "%" << endl;
    cout << "Discount Amount: Rs. " << discount << endl;
    cout << "Net Amount to be Paid: Rs. " << netAmount << endl;

    return 0;
}
*/