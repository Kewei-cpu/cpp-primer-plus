#include <iostream>

using namespace std;

int main()
{
    double donations[10]{};
    double d;
    int count = 0;
    cout << "Enter donations: ";

    while (count < 10 && cin >> d)
    {
        donations[count] = d;
        count++;
    }

    double total = 0.0;
    for (double don : donations)
    {
        total += don;
    }
    double average = total / count;

    int more_than_average = 0;
    for (double don : donations)
    {
        if (don > average)
            more_than_average++;
    }

    cout << count << " donations" << endl;
    cout << "average: " << average << endl;
    cout << more_than_average << " donations are more than average" << endl;
}
