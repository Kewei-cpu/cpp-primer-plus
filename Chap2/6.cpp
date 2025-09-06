#include <iostream>
using namespace std;

double toAstronomicalUnit(double lightYear)
{
    return lightYear * 63240;
}

int main()
{
    double distance;
    cout << "Enter the number of light years: ";
    cin >> distance;
    cout << distance
         << " light years = "
         << toAstronomicalUnit(distance)
         << " astronomical units.";
    return 0;
}