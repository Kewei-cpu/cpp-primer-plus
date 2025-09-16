#include <iostream>
using namespace std;

const int strsize = 50;

struct bop
{
    char fullname[strsize]; // real name
    char title[strsize]; // job title
    char bopname[strsize]; // secret BOP name
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    bop members[3]
    {
        bop{"Wimp Macho", "engineer", "wmcjp", 1},
        bop{"Rachi Rhodes", "excutives", "fdsf", 0},
        bop{"Celia Laiter", "manager", "asdas", 2},
    };

    cout << "Benevolent Order of Programmers Report" << endl
        << "a. display by name      b. display by title" << endl
        << "c. display by bopname   d. display, by preference" << endl
        << "q quits" << endl;

    char input;
    cin.get(input).get();

    while (input != 'q')
    {
        for (bop mem : members)
        {
            if (input == 'a' || input == 'd' && mem.preference == 0)
            {
                cout << mem.fullname << endl;
            }
            else if (input == 'b' || input == 'd' && mem.preference == 1)
            {
                cout << mem.title << endl;
            }
            else if (input == 'c' || input == 'd' && mem.preference == 2)
            {
                cout << mem.bopname << endl;
            }
            else
            {
                cout << "invalid input, try again: ";
                break;
            }
        }
        cin.get(input).get();
    }
}
