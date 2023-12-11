#include <iostream>
using namespace std;

template <class T>
class myClass
{
public:
    T data;
    myClass(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void myClass<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "First func " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "Templatized func " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "Templatized func " << a << endl;
}

int main()
{
    // myClass<float> h(5.5);
    // h.display();
    func(4); // both func have same name but non-templatized has higher priority
    func1(4);
    return 0;
}