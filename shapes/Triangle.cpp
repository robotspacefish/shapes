#include "Triangle.hpp"

namespace ShapeAssessment
{
    Triangle::Triangle(float height, float base)
    {
        this->setValue1(height);
        this->setValue2(base);
    }

    float Triangle::getArea()
    {
        return 0.5 * mValue1 * mValue2;
    }
}
