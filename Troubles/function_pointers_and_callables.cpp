#include <bits/stdc++.h>

using namespace std;


using IntFunc1 = function<int(int, int)>;
using IntFunc2 = int(int, int);
using PointerIntFunc = int(*)(int, int);

typedef int IntFunc(int, int);
typedef int (*PointerIntFunc)(int, int);


int Int(int, int) { return 0; }
auto& f1 = Int;
