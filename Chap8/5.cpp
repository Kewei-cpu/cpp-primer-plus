#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[5])
{
    T max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main()
{
    int li[5]{1, 2, 3, 4, 5};
    double ld[5]{1.0, 2.3, 3.3, 4.0, 6.0};
    cout << max5(li) << endl;
    cout << max5(ld) << endl;
}
