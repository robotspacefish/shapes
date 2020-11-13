#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "Circle.hpp"

using namespace ShapeAssessment;

int main() {
    Circle c1(5.0f);
    Circle c2(20.0f);

    std::cout << c1.getArea() << std::endl;
    std::cout << c2.getArea() << std::endl;
    
    return 0;
}
