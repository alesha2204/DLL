#include "Shapes.h"
#include <cmath>

// Square class implementation
Square::Square(double side) : side(side) {}

const double PI = 3.141592653589793;

double Square::area() const {
    return side * side;
}

double Square::perimeter() const {
    return 4 * side;
}

// Circle class implementation
Circle::Circle(double radius) : radius(radius) {}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * PI * radius;
}

// Triangle class implementation
Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

double Triangle::area() const {
    double s = perimeter() / 2; // полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона
}

double Triangle::perimeter() const {
    return a + b + c;
}