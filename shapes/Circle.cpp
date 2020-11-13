#include "Circle.hpp"

#define _USE_MATH_DEFINES

#include <cmath>
#include "Shape.hpp"

namespace ShapeAssessment
{
    Circle::Circle(float radius) : Shape(radius)
    {
    }

    float Circle::getArea()
    {
        return mValue1 * mValue1 * (float)M_PI;
    }
}
