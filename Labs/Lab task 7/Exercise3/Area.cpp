#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Area.h"

float Area::calculateSquareArea(shapes::Square square) {
    return square.shapes::Square::getSideLength() * square.shapes::Square::getSideLength();
}

float Area::calculateCircleArea(shapes::Circle circle) {
    return circle.shapes::Circle::getRadius() * circle.shapes::Circle::getRadius() * 3.14;
}

float Area::calculateTriangleArea(shapes::Triangle triangle) {
    return triangle.shapes::Triangle::getBase() * triangle.shapes::Triangle::getHeight() * 0.5; 
}