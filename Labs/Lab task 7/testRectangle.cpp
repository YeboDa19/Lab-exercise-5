#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main() {

    /*// First class instance
    Rectangle myRetcangle = Rectangle();

    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the Width of the rectangle: ";
    cin >> width;

    myRetcangle.setLength(length);
    myRetcangle.setWidth(width);

    cout << "The area of the rectangle is "
         << myRetcangle.calculateRectangleArea(); */

    // Second class instance
    float length2, width2;
    cout << "Enter the length of the rectangle: ";
    cin >> length2;
    cout << "Enter the Width of the rectangle: ";
    cin >> width2;
    Rectangle myRectangle2 = Rectangle(length2, width2);

    cout << "The area of the rectangle is "
         << myRectangle2.calculateRectangleArea();

    return 0;
}