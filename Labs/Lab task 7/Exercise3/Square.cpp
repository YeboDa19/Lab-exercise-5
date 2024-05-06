#include "Square.h"

shapes::Square::Square() {}

shapes::Square::Square(float newSideLength)
{
    sideLength = newSideLength;
}

float shapes::Square::getSideLength ()
{
    return sideLength;
}

void shapes::Square::setSideLength(float newSideLength)
{
    sideLength = newSideLength;
}

shapes::Square::~Square(){}