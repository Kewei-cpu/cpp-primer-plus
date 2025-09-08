#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<long double, 101> arr{};
    arr[0] = 1.0;

    for (int i = 1; i <= 100; i++)
        arr[i] = arr[i - 1] * i;

    cout << "100! = " << arr[100];
    return 0;
}
