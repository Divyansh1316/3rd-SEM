#include <iostream>
using namespace std;

template <class T> // T can be any data type
void swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    float x = 2.3, y = 5.5;
    swapp(x, y);
    cout << x << " " << y;
    return 0;
}

// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// float funcavg(T1 a, T2 b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// };

// int main()
// {
//     float a = funcavg(2, 3.2);
//     cout << a;
//     return 0;
// }