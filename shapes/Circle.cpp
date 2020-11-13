#include "Circle.hpp"

#define _USE_MATH_DEFINES

#include <cmath>

namespace ShapeAssessment
{
    Circle::Circle(float radius)
        : mRadius(radius)
    {
    }

    float Circle::getArea()
    {
        return mRadius * mRadius * (float)M_PI;
    }
}
