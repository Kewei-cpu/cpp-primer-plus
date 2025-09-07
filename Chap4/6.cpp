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

    CandyBar snacks[3];
    snacks[0].brand = "snack";
    snacks[0].weight = 12.50;
    snacks[0].calories = 230;

    cout << snacks[0].brand << endl;
    cout << snacks[0].weight << endl;
    cout << snacks[0].calories << endl;
    return 0;
}
