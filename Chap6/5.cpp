#include <iostream>
using namespace std;

double tax(double income)
{
    if (income <= 5000)
        return 0.0;
    if (income <= 15000)
        return 0.1 * (income - 5000);
    if (income <= 35000)
        return 0.1 * 10000 + 0.15 * (income - 15000);

    return 0.1 * 10000 + 0.15 * 20000 + 0.2 * (income - 35000);
}


int main()
{
    double income;
    cout << "Enter your income: ";
    while (cin >> income && income >= 0)
    {
        cout << "Your tax: " << tax(income) << " tvarps" << endl;
        cout << "Enter your income: ";
    }

}
