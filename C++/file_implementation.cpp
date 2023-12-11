// Implementation of files.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while (fout)
    {
        getline(cin, line);
        if (line == ".")
        {
            break;
        }
        fout << line << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    while (!fin.eof())
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
    return 0;
}

/*
// another way to implement files.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while (getline(cin, line) && line==".")
    {
        fout << line << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
*/