#include <iostream>
using namespace std;

int main()
{
    float distance;
    float gas;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter gas usage: ";
    cin >> gas;

    cout << gas / distance * 100 << " L per 100 KM";

    return 0;
}