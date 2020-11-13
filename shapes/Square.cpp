#include "Square.hpp"
#include "Shape.hpp"

namespace ShapeAssessment
{
    Square::Square(float side) : Shape(side)
    {
    }

    float Square::getArea()
    {
        return mValue1 * mValue1;
    }
}
