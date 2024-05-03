#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(float newLength, float newWidth) {
    length = newLength;
    width = newWidth;
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