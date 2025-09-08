#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int d = 0; d < n - i; d++)
            cout << ".";

        for (int s = 0; s < i; s++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
