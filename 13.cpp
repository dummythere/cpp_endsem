#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

// Function to calculate the volume of a cube
double calculateVolume(double sideLength) {
    return std::pow(sideLength, 3);
}

// Function to calculate the volume of a sphere
double calculateVolume(double radius) {
    return (4.0 / 3.0) * PI * std::pow(radius, 3);
}

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height) {
    return PI * std::pow(radius, 2) * height;
}

int main() {
    double sideLength, radius, height;

    // Calculate the volume of a cube
    sideLength = 5.0;
    double cubeVolume = calculateVolume(sideLength);
    std::cout << "Volume of cube with side length " << sideLength << ": " << cubeVolume << std::endl;

    // Calculate the volume of a sphere
    radius = 2.5;
    double sphereVolume = calculateVolume(radius);
    std::cout << "Volume of sphere with radius " << radius << ": " << sphereVolume << std::endl;

    // Calculate the volume of a cylinder
    radius = 3.0;
    height = 8.0;
    double cylinderVolume = calculateVolume(radius, height);
    std::cout << "Volume of cylinder with radius " << radius << " and height " << height << ": " << cylinderVolume << std::endl;

    return 0;
}
