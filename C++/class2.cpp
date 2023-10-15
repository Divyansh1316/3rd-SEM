#include <iostream>
using namespace std;
class student
{
    char name[20];
    int rno;
    char dept[20];
    int age;
    int marks[5];

public:
    void read();
    void print();
    void calc();
};

void student ::read()
{
    cout << "Enter details of student : \n";
    cin.ignore();
    cout << "Enter name : ";
    cin.getline(name, sizeof(name));
    cout << "Enter roll no : ";
    cin >> rno;
    getchar();
    cout << "Enter department : ";
    cin >> dept;
    cout << "Enter age : ";
    cin >> age;
    for (int j = 0; j < 5; j++)
    {
        cout << "Enter marks in subject " << j + 1 << " : ";
        cin >> marks[j];
    }
}

void student ::calc()
{
    int total = 0;
    int avg = 0;
    for (int j = 0; j < 5; j++)
    {
        total += marks[j];
    }
    avg = total / 5;

    if (avg >= 90 && avg <= 100)
    {
        cout << "Grade A\n";
    }
    else if (avg >= 80 && avg < 90)
    {
        cout << "Grade B\n";
    }
    else if (avg >= 70 && avg < 80)
    {
        cout << "Grade C\n";
    }
    else if (avg >= 60 && avg < 70)
    {
        cout << "Grade D\n";
    }
    else
    {
        cout << "Fail\n";
    }
}

void student ::print()
{
    cout << "Details of student : \n";
    cout << "Name : " << name << "\n";
    cout << "Roll no : " << rno << "\n";
    cout << "Department : " << dept << "\n";
    cout << "Age : " << age << "\n";
    for (int j = 0; j < 5; j++)
    {
        cout << "Marks in subject " << j + 1 << " : ";
        cout << marks[j] << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].read();
        s[i].print();
        s[i].calc();
    }
}