/*Create a base class called "Employee" with a virtual member function called
"calculateSalary." Derive two classes, "FullTimeEmployee" and
"PartTimeEmployee," from the Employee class. Implement the "calculateSalary"
function in each derived class to calculate and return the salary specific to the
employee type. Test the virtual function by creating objects of both derived classes
and calling the "calculateSalary" function on each object.*/

//SOLUTION:

#include <iostream>

class Employee {
public:
    virtual double calculateSalary() const = 0;
};

class FullTimeEmployee : public Employee {
public:
    double calculateSalary() const override {
        // Calculation logic for full-time employee salary
        double baseSalary = 5000.0;
        double bonus = 1000.0;
        return baseSalary + bonus;
    }
};

class PartTimeEmployee : public Employee {
public:
    double calculateSalary() const override {
        // Calculation logic for part-time employee salary
        double hourlyRate = 15.0;
        int hoursWorked = 20;
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* employee1 = new FullTimeEmployee();
    Employee* employee2 = new PartTimeEmployee();

    double salary1 = employee1->calculateSalary();
    double salary2 = employee2->calculateSalary();

    std::cout << "Salary of Full-Time Employee: $" << salary1 << std::endl;
    std::cout << "Salary of Part-Time Employee: $" << salary2 << std::endl;

    delete employee1;
    delete employee2;

    return 0;
}
