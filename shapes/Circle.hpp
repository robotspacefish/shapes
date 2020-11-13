#pragma once

namespace ShapeAssessment
{
    class Circle
    {
    public:
        Circle(float radius);

        float getArea();
    private:
        float mRadius;
    };
}
