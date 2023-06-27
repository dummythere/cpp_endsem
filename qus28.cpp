/*Create a base class called "Animal" with a virtual member function called
"makeSound." Derive two classes, "Dog" and "Cat," from the Animal class.
Implement the "makeSound" function in each derived class to print the sound specific
to the animal. Test the virtual function by creating objects of both derived classes and
calling the "makeSound" function on each object.*/

#include <iostream>

class Animal {
public:
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}
