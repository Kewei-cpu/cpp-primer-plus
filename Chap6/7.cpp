#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter words (q to quit): " << endl;

    string word;
    cin >> word;

    int stats[3]{};

    while (word != "q")
    {
        char first_letter = word[0];

        if (isalpha(first_letter))
        {
            switch (first_letter)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                stats[0]++;
                break;

            default:
                stats[1]++;
            }
        }
        else stats[2]++;

        cin >> word;
    }

    cout << stats[0] << " words beginning with vowels" << endl
        << stats[1] << " words beginning with consonants" << endl
        << stats[2] << " others" << endl;
}
