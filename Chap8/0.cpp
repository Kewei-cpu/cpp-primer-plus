// inline functions
#include <iostream>

using namespace std;

// int a(int, int) {return 0;}
// int a(double) {return 0;}
// int a(long) {return 0;}

template <typename T>
int a(T& val) {return 0;}
template <typename T>
int a(T*& val) {return -1;}
template <typename T>
int a(T val) {return 1;}
// template<> int a(int* val) {return 2;}

// int a(int val)  {return 3;}
// int a(int& v) {return 2;}
// int a(int v) {return 1;}


int main()
{
    int lv = 2;
    cout << a(&lv) <<endl;
    cout << "finished" << endl;

    return 0;
}
