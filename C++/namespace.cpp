// WAP in C++ to demonstrate the concept of namespaces.

#include <iostream>
using namespace std;

namespace first
{
    int func()
    {
        cout << "First namespace";
    }
}
namespace second
{
    int func()
    {
        cout << "Second namespace";
    }
}

int main()
{
    first ::func();
    second ::func();
}