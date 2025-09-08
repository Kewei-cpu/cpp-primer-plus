#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter words (to stop, type the word done):" << endl;
    string word;
    int count;

    for (count = 0, cin >> word; word != "done"; count++)
        cin >> word;

    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}
