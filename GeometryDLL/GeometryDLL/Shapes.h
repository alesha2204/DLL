#ifndef SHAPES_H
#define SHAPES_H

#ifdef GEOMETRYLIBRARY_EXPORTS
#define GEOMETRYLIBRARY_API __declspec(dllexport)
#else
#define GEOMETRYLIBRARY_API __declspec(dllimport)
#endif

class GEOMETRYLIBRARY_API Square {
public:
    Square(double side);
    double area() const;
    double perimeter() const;

private:
    double side;
};

class GEOMETRYLIBRARY_API Circle {
public:
    Circle(double radius);
    double area() const;
    double perimeter() const;

private:
    double radius;
};

class GEOMETRYLIBRARY_API Triangle {
public:
    Triangle(double a, double b, double c);
    double area() const;
    double perimeter() const;

private:
    double a, b, c;
};

#endif