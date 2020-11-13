#pragma once

namespace ShapeAssessment
{
    class Rectangle
    {
    public:
        Rectangle(float length, float width);
        
        float getArea();
    private:
        float mLength;
        float mWidth;
    };
}
