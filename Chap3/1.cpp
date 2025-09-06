#include <iostream>
using namespace std;

int main()
{
    const int INCH_IN_FEET = 12;
    int height;

    cout << "Enter your height(inch):__\b\b";
    cin >> height;

    cout << "Your height is " << height / INCH_IN_FEET << " feet "
         << height % INCH_IN_FEET << " inch";

    return 0;
}