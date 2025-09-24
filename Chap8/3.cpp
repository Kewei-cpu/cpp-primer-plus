#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string toUpper(const string& str)
{
    string new_str;

    for (auto c : str)
        new_str.push_back(toupper(c));

    return new_str;
}

int main()
{
    string s;
    cout << "Enter a string (q to quit)";
    getline(cin, s);
    while (s != "q")
    {
        cout << toUpper(s) << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, s);
    }
}
