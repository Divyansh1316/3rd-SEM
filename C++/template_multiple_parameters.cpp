// Templates provide the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types.

#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass
{
public:
    T1 x;
    T2 y;
    myClass(T1 a, T2 b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << y;
    }
};

int main()
{
    myClass<float, char> obj(1.5, 'c');
    obj.display();
    return 0;
}