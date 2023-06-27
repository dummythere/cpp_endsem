#include <iostream>

class Box {
private:
    double length;
    double width;

public:
    // Default constructor
    Box() {
        length = 0.0;
        width = 0.0;
    }

    // Parameterized constructor
    Box(double l, double w) {
        length = l;
        width = w;
    }

    // Copy constructor
    Box(const Box& other) {
        length = other.length;
        width = other.width;
    }

    // Getter functions for length and width
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    // Calculate area of the box
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create Box1 object
    Box Box1(10.0, 5.0);

    // Create Box2 object using copy constructor
    Box Box2(Box1.getLength() * 1.4, Box1.getWidth() * 0.7);

    // Calculate and display the area of Box1
    std::cout << "Area of Box1: " << Box1.calculateArea() << std::endl;

    // Calculate and display the area of Box2
    std::cout << "Area of Box2: " << Box2.calculateArea() << std::endl;

    return 0;
}
