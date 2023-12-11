// Shubhankar Singh Sisodia,
// sec D
// Roll no 62
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
    fout.open("copy.txt");

    ifstream fin;
    fin.open("file1.txt");
    while (!fin.eof())
    {

        while (getline(fin, line))
        {
            fout << line << endl;
        }
    }

    fin.close();
    fout.close();
    fin.open("copy.txt");

    while (fin.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            c++;
        }
    }
    fin.close();

    cout << "Copy finished" << endl;
    cout << "Number of lines: " << n << endl;
    cout << "Number of words: " << c << endl;

    return 0;
}
