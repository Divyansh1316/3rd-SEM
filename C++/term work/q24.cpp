/*
Q24. Construct a C++ program to accept and print the employee details during runtime. The details will include employee id, name, dept Id. The program should raise an exception if user inputs incomplete or incorrect data. The entered value should meet the following conditions:

(1) First Letter of employee name should be in capital letter

(11) Employee id should be between 2001 and 5001

(m) Department id should be an integer between I and 5 If the above conditions are not met, then the application should raise specific exception else should complete normal execution
*/

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
#include <string>
using namespace std;

class emp
{
public:
    int empId;
    string name;
    float deptId;

    void setdata(int x, string y, float z)
    {
        empId = x;
        name = y;
        deptId = z;
    }
    void display()
    {
        cout << "Details of employee : " << endl;
        cout << "Name : " << name << endl;
        cout << "Employee Id: " << empId << endl;
        cout << "Department Id : " << deptId << endl;
    }
};

int main()
{
    try
    {
        int empId;
        string name;
        float deptId;
        cout << "Enter employee ID : ";
        cin >> empId;
        if (!(empId >= 2001 && empId <= 5001))
        {
            throw(empId);
        }

        cout << "Enter employee name : ";
        cin.ignore();
        getline(cin, name);
        if (!(name[0] >= 65 && name[0] <= 90))
        {
            throw(name[0]);
        }

        cout << "Enter department ID : ";
        cin >> deptId;
        if (!(deptId >= 1 && deptId <= 5))
        {
            throw(deptId);
        }

        emp ob;
        ob.setdata(empId, name, deptId);
        ob.display();
        return 0;
    }
    catch (int empId)
    {
        cout << "Employee ID should be between 2001 and 5001." << endl;
    }
    catch (char firstLetter)
    {
        cout << "First letter of the employee name should be in capital." << endl;
    }
    catch (float deptId)
    {
        cout << "Department ID should be an integer between 1 and 5." << endl;
    }
}