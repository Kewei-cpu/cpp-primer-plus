#include <iostream>

using namespace std;

long long factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    for (int i = 0; i < 11; i++)
    {
        cout << i << "! = " << factorial(i) << endl;
    }
}
