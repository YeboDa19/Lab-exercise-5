#include "Triangle.h"

shapes::Triangle::Triangle() {}

shapes::Triangle::Triangle(float newBase, float newHeight) {
    base = newBase;
    height = newHeight;
}

float shapes::Triangle::getBase() {
    return base;
}

float shapes::Triangle::getHeight() {
    return height;
}

void shapes::Triangle::setBase(float newBase) {
    base = newBase;
}

void shapes::Triangle::setHeight(float newHeight) {
    height = newHeight;
}
shapes::Triangle::~Triangle() {}