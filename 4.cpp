#include <iostream>

// Define the structure Complex
struct Complex {
    int integerPart;
    float floatPart;
};

int main() {
    // Create an instance of the Complex structure
    Complex complexNumber;

    // Initialize the values of the structure members
    complexNumber.integerPart = 10;
    complexNumber.floatPart = 3.14;

    // Create pointers to the structure members
    int* intPtr = &(complexNumber.integerPart);
    float* floatPtr = &(complexNumber.floatPart);

    // Print the values using pointers
    std::cout << "Integer Part: " << *intPtr << std::endl;
    std::cout << "Float Part: " << *floatPtr << std::endl;

    return 0;
}
