#pragma once

//#include "Rectangle.hpp"
//
//namespace ShapeAssessment
//{
//    class Square : public Rectangle
//    {
//    public:
//        Square(float side);
//    };
//}

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
