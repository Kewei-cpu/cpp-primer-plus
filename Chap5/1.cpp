#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a small and a big number: ";
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }

    cout << "Sum: " << sum;
    return 0;
}
