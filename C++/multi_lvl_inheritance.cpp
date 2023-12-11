// Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class.

#include <iostream>
using namespace std;

class student
{
protected:
    int rno;

public:
    void setrno(int r)
    {
        rno = r;
    }
    void getrno()
    {
        cout << "Roll no is : " << rno << endl;
    }
};

class exam : public student
{
protected:
    int mat, phy;

public:
    void setmark(int x, int y)
    {
        mat = x;
        phy = y;
    }
    void getmarks()
    {
        cout << "Marks in maths : " << mat << endl;
        cout << "Marks in physics : " << phy << endl;
    }
};

class tot : public exam
{
public:
    void calc()
    {
        cout << "Percentage is : " << (mat + phy) / 2 << endl;
    }
};

int main()
{
    tot r;
    r.setrno(29);
    r.getrno();
    r.setmark(90, 98);
    r.getmarks();
    r.calc();
    return 0;
}