#include <iostream>
using namespace std;

int main()
{
    double balance_d = 100;
    double balance_c = 100;
    int day;

    for (day = 0; balance_c <= balance_d; day++)
    {
        balance_d += 10;
        balance_c *= 1.05;
    }

    cout << "Day: " << day << endl;
    cout << "Daphne: " << balance_d << endl;
    cout << "Cleo : " << balance_c << endl;

    return 0;
}
