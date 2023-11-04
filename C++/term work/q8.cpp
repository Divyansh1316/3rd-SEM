/*
Q8. Imagine a tollbooth with a class called TollBooth. The two data items are of type unsigned
int and double to hold the total number of cars and total amount of money collected. A
constructor initializes both of these data members to 0. A member function called payingCar()
increments the car total and adds 0.5 to the cash total. Another function called nonPayCar( )
increments the car total but adds nothing to the cash total. Finally a member function called
display( )shows the two totals. Include a program to test this class. This program should allow
the user to push one key to count a paying car and another to count a non paying car. Pushing
the ESC key should cause the program to print out the total number of cars and total cash and
then exit.
*/
#include <iostream>
using namespace std;

class TollBooth
{
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth()
    {
        totalCars = 0;
        totalCash = 0;
    }
    void payingCar()
    {
        totalCars++;
        totalCash += 0.5;
    }

    void nonPayCar()
    {
        totalCars++;
    }

    void display()
    {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash collected: $" << totalCash << endl;
    }
};

int main()
{
    char key;
    TollBooth ob;
    do
    {
        cout << "Press 'P' to count a paying car, 'N' to count a non-paying car, or 'ESC' to exit: ";

        cin >> key;
        key = toupper(key);
        switch (key)
        {
        case 'P':
            ob.payingCar();
            cout << "Counted a paying car." << endl;
            break;
        case 'N':
            ob.nonPayCar();
            cout << "Counted a non-paying car." << endl;
            break;
        case 27:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid Output" << endl;
        }
    } while (key != 27);

    ob.display();
    return 0;
}