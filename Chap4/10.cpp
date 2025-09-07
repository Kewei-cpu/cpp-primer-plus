#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 3> scores;
    cout << ": ";
    cin >> scores[0];
    cout << ": ";
    cin >> scores[1];
    cout << ": ";
    cin >> scores[2];

    cout << "average: " << (scores[0] + scores[1] + scores[2]) / 3 << endl;

    return 0;
}
