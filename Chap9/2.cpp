#include <iostream>

using namespace std;

void strcount(const string& str);

int main()
{
    string s;

    cout << "Enter a line (empty line to quit):" << endl;
    getline(cin, s);
    while (!s.empty())
    {
        strcount(s);
        cout << "Enter a line (empty line to quit):" << endl;
        getline(cin, s);
    }
}

void strcount(const string& str)
{
    static int total = 0;
    int count = 0;

    for (const char s : str)
        if (s != ' ')
            count++;

    total += count;
    cout << "Character count: " << count << endl;
    cout << "Total: " << total << endl;
}
