#pragma once

#include "Shape.hpp"

namespace ShapeAssessment
{
    class Triangle : Shape
    {
    public:
        Triangle(float height, float base);
        float getArea();
    };
}
