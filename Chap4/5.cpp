#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight{};
    int calories{};
};

int main()
{
    CandyBar snack{
        "Mocha Munch",
        2.5,
        350
    };

    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calories << endl;
    return 0;
}
