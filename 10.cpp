#include <iostream>

// Global variable
int globalVar = 10;

// Class definition
class MyClass {
public:
    // Member variable
    int memberVar;

    // Member function
    void display() {
        int localVar = 5;

        // Accessing global variable using the scope resolution operator
        std::cout << "Global variable: " << ::globalVar << std::endl;

        // Accessing member variable
        std::cout << "Member variable: " << memberVar << std::endl;

        // Accessing local variable
        std::cout << "Local variable: " << localVar << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass myObj;

    // Set member variable value
    myObj.memberVar = 20;

    // Call the display function of MyClass
    myObj.display();

    return 0;
}
