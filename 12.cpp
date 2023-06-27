#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Setters for length and width
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    // Getters for length and width
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Method to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Method to calculate the perimeter of the rectangle
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect1, rect2;
    double length, width;

    // Prompt the user to input the length and width for the first rectangle
    std::cout << "Enter the length of Rectangle 1: ";
    std::cin >> length;
    std::cout << "Enter the width of Rectangle 1: ";
    std::cin >> width;

    // Set the dimensions for the first rectangle
    rect1.setLength(length);
    rect1.setWidth(width);

    // Prompt the user to input the length and width for the second rectangle
    std::cout << "Enter the length of Rectangle 2: ";
    std::cin >> length;
    std::cout << "Enter the width of Rectangle 2: ";
    std::cin >> width;

    // Set the dimensions for the second rectangle
    rect2.setLength(length);
    rect2.setWidth(width);

    // Calculate and display the area and perimeter for both rectangles
    std::cout << "Rectangle 1:" << std::endl;
    std::cout << "Area: " << rect1.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect1.calculatePerimeter() << std::endl;

    std::cout << "Rectangle 2:" << std::endl;
    std::cout << "Area: " << rect2.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect2.calculatePerimeter() << std::endl;

    return 0;
}
