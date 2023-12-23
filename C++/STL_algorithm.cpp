// min_element and max_element algorithm

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l1;
    for (int i = 0; i < 6; i++)
    {
        l1.push_back(i);
    }

    list<int>::iterator it;
    it = min_element(l1.begin(), l1.end());
    cout << *it << endl;
    it = max_element(l1.begin(), l1.end());
    cout << *it;

    return 0;
}