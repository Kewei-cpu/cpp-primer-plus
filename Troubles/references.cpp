#include <iostream>

void func(int& a)
{
    std::cout << 1 << std::endl;
}

void func(int&& a)
{
    std::cout << 2 << std::endl;
}

int main(int argc, char* argv[])
{
    
}
