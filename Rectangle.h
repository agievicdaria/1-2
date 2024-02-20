#pragma once

class Rectangle {
private:
    double height;
    double width;

public:
    double GetHeight() const { return height; };
    double GetWidth() const { return width; };
    bool SetHeight(double h);
    bool SetWidth(double w);

    bool Init(double h, double w);
    void Read();
    void Display() const;
    double CalculateArea() const;
    double CalculatePerimeter() const;
};
