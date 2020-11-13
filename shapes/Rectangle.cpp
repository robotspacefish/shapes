#include "Rectangle.hpp"


namespace ShapeAssessment
{
    Rectangle::Rectangle(float length, float width)
    {
        this->setValue1(length);
        this->setValue2(width);
    }

    float Rectangle::getArea()
    {
        return mValue1 * mValue2;
    }
}
