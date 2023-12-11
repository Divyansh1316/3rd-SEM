// Implement a program to create a file and count the number of lines and the number of words present in the file.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n = 0, c = 0;
    char ch;
    ofstream fout;
    string line;
    fout.open("file1.txt");
    while (getline(cin, line) && line != ".")
    {
        fout << line << endl;
        n++;
    }
    fout.close();
    ifstream fin;
    fin.open("file1.txt");
    while (!fin.eof())
    {
        ch = fin.get();
        if (ch == ' ' || ch == '\n')
        {
            c++;
        }
    }
    cout << "Number of lines: " << n << endl;
    cout << "Number of words: " << c << endl;
    fin.close();
    return 0;
}