#include <iostream>
using namespace std;

float BMI(float height, float weight) {
    return weight / (height * height);
}

int main()
{
    const float KG_IN_POUND = 1 / 2.2f;
    const int INCH_IN_FEET = 12;
    const float M_IN_INCH = 0.0254f;

    float height_feet;
    float height_inch;
    float weight_pound;

    cout << "Height feet: ";
    cin >> height_feet;

    cout << "Height inch: ";
    cin >> height_inch;

    cout << "Weight pound: ";
    cin >> weight_pound;

    cout << "Your BMI is "
         << BMI(M_IN_INCH * (height_feet * INCH_IN_FEET + height_inch), KG_IN_POUND * weight_pound);
        
    return 0;
}