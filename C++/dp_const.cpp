#include <iostream>
#include <string>
using namespace std;

class student
{

public:
    student()
    {
        string name = "Divyansh";
        int rno = 29;
        cout << "Name is : " << name << endl;
        cout << "Rno is : " << rno << endl;
    }
};

class marks : virtual public student
{
public:
    marks()
    {
        int m1 = 90, m2 = 93, m3 = 95;
        int total;
        total = m1 + m2 + m3;
        cout << "Total marks are : " << total << endl;
    }
};

class sports : virtual public student
{
public:
    sports()
    {
        int sp = 54;
        cout << "Sports marks are : " << sp << endl;
    }
};

class tot : public marks, public sports
{
public:
    tot() : sports(), marks()
    {
        cout << "Total marks are : " << marks::total + sports::sp << endl;
        cout << "Percentage is : " << (total + sp) / 4 << "%" << endl;
    }
};

int main()
{
    tot ob;
    return 0;
}