#include "Rectangle.hpp"

namespace ShapeAssessment
{
    Rectangle::Rectangle(float length, float width) : mLength(length), mWidth(width)
    {
    }

    float Rectangle::getArea()
    {
        return mLength * mWidth;
    }
}
