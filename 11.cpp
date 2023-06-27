#include <iostream>

// Function to multiply two integers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to multiply two floats
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to subtract two integers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to subtract two floats
float subtract(float num1, float num2) {
    return num1 - num2;
}

int main() {
    int intNum1, intNum2;
    float floatNum1, floatNum2;

    std::cout << "Enter two integers: ";
    std::cin >> intNum1 >> intNum2;
    std::cout << "Multiplication of integers: " << multiply(intNum1, intNum2) << std::endl;
    std::cout << "Subtraction of integers: " << subtract(intNum1, intNum2) << std::endl;

    std::cout << "Enter two floating-point numbers: ";
    std::cin >> floatNum1 >> floatNum2;
    std::cout << "Multiplication of floats: " << multiply(floatNum1, floatNum2) << std::endl;
    std::cout << "Subtraction of floats: " << subtract(floatNum1, floatNum2) << std::endl;

    return 0;
}
