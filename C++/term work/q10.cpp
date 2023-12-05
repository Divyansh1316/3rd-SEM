/*
Q10. Define a class named UserOne the given description:
Define another class named UserTwo  the given description:
ConstructC++ program to compare Father Name, Mother Name of both classes using friend
function. If Father name and Mother Name of both classes are equal then print the message
“Belongs to Same Family” and display message “ We are Brothers” or “We are Sisters” or
“We are brother and sister”, otherwise print the message “Belongs to different Family”.
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
#include <string>
using namespace std;

class UserTwo; // Forward declaration

class UserOne
{
private:
    string Name;
    string FatherName;
    string MotherName;
    string Gender;

public:
    void InputInfo()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Father's Name: ";
        getline(cin, FatherName);
        cout << "Enter Mother's Name: ";
        getline(cin, MotherName);
        cout << "Enter Gender: ";
        cin >> Gender;
    }

    friend void Userchecker(UserOne &ob1, UserTwo &ob2);
};

class UserTwo
{
private:
    string Name;
    string FatherName;
    string MotherName;
    string Gender;

public:
    void InputInfo()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Father's Name: ";
        getline(cin, FatherName);
        cout << "Enter Mother's Name: ";
        getline(cin, MotherName);
        cout << "Enter Gender: ";
        cin >> Gender;
    }

    friend void Userchecker(UserOne &ob1, UserTwo &ob2);
};

void Userchecker(UserOne &ob1, UserTwo &ob2)
{
    if (ob1.FatherName == ob2.FatherName && ob1.MotherName == ob2.MotherName)
    {
        cout << "Belongs to Same Family" << endl;
        if (ob1.Gender == "male" && ob2.Gender == "male")
        {
            cout << "We are Brothers" << endl;
        }
        else if (ob1.Gender == "female" && ob2.Gender == "female")
        {
            cout << "We are Sisters" << endl;
        }
        else
        {
            cout << "We are brother and sister" << endl;
        }
    }
    else
    {
        cout << "Belongs to Different Family" << endl;
    }
}

int main()
{
    UserOne ob1;
    UserTwo ob2;

    cout << "Enter details for UserOne:" << endl;
    ob1.InputInfo();

    cout << "Enter details for UserTwo:" << endl;
    ob2.InputInfo();

    Userchecker(ob1, ob2);

    return 0;
}