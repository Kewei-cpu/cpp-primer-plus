#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age contains "
         << age * 12
         << " months.";
    return 0;
}