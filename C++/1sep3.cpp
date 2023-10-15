/*3. Anna is a contender for valedictorian of her high school. She wants to know how many students (if
any) have scored higher than her in the exams given during this semester.
Create a class named Student with the following specifications:
➢ An instance variable named scores holds a student's 5 exam scores.
➢ A void input () function reads 5 integers and saves them to scores.
➢ An int calculateTotalScore() function that returns the sum of the student's scores.
Input Format
In the void Student::input() function, you must read 5 scores from standard input and save them to your
scores instance variable.
Output Format
In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of
the values in scores).
The code in the editor will determine how many scores are larger than Anna’s and print that number to
the console.*/

#include <iostream>
using namespace std;
class student
{
    char name[20];
    int scores[5];

public:
    void input();
    int calculateTotalScore();
} s[2];
void student ::input()
{
    cout << "Enter details of student :\n";
    getchar();
    cout << "Enter name : ";
    cin.getline(name, sizeof(name));
    cout << "Enter marks in 5 subjects : ";
    for (int j = 0; j < 5; j++)
    {
        cin >> scores[j];
    }
}
int student ::calculateTotalScore()
{
    int orig = 495, sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum += scores[j];
    }
    cout << "Sum of scores is : " << sum << "\n";
    if (sum > orig)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n, c = 0;
    cout << "Enter number of students : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].input();
        c += s[i].calculateTotalScore();
    }
    cout << "Number of students having marks higher than Anna are : " << c << "\n";
}