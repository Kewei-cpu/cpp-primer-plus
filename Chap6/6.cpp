#include <iostream>
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

    cout << "Enter the number of patrons: ";
    cin >> n;

    auto patrons = new Patron[n];

    for (int i = 0; i < n; i++)
    {
        cout << "patron #" << i + 1;
        cout << "Enter name: ";
        cin >> patrons[i].name;
        cout << "Enter donation: ";
        cin >> patrons[i].donation;
    }

    cout << "====== Grand Patrons ======" << endl;

    bool none = true;
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation > 10000)
        {
            cout << patrons[i].name << "\tdonated $" << patrons[i].donation << endl;
            none = false;
        }
    }
    if (none) cout << "none" << endl;

    cout << "====== Other Patrons ======" << endl;

    none = true;
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation <= 10000)
        {
            cout << patrons[i].name << "\tdonated $" << patrons[i].donation << endl;
            none = false;
        }
    }
    if (none) cout << "none" << endl;


    delete[] patrons;

    return 0;
}
