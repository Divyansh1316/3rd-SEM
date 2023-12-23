#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    string sq, line;
    out.open("shubh.txt");
    cout << "enter the text in the file" << endl;
    while (getline(cin, line) && line != ".")
    {
        out << line << endl;
    }

    out.close();
    ifstream in;
    in.open("shubh.txt");
    out.open("singh.txt");
    while (!in.eof())
    {
        getline(in, sq);
        out << sq << endl;
    }
    out.close();

    return 0;
}