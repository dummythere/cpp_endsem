#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    double salary;

public:
    void setInfo(const std::string& employeeName, double employeeSalary) {
        name = employeeName;
        salary = employeeSalary;
    }
};

class Manager : public Employee {
private:
    std::string department;

public:
    void setDepartment(const std::string& managerDepartment) {
        department = managerDepartment;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    Manager manager;
    manager.setInfo("John Doe", 5000.0);
    manager.setDepartment("Sales");

    manager.displayInfo();

    return 0;
}
