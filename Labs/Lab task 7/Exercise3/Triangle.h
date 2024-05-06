#pragma once

namespace shapes
{
    class Triangle
    {
    private:
        float base;
        float height;
    public:
        Triangle();
        Triangle(float newBase, float newHeight);
        float getBase();
        float getHeight();
        void setBase(float newBase);
        void setHeight(float newHeight);
        ~Triangle();
    };
}