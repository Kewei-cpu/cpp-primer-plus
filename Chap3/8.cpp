#include <iostream>
using namespace std;

int main()
{
    double gas;

    cout << "Enter gas usage (L/100KM): ";
    cin >> gas;

    cout << 62.14 * 3.785 / gas << "gallon/mi";

    return 0;
}