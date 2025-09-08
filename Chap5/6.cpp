#include <iostream>
#include <string>

using namespace std;

int main()
{
    string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    cout << "Enter sales by month:" << endl;
    int sales[3][12]{};

    for (int year = 0; year < 3; year++)
    {
        for (int month = 0; month < 12; month++)
        {
            cout << months[month] << ", year " << year + 1 << ": ";
            int sale;
            cin >> sale;
            sales[year][month] = sale;
        }
    }

    int total = 0;
    for (int year = 0; year < 3; year++)
    {
        cout << "Year " << year + 1;
        int yearly_total = 0;
        for (int s: sales[year])
            yearly_total += s;
        cout << " total sales: " << yearly_total << endl;
        total += yearly_total;
    }
    cout << "Total sales: " << total << endl;

    return 0;
}
