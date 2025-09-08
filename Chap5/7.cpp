#include <iostream>
#include <string>

using namespace std;

struct Car
{
    string manufacturer;
    int year;
};

int main()
{
    cout << "How many cars do you wish to catalog? " << endl;
    int n;
    cin >> n;
    cin.get(); // consume newline

    auto cars = new Car[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make:";
        getline(cin, cars[i].manufacturer);
        cout << "Please enter the year made:";
        cin >> cars[i].year;
        cin.get(); // consume newline
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << cars[i].year << " " << cars[i].manufacturer << endl;
    }

    delete[] cars;
    return 0;
}
