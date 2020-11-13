#include "Triangle.hpp"
#include "Shape.hpp"

namespace ShapeAssessment
{
    Triangle::Triangle(float height, float base) : Shape(height, base)
    {   
    }

    float Triangle::getArea()
    {
        return 0.5 * mValue1 * mValue2;
    }
}
