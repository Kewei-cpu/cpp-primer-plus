#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

template <>
const char* maxn(const char* arr[], int n)
{
    const char* max = arr[0];
    for (int i = 1; i < n; i++)
        if (strlen(arr[i]) > strlen(max)) max = arr[i];
    return max;
}

int main()
{
    int li[6]{1, 2, 3, 4, 5, 6};
    double ld[4]{1.0, 2.3, 3.3, 4};
    const char* ls[5] {"123", "vd", "fdsfds", "hajaha", "1"};
    cout << maxn(li, 6) << endl;
    cout << maxn(ld, 4) << endl;
    cout << maxn(ls, 5) << endl;
}
