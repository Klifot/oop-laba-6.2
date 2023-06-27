#include <iostream>

class Quadrilateral {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

class Square : public Quadrilateral {
private:
    double side;

public:
    Square(double side) : side(side) {}

    double getArea() const override {
        return side * side;
    }

    double getPerimeter() const override {
        return 4 * side;
    }
};

class Rectangle : public Quadrilateral {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double getArea() const override {
        return length * width;
    }

    double getPerimeter() const override {
        return 2 * (length + width);
    }
};

class Parallelogram : public Quadrilateral {
private:
    double base;
    double height;
    double side;

public:
    Parallelogram(double base, double height, double side) : base(base), height(height), side(side) {}

    double getArea() const override {
        return base * height;
    }

    double getPerimeter() const override {
        return 2 * (base + side);
    }
};

class Trapezoid : public Quadrilateral {
private:
    double base1;
    double base2;
    double height;
    double side1;
    double side2;

public:
    Trapezoid(double base1, double base2, double height, double side1, double side2)
        : base1(base1), base2(base2), height(height), side1(side1), side2(side2) {}

    double getArea() const override {
        return (base1 + base2) * height / 2;
    }

    double getPerimeter() const override {
        return base1 + base2 + side1 + side2;
    }
};

int main() {
    Square square(5);
    std::cout << "Square Area: " << square.getArea() << std::endl;
    std::cout << "Square Perimeter: " << square.getPerimeter() << std::endl;

    Rectangle rectangle(4, 6);
    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.getPerimeter() << std::endl;

    Parallelogram parallelogram(3, 5, 4);
    std::cout << "Parallelogram Area: " << parallelogram.getArea() << std::endl;
    std::cout << "Parallelogram Perimeter: " << parallelogram.getPerimeter() << std::endl;

    Trapezoid trapezoid(4, 6, 3, 2, 5);
    std::cout << "Trapezoid Area: " << trapezoid.getArea() << std::endl;
    std::cout << "Trapezoid Perimeter: " << trapezoid.getPerimeter() << std::endl;

    return 0;
}