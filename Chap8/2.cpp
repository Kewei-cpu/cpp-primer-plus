#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

CandyBar& create_bar(CandyBar& bar, const char* brand, double weight, int calories)
{
    bar.brand = brand;
    bar.weight = weight;
    bar.calories = calories;

    return bar;
}

void show_bar(const CandyBar& bar)
{
    cout << "Brand: " << bar.brand << endl;
    cout << "Weight: " << bar.weight << endl;
    cout << "Calories: " << bar.calories << endl;
}


int main()
{
    CandyBar bar;

    show_bar(create_bar(bar, "123", 123.123, 123));
}
