#include "Triangle.hpp"

#define _USE_MATH_DEFINES

#include <cmath>

namespace ShapeAssessment
{
    Triangle::Triangle(float height, float base) : mHeight(height), mBase(base)
    {
    }

    float Triangle::getArea()
    {
        return 0.5 * mHeight * mBase;;
    }
}
