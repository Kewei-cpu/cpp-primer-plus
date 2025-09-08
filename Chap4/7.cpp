#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string name;
    double size{};
    double weight{};
};

int main()
{
    Pizza pizza;
    cout << "name: ";
    getline(cin, pizza.name);

    cout << "size: ";
    cin >> pizza.size;

    cout << "weight: ";
    cin >> pizza.weight;

    cout << pizza.name << endl;
    cout << pizza.size << endl;
    cout << pizza.weight << endl;
}
