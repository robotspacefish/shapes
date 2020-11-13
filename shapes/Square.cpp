#include "Square.hpp"

namespace ShapeAssessment
{
    Square::Square(float side) : mSide(side)
    {
    }

    float Square::getArea()
    {
        return mSide * mSide;
    }
}
