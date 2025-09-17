#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(box b)
{
    cout << "Box {" << endl
        << "maker: " << b.maker << endl
        << "height: " << b.height << endl
        << "width: " << b.width << endl
        << "length: " << b.length << endl
        << "volume: " << b.volume << endl
        << "}" << endl;
}

void calc_volume(box* b)
{
    b->volume = b->length * b->width * b->height;
}


int main()
{
    box b{
        "kevin",
        12.0,
        12.0,
        24.0
    };

    show_box(b);
    calc_volume(&b);
    show_box(b);

    return 0;
}
