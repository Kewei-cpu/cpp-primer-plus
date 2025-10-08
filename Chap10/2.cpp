#include <iostream>
#include <string>
#include <cstring>
#include <utility>

#include "../../../../../Program Files/JetBrains/CLion 2025.2.2/bin/mingw/x86_64-w64-mingw32/include/inttypes.h"

class Person
{
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }

    explicit Person(std::string ln, const char* fn = "Heyyou");

    void Show() const;
    void FormalShow() const;
};


Person::Person(std::string ln, const char* fn) : lname(std::move(ln))
{
    std::strcpy(fname, fn);
}

void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}


void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}


int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Diswiddy", "Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
}
