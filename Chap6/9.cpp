#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Patron
{
    string name;
    double donation{};
};

int main()
{
    int n;
    ifstream fin;

    fin.open("test.txt");

    // a shortened way:
    // ifstream fin("test.txt");

    fin >> n;
    fin.get(); // consume \n

    auto patrons = new Patron[n];

    for (int i = 1; i < n; i++)
    {
        getline(fin, patrons[i].name);
        fin >> patrons[i].donation;
        fin.get(); // consume \n
    }

    cout << "====== Grand Patrons ======" << endl;
    bool none = true;
    for (int i = 1; i < n; i++)
    {
        if (patrons[i].donation > 10000)
        {
            cout << patrons[i].name << "     donated $" << patrons[i].donation << endl;
            none = false;
        }
    }
    if (none) cout << "none";

    cout << "====== Other Patrons ======" << endl;

    none = true;
    for (int i = 1; i < n; i++)
    {
        if (patrons[i].donation <= 10000)
        {
            cout << patrons[i].name << "     donated $" << patrons[i].donation << endl;
            none = false;
        }
    }
    if (none) cout << "none";

    fin.close();
    delete[] patrons;

    return 0;
}
