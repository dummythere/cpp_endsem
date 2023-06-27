#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart = 0.0, double imaginaryPart = 0.0)
        : real(realPart), imaginary(imaginaryPart) {}

    Complex operator+(const Complex& other) const {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return Complex(sumReal, sumImaginary);
    }

    void display() const {
        std::cout << real;
        if (imaginary >= 0.0) {
            std::cout << " + " << imaginary << "i";
        } else {
            std::cout << " - " << -imaginary << "i";
        }
        std::cout << std::endl;
    }
};

int main() {
    Complex complex1(3.0, 2.0);
    Complex complex2(1.5, -4.0);

    Complex result = complex1 + complex2;
    result.display();

    return 0;
}
