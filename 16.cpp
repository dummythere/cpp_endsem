#include <iostream>
#include <string>

class Shape {
protected:
    std::string color;

public:
    void setColor(const std::string& shapeColor) {
        color = shapeColor;
    }
};

class Rectangle : public Shape {
public:
    void printInfo() const {
        std::cout << "Shape: Rectangle" << std::endl;
        std::cout << "Color: " << color << std::endl;
        // Additional information specific to a rectangle
        std::cout << "Rectangle has four sides and four right angles." << std::endl;
    }
};

class Circle : public Shape {
public:
    void printInfo() const {
        std::cout << "Shape: Circle" << std::endl;
        std::cout << "Color: " << color << std::endl;
        // Additional information specific to a circle
        std::cout << "Circle is a round shape with no edges or corners." << std::endl;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setColor("Blue");
    rectangle.printInfo();

    Circle circle;
    circle.setColor("Red");
    circle.printInfo();

    return 0;
}
