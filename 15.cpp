#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Cat meows." << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks." << std::endl;
    }
};

class AnimalShow : public Cat, public Dog {
};

int main() {
    AnimalShow animalShow;
    animalShow.makeSound(); // Ambiguity problem

    return 0;
}
