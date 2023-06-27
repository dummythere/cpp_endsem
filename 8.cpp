#include <iostream>

class MyClass {
private:
    int privateVar;

public:
    void setPrivateVar(int value) {
        privateVar = value;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

int main() {
    MyClass obj;

    // Set the private variable using the member function
    obj.setPrivateVar(42);

    // Access the private variable using the member function
    int value = obj.getPrivateVar();

    // Display the value of the private variable
    std::cout << "Private variable: " << value << std::endl;

    return 0;
}
