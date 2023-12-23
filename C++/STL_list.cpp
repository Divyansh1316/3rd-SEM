#include <iostream>
#include <list>
using namespace std;

void display(list<int> l1)
{
    list<int>::iterator iter;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    int ele;
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);

    list<int> list2(3);
    list<int>::iterator it;
    it = list2.begin();
    for (it = list2.begin(); it != list2.end(); it++)
    {
        cout << "enter element : ";
        cin >> ele;
        *it = ele;
    }

    // *it = 45;
    // it++;
    // *it = 34;
    // it++;
    // *it = 12;
    // it++;
    display(list1);
    display(list2);

    /*
    list functions:
    l1.reverse();
    l1.sort();
    l1.remove(9);
    l1.merge(l2);

     */

    cout << "List1 after reverse : " << endl;
    list1.reverse();
    display(list1);

    cout << "Lists after sorting and merging : " << endl;

    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);
    return 0;
}