#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main()
{
    // 1
    char actor[30];
    short betsie[100];
    float chunk[13];
    long double dipsea[64];

    // 2
    array<char, 30> actor_;
    array<short, 100> betsie_;
    array<float, 13> chunk_;
    array<double long, 64> dipsea_;

    // 3
    int first_5_odds[5] = {1, 3, 5, 7, 9};

    // 4
    int even = first_5_odds[0] + first_5_odds[4];

    // 5
    float ideas[2] = {1.2f, 2.4f};
    cout << ideas[1] << endl;

    // 6
    char food[13] = "cheeseburger";

    // 7
    string food_2 = "Waldorf Salad";

    // 8
    struct Fish
    {
        string type;
        int weight;
        double length;
    };

    // 9
    Fish fish{"Nemo", 20, 12.9};

    // 10
    double ted = 20.0;
    double* pt = &ted;
    cout << *pt;

    // 11
    float treacle[10];
    float* pt1 = treacle;
    // this is equivalent:
    // float* pt1 = &treacle[0];
    cout << *pt1 << *(pt1 + 9) << endl;

    // 13
    int length;
    cin >> length;
    int* arr = new int[length];
    vector<int> arr2(length);

    // 14
    cout << (int*)"Home of the jolly bytes";
    // Output: Home of the jolly bytes

    // 15
    Fish* f = new Fish{
        "Nemo", 20, 12.9
    };
    cout << f->type << f->length << f->weight;
    delete f;

    // 16
    // 只能读取第一个单词

    // 17
    const int str_num = 10;
    std::vector<std::string> str_vec(str_num);
    std::array<std::string, str_num> str_arr;

    return 0;
}
