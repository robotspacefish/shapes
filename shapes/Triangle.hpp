#pragma once

#include "Shape.hpp"

namespace ShapeAssessment
{
    class Triangle : public Shape
    {
    public:
//        Triangle(float height, float base);
        Triangle() : Shape{height, base};
        
        float getArea();
    };
}
