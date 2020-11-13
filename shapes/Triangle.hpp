#pragma once

namespace ShapeAssessment
{
    class Triangle
    {
    public:
        Triangle(float height, float base);
        
        float getArea();
    private:
        float mHeight;
        float mBase;
    };
}
