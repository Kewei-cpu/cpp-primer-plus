#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i;
    do
    {
        cout << "Enter a number: ";
        cin >> i;
        sum += i;
    }
    while (i != 0);

    cout << "Sum: " << sum;
    return 0;
}
