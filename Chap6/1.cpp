#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input;
    cin.get(input);

    while (input != '@')
    {
        if (isupper(input))
            cout << static_cast<char>(tolower(input));
        else if (islower(input))
            cout << static_cast<char>(toupper(input));
        else cout << input;

        cin.get(input);
    }
}
