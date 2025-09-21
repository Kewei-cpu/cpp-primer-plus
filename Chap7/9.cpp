#include <iostream>
using namespace std;
const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the info of student #" << (i + 1) << endl;
        cout << "Full name: ";
        cin.getline(pa[i].fullname, SLEN);
        if (!pa[i].fullname[0]) break;
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "OOP level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st)
{
    cout << "Student: " << endl;
    cout << "Full name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP level: " << st.ooplevel << endl;
    cout << endl;
}

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student* ps)
{
    cout << "Student: " << endl;
    cout << "Full name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "OOP level: " << ps->ooplevel << endl;
    cout << endl;
}

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student #" << (i + 1) << ": " << endl;
        cout << "Full name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "OOP level: " << pa[i].ooplevel << endl;
        cout << endl;
    }
}

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done \n";
    return 0;
}
