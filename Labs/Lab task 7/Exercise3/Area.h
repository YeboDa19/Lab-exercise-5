#pragma once
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

class Area
{
    public:
        static float calculateSquareArea(shapes::Square square);
        static float calculateTriangleArea(shapes::Triangle triangle);
        static float calculateCircleArea(shapes::Circle circle);
};