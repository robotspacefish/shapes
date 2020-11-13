#include "Shape.hpp"

namespace ShapeAssessment
{
    Shape::Shape(float value1, float value2)
    {
        this->setValue1(value1);
        this->setValue2(value2);
    }
    
    Shape::Shape(float value1)
    {
        this->setValue1(value1);
    }

    void Shape::setValue1(float v) {
        mValue1 = v;
    }

    void Shape::setValue2(float v) {
        mValue2 = v;
    }

}
