#include <iostream>

using namespace std;

void ps(const char* str, int repeat = 1)
{
    while (repeat-- > 0)
        cout << str << endl;
}

int main()
{
    ps("123357348");
    ps("hajaha", 3);
}
