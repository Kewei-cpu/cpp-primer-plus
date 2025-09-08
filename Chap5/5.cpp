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
    int sales[12]{};

    for (int month = 0; month < 12; month++)
    {
        cout << months[month] << ": ";
        int sale;
        cin >> sale;
        sales[month] = sale;
    }

    int total = 0;
    for (int s : sales)
        total += s;
    cout << "Total books sold: " << total << endl;

    return 0;
}
