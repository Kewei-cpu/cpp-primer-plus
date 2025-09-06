#include <iostream>
using namespace std;

int main()
{
    const int SECONDS_IN_DAY = 24 * 60 * 60;
    const int SECONDS_IN_HOUR = 60 * 60;
    const int SECONDS_IN_MINUTE = 60;
    long long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    cout << seconds / SECONDS_IN_DAY << " days, "
         << (seconds % SECONDS_IN_DAY) / SECONDS_IN_HOUR << " hours, "
         << (seconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE << " minutes, "
         << seconds % SECONDS_IN_MINUTE << " seconds";

    return 0;
}