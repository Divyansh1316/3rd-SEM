// Q21. Implement a program to create a file and copy its contents into another file.

/*
Name :Divyansh Dhaundiyal
Roll no. : 29
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    fout.open("copy.txt");
    ifstream fin;
    fin.open("sample.txt");
    if (fout && fin)
    {
        while (getline(fin, line))
        {
            fout << line << endl;
        }
        cout << "Copy finished";
    }
    fout.close();
    fin.close();
    return 0;
}