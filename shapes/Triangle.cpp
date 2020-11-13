#include "Triangle.hpp"

namespace ShapeAssessment
{
    Triangle::Triangle(float height, float base) : mHeight(height), mBase(base)
    {
    }

    float Triangle::getArea()
    {
        return 0.5 * mHeight * mBase;
    }
}
