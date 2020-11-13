#pragma once

namespace ShapeAssessment
{
    class Shape
    {
    public:
        virtual float getArea() = 0;
        
        void setValue1(float v);
        void setValue2(float v);
    protected:
        float mValue1;
        float mValue2;
    };
}
