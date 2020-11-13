#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace ShapeAssessment;

int main() {
//    Circle c1(5.0f);
//    Circle c2(20.0f);
//
//    std::cout << c1.getArea() << std::endl;
//    std::cout << c2.getArea() << std::endl;
    
    Triangle t1(4.0f, 5.0f);
    Rectangle r1(5.0f, 4.0f);
    Square s1(10.0f);
    std::cout << t1.getArea() << std::endl;
    std::cout << r1.getArea() << std::endl;
    std::cout << s1.getArea() << std::endl;
    return 0;
}
