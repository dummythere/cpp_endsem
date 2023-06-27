#include <iostream>

class Circle {
private:
    double radius;

public:
    // Default constructor
    Circle() {
        radius = 0.0;
    }

    // Parameterized constructor
    Circle(double r) {
        radius = r;
    }

    // Copy constructor
    Circle(const Circle& other) {
        radius = other.radius;
    }

    // Getter function for radius
    double getRadius() {
        return radius;
    }

    // Calculate area of the circle
    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create Small circle object
    Circle small(5.0);

    // Create Big circle object using copy constructor
    Circle big(small.getRadius() * 1.4);

    // Calculate and display the area of Small circle
    std::cout << "Area of Small circle: " << small.calculateArea() << std::endl;

    // Calculate and display the area of Big circle
    std::cout << "Area of Big circle: " << big.calculateArea() << std::endl;

    return 0;
}
