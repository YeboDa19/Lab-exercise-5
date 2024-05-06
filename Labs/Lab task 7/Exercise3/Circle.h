#pragma once

namespace shapes
{
    class Circle
    {
    private:
        float radius;
    public:
        Circle();
        Circle(float newRadius);
        float getRadius();
        void setRadius(float newRadius);
        ~Circle();
    };
}