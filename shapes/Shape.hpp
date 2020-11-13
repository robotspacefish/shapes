#pragma once

namespace ShapeAssessment
{
    class Shape
    {
    public:
        Shape(float value1, float value2);
        Shape(float value1);
        
        virtual float getArea() = 0;
        
        void setValue1(float v);
        void setValue2(float v);
    protected:
        float mValue1;
        float mValue2;
    };
}
