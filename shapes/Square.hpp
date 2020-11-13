#pragma once

#include "Shape.hpp"

namespace ShapeAssessment
{
    class Square : public Shape
    {
    public:
        Square(float side);

        float getArea();
    };
}
