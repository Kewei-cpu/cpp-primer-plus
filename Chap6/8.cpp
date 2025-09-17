#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("test.txt");
    int total_chars = 0;
    char ch;
    while (fin.get(ch))
        if (isgraph(ch))
            total_chars++;

    fin.close();
    cout << "Total characters: " << total_chars << endl;
    return 0;
}
