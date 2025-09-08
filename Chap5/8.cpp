#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "Enter words (to stop, type the word done):" << endl;
    char word[20];
    int count;

    for (count = 0, cin >> word; strcmp(word, "done");
         count++
    )
        cin >> word;

    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}
