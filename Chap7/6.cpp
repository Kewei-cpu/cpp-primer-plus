#include <iostream>
using namespace std;

double* fill_array(double* arr, int length)
{
    cout << "Initializing array of length " << length << endl;
    for (int i = 0; i < length; ++i)
    {
        double num = 1;
        cout << "Enter number: ";
        cin >> num;
        cout << num << endl;
        arr[i] = num;
    }
    return arr;
}

void show_array(const double* arr, int length)
{
    cout << "Your array: " << endl;
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double* reverse_array(double* arr, int length)
{
    for (int i = 0; i < length - i - 1; i++)
    {
        const double tmp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = tmp;
    }
    return arr;
}

int main()
{
    int arr_len = 5;
    double arr[arr_len];

    fill_array(arr, arr_len);
    show_array(arr, arr_len);
    reverse_array(arr, arr_len);
    show_array(arr, arr_len);
}
