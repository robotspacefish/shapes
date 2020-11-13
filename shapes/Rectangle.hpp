#pragma once

#include "Shape.hpp"

namespace ShapeAssessment
{
    class Rectangle : public Shape
    {
    public:
        Rectangle(float length, float width);
        
        float getArea();
    };
}
