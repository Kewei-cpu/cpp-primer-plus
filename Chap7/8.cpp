#include <iostream>

using namespace std;

void fill(const char* const * snames, double* expenses)
{
    for (int i = 0; i < 4; i++)
    {
        cout << snames[i] << ": ";
        cin >> expenses[i];
    }
}

void print(const char* const * snames, const double* expenses)
{
    for (int i = 0; i < 4; i++)
    {
        cout << snames[i] << ": $" << expenses[i] << endl;
    }
}

int main()
{
    const char* const snames[4]{"Spring", "Summer", "Fall", "Winter"};
    double expenses[4];

    fill(snames, expenses);
    print(snames, expenses);
}
