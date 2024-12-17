#include <iostream>
#include "Shapes.h"

int main() {
    // Создание объектов фигур
    Square square(4.0);
    Circle circle(3.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Вывод площади и периметра квадрата
    std::cout << "Square Area: " << square.area() << "\n";
    std::cout << "Square Perimeter: " << square.perimeter() << "\n";

    // Вывод площади и периметра круга
    std::cout << "Circle Area: " << circle.area() << "\n";
    std::cout << "Circle Perimeter: " << circle.perimeter() << "\n";

    // Вывод площади и периметра треугольника
    std::cout << "Triangle Area: " << triangle.area() << "\n";
    std::cout << "Triangle Perimeter: " << triangle.perimeter() << "\n";

    return 0;
}