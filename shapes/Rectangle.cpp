#include "Rectangle.hpp"
#include "Shape.hpp"

namespace ShapeAssessment
{
    Rectangle::Rectangle(float length, float width) : Shape(length, width)
    {
    }

    float Rectangle::getArea()
    {
        return mValue1 * mValue2;
    }
}
