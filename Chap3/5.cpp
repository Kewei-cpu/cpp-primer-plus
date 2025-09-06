#include <iostream>
using namespace std;

int main()
{
    long long worldPopulation;
    long long USPopulation;

    cout << "Enter the world's population: ";
    cin >> worldPopulation;

    cout << "Enter the population of the US: ";
    cin >> USPopulation;

    cout << "The population of the US is " << double(USPopulation) / double(worldPopulation) * 100 << " % of the world population.";
    return 0;
}