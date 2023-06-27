#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    void setName(const std::string& animalName) {
        name = animalName;
    }
};

class Dog : public Animal {
public:
    void makeSound() const {
        std::cout << "Dog name: " << name << std::endl;
        std::cout << "Sound: Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const {
        std::cout << "Cat name: " << name << std::endl;
        std::cout << "Sound: Meow!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.setName("Buddy");
    dog.makeSound();

    Cat cat;
    cat.setName("Whiskers");
    cat.makeSound();

    return 0;
}
