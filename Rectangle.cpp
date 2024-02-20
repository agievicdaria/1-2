#include "Rectangle.h"
#include <iostream>
using namespace std;

bool Rectangle::Init(double h, double w) {
    return SetHeight(h) && SetWidth(w);
}

void Rectangle::Read() {
    double h, w;
    do
    {
        cout << "Enter height: ";
        cin >> h;
        cout << "Enter width: ";
        cin >> w;
    } while (!Init(h, w));
}

void Rectangle::Display() const {
    cout << "Height = " << height << " Width = " << width << endl;
}

bool Rectangle::SetHeight(double h) {
    if (h > 0) {
        height = h;
        return true;
    } else {
        cout << "Height must be greater than 0." << endl;
        return false;
    }
}

bool Rectangle::SetWidth(double w) {
    if (w > 0) {
        width = w;
        return true;
    } else {
        cout << "Width must be greater than 0." << endl;
        return false;
    }
}

double Rectangle::CalculateArea() const {
    return height * width;
}

double Rectangle::CalculatePerimeter() const {
    return 2 * (height + width);
}
