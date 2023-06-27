#include <iostream>

class Shape {
public:
    void display() {
        std::cout << "Display function from Shape." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void display() {
        std::cout << "Display function from Rectangle." << std::endl;
    }
};

class Circle : public Shape {
public:
    void display() {
        std::cout << "Display function from Circle." << std::endl;
    }
};

class Square : public Rectangle, public Circle {
};

int main() {
    Square square;
    square.display(); // Ambiguity problem

    return 0;
}
