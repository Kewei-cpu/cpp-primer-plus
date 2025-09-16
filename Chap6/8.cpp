#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("test.txt");
    unsigned long long total_chars = 0;
    string line;
    while (fin >> line)
    {
        total_chars += line.size();
    }
    fin.close();

    cout << "Total characters: " << total_chars << endl;
    return 0;
}
