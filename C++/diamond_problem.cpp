#include <iostream>
#include <string>
using namespace std;
class stud
{
    string name;
    int age;

public:
    void set1(string a, int b)
    {
        name = a;
        age = b;
    }
    void get1()
    {
        cout << "NAME IS:  " << name << "  AGE IS:  " << age << endl;
    }
};
class marks : virtual public stud
{
    int mm1, mm2, mm3;

protected:
    int total;

public:
    marks() { mm1 = mm2 = mm3 = 0; }
    void set2(int a, int b, int c)
    {
        mm1 = a;
        mm2 = b;
        mm3 = c;
        total = mm1 + mm2 + mm3;
    }
    void get2()
    {
        cout << "MARKS OF SUB1:  " << mm1 << endl
             << "MARKS OF SUB2:  " << mm2 << endl
             << "MARKS OF SUB3:  " << mm3 << endl;
    }
};
class sports : public virtual stud
{
protected:
    int sp;

public:
    sports() { sp = 0; }
    void set3(int a) { sp = a; }
    void get3()
    {
        cout << "Sports marks : " << sp << endl;
    }
};

class result : public marks, public sports
{
public:
    void display()
    {
        stud::get1();
        marks::get2();
        sports::get3();
        cout << "TOTAL MARKS ARE:  " << marks::total + sports::sp << endl;
    }
};
int main()
{
    result r;
    r.set1("aryan", 19);
    r.set2(30, 40, 50);
    r.set3(50);
    r.display();
    return 0;
}
