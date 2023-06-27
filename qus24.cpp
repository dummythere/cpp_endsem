#include <iostream>

template <typename T>
T findMax(const T& a, const T& b) {
    return (a > b) ? a : b;
}

int main() {
    int intResult = findMax(10, 20);
    float floatResult = findMax(3.14f, 2.71f);
    double doubleResult = findMax(5.678, 4.321);

    std::cout << "Maximum value between 10 and 20: " << intResult << std::endl;
    std::cout << "Maximum value between 3.14 and 2.71: " << floatResult << std::endl;
    std::cout << "Maximum value between 5.678 and 4.321: " << doubleResult << std::endl;

    return 0;
}
