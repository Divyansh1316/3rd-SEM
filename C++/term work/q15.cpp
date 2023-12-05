/*
Q15. You are given three classes A, B and C. All three classes implement their own version of func. In
class A, func multiplies the value passed as a parameter by 2. In class B, func multiplies the value
passed as a parameter by 3. In class C, func multiplies the value passed as a parameter by 5.You are
given class D such that You need to modify the class D and implement the function update_val
which sets D's val to new_val by manipulating the value by only calling the func defined in classes
A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors. Implement class
D's function update_val. This function should update D's val only by calling A, B and C's func.
Sample Input
new_val = 30
Sample Output
A's func called 1 times
B's func called 1 times
C's func called 1 times
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
using namespace std;

class A
{
    int a, count = 0;

public:
    void setdata1(int x)
    {
        a = x * 2;
        count++;
        cout << "A's function called " << count << " times." << endl;
    }
};

class B
{
    int a, count = 0;

public:
    void setdata2(int x)
    {
        a = x * 3;
        count++;
        cout << "B's function called " << count << " times." << endl;
    }
};

class C
{
    int a, count = 0;

public:
    void setdata3(int x)
    {
        a = x * 5;
        count++;
        cout << "C's function called " << count << " times." << endl;
    }
};

class D : public A, public B, public C
{
    int a, new_val;

public:
    void update_val(int x)
    {
        if (x % 2 == 0)
        {
            setdata1(x);
        }
        if (x % 3 == 0)
        {
            setdata2(x);
        }
        if (x % 5 == 0)
        {
            setdata3(x);
        }
        else
        {
            cout << "Invalid output" << endl;
        }
    }
};

int main()
{
    D d;
    d.update_val(30);
    return 0;
}