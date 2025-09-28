#pragma once

#include <iostream>
#include <cstring>


using namespace std;

const int Len = 40;

struct golf
{
    char fullname[Len];
    int handicap;
};

// non-interactive version
inline void setgolf(golf& g, const char* name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

// interactive version
inline int setgolf(golf& g)
{
    cout << "Creating golf structure: " << endl;
    cout << "Fullname: ";
    cin.getline(g.fullname, Len);
    cout << "Handicap: ";
    cin >> g.handicap;

    return strlen(g.fullname) ? 1 : 0;
}

inline void resets(golf& g, int hc)
{
    g.handicap = hc;
}

inline void showgolf(golf& g)
{
    cout << "Golf:" << endl;
    cout << "Fullname: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}


