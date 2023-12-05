/*
Q14. Create a Base class that consists of private, protected and public data members and member
functions. Try using different access modifiers for inheriting Base class to the Derived class
and create a table that summarizes the above three modes (when derived in public, protected
and private modes) and shows the access specifier of the members of base class in the Derived
class.(verify and validate access mechanism and validity modes)
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

class base
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
};

class derivedprivate : private base
{
public:
    void display()
    {
        cout << c << b << endl;
    }
};

class derivedprotected : protected base
{
public:
    void display()
    {
        cout << c << b << endl;
    }
};

class derivedpublic : public base
{
public:
    void display()
    {
        cout << c << b << endl;
    }
};

int main()
{
    derivedprivate ob1;
    ob1.display();
    derivedprotected ob2;
    ob2.display();
    derivedpublic ob3;
    ob3.display();
    return 0;
}

/*
                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	  Not Inherited           Not Inherited            Not Inherited
Protected members           	Protected               Private                  Protected
Public members           	     Public	                Private                  Protected
*/