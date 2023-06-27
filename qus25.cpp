#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
private:
    std::vector<T> data;

public:
    void push(const T& element) {
        data.push_back(element);
    }

    void pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty. Cannot pop element.");
        }
        data.pop_back();
    }

    T top() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty. No top element.");
        }
        return data.back();
    }

    bool isEmpty() const {
        return data.empty();
    }
};

int main() {
    Stack<int> intStack;
    Stack<char> charStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    charStack.push('A');
    charStack.push('B');
    charStack.push('C');

    while (!intStack.isEmpty()) {
        std::cout << "Popped element from intStack: " << intStack.top() << std::endl;
        intStack.pop();
    }

    while (!charStack.isEmpty()) {
        std::cout << "Popped element from charStack: " << charStack.top() << std::endl;
        charStack.pop();
    }

    return 0;
}
