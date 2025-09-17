#include <iostream>

using namespace std;

long long C(int m, int n)
{
    double res = 1;
    for (; n > 0; m--, n--)
    {
        res *= m;
        res /= n;
    }
    return res;
}

int main()
{
    cout << "1 in " << C(47, 5) * C(27, 1) << endl;
}
