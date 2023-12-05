/*
Q6. Create a class called Invoice that a hardware store might use to represent an invoice for an
item sold at the store. An Invoice should include four pieces of information as instance.
Data Members ‐
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables. Provide a set
and a get method for each instance variable. In addition, provide a method named
getInvoiceAmount() that calculates the invoice amount (i.e., multiplies the quantity by the price
per item), then returns the amount as a double value. If the quantity is not positive, it should be
set to 0. If the price per item is not positive,it should be set to 0.0. Write a test application named
invoiceTest that demonstrates class Invoice’s capabilities.
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
#include <string>
using namespace std;
class invoice
{
    string partNumber, partDescription;
    int quantity;
    double price_per_item;

public:
    invoice(string x, string y, int p, double q)
    {
        partNumber = x;
        partDescription = y;
        quantity = p;
        price_per_item = q;
    }
    string setpartno()
    {
        return partNumber;
    }
    string setpartdes()
    {
        return partDescription;
    }
    int setprice()
    {
        if (price_per_item < 0)
        {
            return price_per_item = 0.0;
        }
        else
        {
            return price_per_item;
        }
    }
    int setqty()
    {
        if (quantity < 0)
        {
            return quantity = 0;
        }
        else
        {
            return quantity;
        }
    }
    int getInvoiceAmount()
    {
        return quantity * price_per_item;
    }
};

int main()
{
    invoice ob("Two", "Hammer", 10, 80.0);
    cout << "Part number is : " << ob.setpartno() << endl;
    cout << "Part description is : " << ob.setpartdes() << endl;
    cout << "Quantity is : " << ob.setqty() << endl;
    cout << "Price is : " << ob.setprice() << endl;
    cout << "Amount is : " << ob.getInvoiceAmount() << endl;
    return 0;
}