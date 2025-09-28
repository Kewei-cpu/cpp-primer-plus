#include <iostream>
using namespace std;

struct chaff
{
    char gross[20];
    int slag;
};

int main()
{
    chaff* list[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Creating chaff #" << (i + 1) << endl;
        const auto pc = new chaff;
        cout << "Enter gross: ";
        cin.getline(pc->gross, 20);
        cout << "Enter slag: ";
        cin >> pc->slag;
        cin.get();
        list[i] = pc;
    }

    for (const auto i : list)
    {
        cout << "Chaff: " << i->gross << " " << i->slag << endl;
        delete i;
    }
}
