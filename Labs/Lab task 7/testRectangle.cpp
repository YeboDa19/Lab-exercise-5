#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main() {
    Rectangle myRetcangle = Rectangle();

    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the Width of the rectangle: ";
    cin >> width;

    myRetcangle.setLength(length);
    myRetcangle.setWidth(width);

    cout << "The area of the rectangle is "
         << myRetcangle.calculateRectangleArea();

    return 0;
}