/*Create a base class called "Shape" with a virtual member function called
"calculateArea." Derive two classes, "Circle" and "Rectangle," from the Shape class.
Implement the "calculateArea" function in each derived class to calculate and return
the area specific to the shape. Test the virtual function by creating objects of both
derived classes and calling the "calculateArea" function on each object.*/

#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    double area1 = shape1->calculateArea();
    double area2 = shape2->calculateArea();

    std::cout << "Area of Circle: " << area1 << std::endl;
    std::cout << "Area of Rectangle: " << area2 << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
