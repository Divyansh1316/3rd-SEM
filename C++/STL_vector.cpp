#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vect1)
{
    for (int i = 0; i < vect1.size(); i++)
    {
        cout << vect1[i] << " ";
        // cout << vect1.at(i); //also used to display vector
    }
}

int main()
{
    vector<int> vec1;
    int sz, element, pos;
    cout << "Enter size of vector : ";
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        cout << "Enter element : ";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back(); // deletes the last element

    // use of iterator in insert fn
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 500); // by default inserts at beginning

    // if we want to insert at 2nd position:
    vec1.insert(iter + 1, 200);

    // if we want multiple copies of 200 to insert at 2nd position:
    vec1.insert(iter + 1, 5, 200);

    // if we want to insert at given position:

    cout << "Enter position where insert : ";
    cin >> pos;
    vec1.insert(iter + pos - 1, 200);
    // vector<char> vect2(4);     // vector of 4 elements
    // vector<char> vect3(vect2); // vector of 4 elements using vector 2
    // vector<char> vect4(6, 3);  // vector of 6 elements and all of them are 3
    display(vec1);

    return 0;
}