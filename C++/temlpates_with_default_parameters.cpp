#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class myClass
{
public:
    T1 a;
    T2 b;
    T3 c;
    myClass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << endl;
    }
};

int main()
{
    myClass<> ob1(1, 2.5, 'c'); // this is defaut parameter
    ob1.display();
    myClass<char, float, char> ob2('a', 4.5, 'b'); // this is not defaut parameter
    ob2.display();
    return 0;
}