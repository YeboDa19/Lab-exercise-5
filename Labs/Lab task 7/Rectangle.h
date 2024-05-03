#pragma once

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float newLength, float newWidth);
    float calculateRectangleArea ();
    float getLength();
    float getWidth();
    void setLength(float newLength);
    void setWidth(float newWidth);
};