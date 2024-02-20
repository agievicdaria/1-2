#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle makeRectangle(double h, double w) {
    Rectangle rect;
    if (!rect.Init(h, w))
        cout << "Wrong arguments to Init" << endl;
    return rect;
}

int main() {
    Rectangle i;
    i.Read();
    i.Display();
    cout << "Area: " << i.CalculateArea() << endl;
    cout << "Perimeter: " << i.CalculatePerimeter() << endl;

    Rectangle r;
    double height, width;
    cout << "Enter dimensions for the rectangle:" << endl;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    r = makeRectangle(height, width);
    r.Display();
    cout << "Area: " << r.CalculateArea() << endl;
    cout << "Perimeter: " << r.CalculatePerimeter() << endl;

    return 0;
}
