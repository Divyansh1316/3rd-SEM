// Implementation of an Inline function to find the greatest among two integers.

#include <iostream>
using namespace std;
inline int great(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x = 5, y = 10;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    cout << "Greatest among is : " << great(x, y) << endl;
    return 0;
}