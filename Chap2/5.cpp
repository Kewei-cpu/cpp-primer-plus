#include <iostream>
using namespace std;

float toFahrenheit(float temperature)
{
    return temperature * 1.8 + 32.0;
}

int main()
{
    float temperature;
    cout << "Enter a Celsius value: ";
    cin >> temperature;
    cout << temperature
         << " degrees Celsius is "
         << toFahrenheit(temperature)
         << " degrees Fahrenheit";
    return 0;
}