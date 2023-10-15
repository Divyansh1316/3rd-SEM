/* Types of inheritance:
1. Single level
    A derived class with only one base class.
2. Multi level
    Deriving class from an already derived class.
3. Multiple
    A derived class with more than one base class.
4. Heirarchial
    Several derived class from a single base class.
5. Hybrid
    Combination of multiple and multi level inheritance.
*/

/* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited

                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	  Not Inherited           Not Inherited            Not Inherited
Protected members           	Protected               Private                  Protected
Public members           	     Public	                Private                  Protected

*/
/*
#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {}
};

class programmer : public employee
{
public:
    int languageCode;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}*/

/*
// Single level inheritance using derived class as private class.

#include <iostream>
using namespace std;

class base
{
    int data1;  //private by default and is not inheritable

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "Value of data 1 is : " << getdata1() << endl;
    cout << "Value of data 2 is : " << data2 << endl;
    cout << "Value of data 3 is : " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}
*/

// Single level inheritance using derived class as private class.

#include <iostream>
using namespace std;

class base
{
    int data1; // private by default and is not inheritable

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    setdata(); // public member function of base is private now so called inside the public member function of derived class.
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "Value of data 1 is : " << getdata1() << endl;
    cout << "Value of data 2 is : " << data2 << endl;
    cout << "Value of data 3 is : " << data3 << endl;
}
int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}