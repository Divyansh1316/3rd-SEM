#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int age, enroll_no, marks;

public:
    void setdata()
    {
        cout << "Enter detauls of student : " << endl;
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter enroll_no : ";
        cin >> enroll_no;
        cout << "Enter marks : ";
        cin >> marks;
    }
    void display()
    {
        cout << "Details of student : " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll no : " << enroll_no << endl;
        cout << "Marks : " << marks << endl;
    }
};

class faculty
{
    string facultyName, dept, gender;
    int facultyCode, salary, age, experience;

public:
    void setdata()
    {
        cout << "Enter details of factulty : " << endl;
        cout << "Enter name : ";
        cin.ignore();
        getline(cin, facultyName);
        cout << "Enter faculty code : ";
        cin >> facultyCode;
        cin.ignore();
        cout << "Enter department : ";
        getline(cin, dept);
        cout << "Enter salary : ";
        cin >> salary;
        cin.ignore();
        cout << "Enter gender : ";
        getline(cin, gender);
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter experience : ";
        cin >> experience;
    }
    void display()
    {
        cout << "Details of faculty : " << endl;
        cout << "Name : " << facultyName << endl;
        cout << "Department : " << dept << endl;
        cout << "Gender : " << gender << endl;
        cout << "Factulty code : " << facultyCode << endl;
        cout << "Salary : " << salary << endl;
        cout << "Age : " << age << endl;
        cout << "Experience : " << experience << endl;
    }
};

class person : public student, public faculty
{
public:
    void call()
    {
        student::setdata();
        student::display();
        faculty::setdata();
        faculty::display();
    }
};

int main()
{
    person ob;
    ob.call();
    return 0;
}