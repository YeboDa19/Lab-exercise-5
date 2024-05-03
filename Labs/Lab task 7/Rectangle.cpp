#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

float Rectangle::calculateRectangleArea() {
    // method for calculating the area of a rectangle
    return length * width;
}

float Rectangle::getLength() {
    // accessor method for getting length
    return length;
}

float Rectangle::getWidth() {
    // accessor method for getting length
    return width;
}

void Rectangle::setLength(float newLength) {
    // accessor method for getting length
    length = newLength;
}

void Rectangle::setWidth(float newWidth) {
    // accessor method for getting length
    width = newWidth;
}