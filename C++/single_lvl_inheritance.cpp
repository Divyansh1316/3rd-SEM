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
}
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