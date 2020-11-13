#pragma once

#include "Shape.hpp"

namespace ShapeAssessment
{
    class Circle : public Shape
    {
    public:
        Circle(float radius);

        float getArea();
    };
}
