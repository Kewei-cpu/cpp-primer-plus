#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{
    const int length = 3;
    auto snacks = new CandyBar[length];
    snacks[0].brand = "snack";
    snacks[0].weight = 12.50;
    snacks[0].calories = 230;

    cout << snacks[0].brand << endl;
    cout << snacks[0].weight << endl;
    cout << snacks[0].calories << endl;

    delete[] snacks;
    return 0;
}
