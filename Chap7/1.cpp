#include <iostream>

using namespace std;

double harmonic_average(double x, double y)
{
    return (2.0 * x * y) / (x + y);
}

int main()
{
    double a, b;
    cout << "Enter two numbers: ";

    while (cin >> a && a > 0 && cin >> b && b > 0)
    {
        double avg = harmonic_average(a, b);
        cout << "Harmonic average: " << avg << endl;
        cout << "Enter two numbers: ";
    }
}
