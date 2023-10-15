#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void display()
    {
        cout << "Salary is :" << salary << endl;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    Employee fb[n];
    for (int i = 0; i < n; i++)
    {
        fb[i].setId();
        fb[i].getId();
        fb[i].display();
    }
    return 0;
}