#include <iostream>
using namespace std;

int main()
{
    int distance;
    cout << "Input a distance (in long): ";
    cin >> distance;
    cout << distance
         << " long equals "
         << distance * 220
         << " feet"
         << endl;
    return 0;
}