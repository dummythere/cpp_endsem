#include <iostream>

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    void setDimensions(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box box1, box2;
    double length1, breadth1, height1;
    double length2, breadth2, height2;

    // Input for Box 1
    std::cout << "Enter the dimensions of Box 1 (length breadth height): ";
    std::cin >> length1 >> breadth1 >> height1;

    // Set dimensions for Box 1
    box1.setDimensions(length1, breadth1, height1);

    // Input for Box 2
    std::cout << "Enter the dimensions of Box 2 (length breadth height): ";
    std::cin >> length2 >> breadth2 >> height2;

    // Set dimensions for Box 2
    box2.setDimensions(length2, breadth2, height2);

    // Calculate and display volume of Box 1
    double volume1 = box1.calculateVolume();
    std::cout << "Volume of Box 1: " << volume1 << std::endl;

    // Calculate and display volume of Box 2
    double volume2 = box2.calculateVolume();
    std::cout << "Volume of Box 2: " << volume2 << std::endl;

    return 0;
}
