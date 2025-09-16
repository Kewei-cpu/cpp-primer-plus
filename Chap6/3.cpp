#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Please enter one of the following choices:" << endl
        << "c) carnivore p) pianist" << endl
        << "t) tree g) game" << endl;


    char input;
    cin.get(input);

    while (input != 'c' && input != 'p' && input != 'g' && input != 't')
    {
        cout << "Please enter ac, p, t, or g: ";
        cin.get(input);
    }

    switch (input)
    {
    case'c':
        cout << "carnivore";
        break;
    case 'p':
        cout << "pianist";
        break;
    case't':
        cout << "tree";
        break;
    default:
        cout << "game";
    };
}
