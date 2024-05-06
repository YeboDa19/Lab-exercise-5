#pragma once

namespace shapes
{
    class Square
    {
    private:
        float sideLength;
    public:
        Square();
        Square(float newSideLength);
        float getSideLength();
        void setSideLength(float newSideLength);
        ~Square();
    };
}