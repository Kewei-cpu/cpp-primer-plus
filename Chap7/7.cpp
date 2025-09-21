#include <iostream>

using namespace std;

int* fill_array(int* start, const int* end)
{
    double temp;
    int i;

    for (i = 0; i < end - start; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        if (temp < 0) // signal to terminate
            break;
        *(start + i) = static_cast<int>(temp);
    }

    return start + i;
}

void show_array(const int* start, const int* end)
{
    for (int i = 0; i < end - start; i++)
    {
        cout << "Value #" << (i + 1) << ": ";
        cout << *(start + i) << endl;
    }
}


void revalue_array(const double r, int* start, const int* end)
{
    for (int i = 0; i < end - start; i++)
        *(start + i) = static_cast<int>(*(start + i) * r);
}


int main()


{
    int arr[10]{};

    fill_array(arr, arr + 10);
    show_array(arr, arr + 10);
    revalue_array(2.0, arr, arr + 10);
    show_array(arr, arr + 10);
}
