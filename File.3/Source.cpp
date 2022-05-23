#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string a;
    while (getline(fin, a))
    {
        for (int i = a.length(); i--;)
        {
            fout << a[i];
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    system("pause");
    return 0;
}