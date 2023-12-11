// Divyansh Dhaundiyal, sec D, roll no 29
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int lines = 0, words = 0;
    char ch;
    ofstream fout;
    string name;
    fout.open("file1.txt");
    while (getline(cin, name) && name != ".")
    {
        fout << name << endl;
        lines++;
    }
    fout.close();
    fout.open("copy.txt");

    ifstream fin;
    fin.open("file1.txt");
    while (!fin.eof())
    {
        while (getline(fin, name))
        {
            fout << name << endl;
        }
    }

    fin.close();
    fout.close();
    fin.open("copy.txt");

    while (fin.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            words++;
        }
    }
    fin.close();

    cout << "Copy finished" << endl;
    cout << "Number of lines: " << lines << endl;
    cout << "Number of words: " << words << endl;

    return 0;
}