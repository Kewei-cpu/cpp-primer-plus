#include <iostream>

using namespace std;

double add(double a, double b) { return a + b; }

double sub(double a, double b) { return a - b; }

double mul(double a, double b) { return a * b; }

double calculate(double (*func)(double, double), double a, double b)
{
    return func(a, b);
}

int main()
{
    double (*(pf[3]))(double, double){&add, &sub, &mul};

    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (const auto f : pf)
    {
        cout << calculate(f, a, b) << endl;
    }
}
