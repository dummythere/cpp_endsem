#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Constructor with length and width parameters
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Constructor with length parameter (width is set equal to length)
    Rectangle(double len) {
        length = len;
        width = len;
    }

    // Getter functions
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {
    // Create objects of Rectangle using different constructors
    Rectangle rect1; // Default constructor

    Rectangle rect2(5, 10); // Constructor with length and width parameters

    Rectangle rect3(7); // Constructor with length parameter (width = length)

    // Display length and width of each rectangle
    std::cout << "Rectangle 1: Length = " << rect1.getLength() << ", Width = " << rect1.getWidth() << std::endl;

    std::cout << "Rectangle 2: Length = " << rect2.getLength() << ", Width = " << rect2.getWidth() << std::endl;

    std::cout << "Rectangle 3: Length = " << rect3.getLength() << ", Width = " << rect3.getWidth() << std::endl;

    return 0;
}
