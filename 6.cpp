#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        gender = "Not specified";
    }

    // Constructor with name and age parameters
    Person(const std::string& n, int a) {
        name = n;
        age = a;
        gender = "Not specified";
    }

    // Constructor with name, age, and gender parameters
    Person(const std::string& n, int a, const std::string& g) {
        name = n;
        age = a;
        gender = g;
    }

    // Getter functions
    std::string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    std::string getGender() {
        return gender;
    }
};

int main() {
    // Create objects of Person using different constructors
    Person person1; // Default constructor

    Person person2("Alice", 25); // Constructor with name and age parameters

    Person person3("Bob", 30, "Male"); // Constructor with name, age, and gender parameters

    // Display details of each person
    std::cout << "Person 1: Name = " << person1.getName() << ", Age = " << person1.getAge() << ", Gender = " << person1.getGender() << std::endl;

    std::cout << "Person 2: Name = " << person2.getName() << ", Age = " << person2.getAge() << ", Gender = " << person2.getGender() << std::endl;

    std::cout << "Person 3: Name = " << person3.getName() << ", Age = " << person3.getAge() << ", Gender = " << person3.getGender() << std::endl;

    return 0;
}
