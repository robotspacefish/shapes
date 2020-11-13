#pragma once

namespace ShapeAssessment
{
    class Square
    {
    public:
        Square(float side);
        
        float getArea();
    private:
        float mSide;
    };
}
