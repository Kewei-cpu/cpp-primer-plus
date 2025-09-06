#include <iostream>
using namespace std;

double toDegree(int deg, int min, int sec)
{
    return deg + min / 60.0 + sec / 3600.0;
}

int main()
{
    int deg;
    int min;
    int sec;

    cout << "Enter a latitude in degrees, minutes, and seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> deg;

    cout << "Next, enter the minutes of arc: ";
    cin >> min;

    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    cout << toDegree(deg, min, sec) << " degrees";

    return 0;
}