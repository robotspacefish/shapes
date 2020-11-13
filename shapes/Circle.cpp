#include "Circle.hpp"

#define _USE_MATH_DEFINES

#include <cmath>

namespace ShapeAssessment
{
    Circle::Circle(float radius)
    {
        this->setValue1(radius);
    }

    float Circle::getArea()
    {
        return mValue1 * mValue1 * (float)M_PI;
    }
}
