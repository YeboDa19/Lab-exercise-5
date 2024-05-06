#include "Circle.h"

shapes::Circle::Circle(){}

shapes::Circle::Circle(float newRadius) {
    radius = newRadius;
}

float shapes::Circle::getRadius() {
    return radius;
}

void shapes::Circle::setRadius(float newRadius) {
    radius = newRadius;
}
shapes::Circle::~Circle() {}