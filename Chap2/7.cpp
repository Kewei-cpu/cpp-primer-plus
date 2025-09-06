#include <iostream>
using namespace std;

void printTime(int hour, int minute)
{
    cout << hour
         << ":"
         << minute
         << endl;
}

int main()
{
    int hour;
    int minute;

    cout << "Enter hour: ";
    cin >> hour;

    cout << "Enter minute: ";
    cin >> minute;

    printTime(hour, minute);
    return 0;
}