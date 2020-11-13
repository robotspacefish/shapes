#include "Rectangle.hpp"

#define _USE_MATH_DEFINES

#include <cmath>

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
