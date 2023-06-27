#include <iostream>

class Circle {
private:
    double radius;

public:
    void acceptRadius() {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    void displayResult(double area) {
        std::cout << "The area of the circle is: " << area << std::endl;
    }
};

int main() {
    Circle circle;
    circle.acceptRadius();

    double area = circle.calculateArea();

    circle.displayResult(area);

    return 0;
}
