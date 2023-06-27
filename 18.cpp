#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void setInfo(const std::string& personName, int personAge) {
        name = personName;
        age = personAge;
    }
};

class Student : public Person {
public:
    void displayInfo() const {
        std::cout << "This person is a student." << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Student student;
    student.setInfo("John Doe", 20);
    student.displayInfo();

    return 0;
}
