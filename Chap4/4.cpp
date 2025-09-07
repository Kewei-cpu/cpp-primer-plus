#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter your last name: ";
    getline(cin, last_name);

    string full_name = last_name + ", " + first_name;

    cout << full_name;
    return 0;
}
