#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace ShapeAssessment;

float totalArea(float *areas) {
    float sum = 0;
    
    for (int i = 0; i < 4; i++) {
        sum += areas[i];
        
        std::cout << areas[i] << std::endl;
    }
    
    return sum;
}

int main() {
    Circle c1(5.0f);
    Triangle t1(4.0f, 5.0f);
    Rectangle r1(5.0f, 4.0f);
    Square s1(10.0f);
    
    float areas[4] = {
        c1.getArea(),
        t1.getArea(),
        r1.getArea(),
        s1.getArea()
    };
    
    std::cout << totalArea(areas) << std::endl;
    
    return 0;
}
