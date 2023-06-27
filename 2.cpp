#include <iostream>

class Students {
private:
    int DS;
    int CPP;

public:
    // Default constructor
    Students() {
        DS = 0;
        CPP = 0;
    }

    // Parameterized constructor
    Students(int ds, int cpp) {
        DS = ds;
        CPP = cpp;
    }

    // Copy constructor
    Students(const Students& other) {
        DS = other.DS;
        CPP = other.CPP;
    }

    // Getter functions for DS and CPP
    int getDS() {
        return DS;
    }

    int getCPP() {
        return CPP;
    }
};

int main() {
    // Create Amit object
    Students Amit(0, 0);

    // Create Sumit object
    Students Sumit(100, 0);

    // Set the values of DS and CPP for Amit and Sumit objects
    Amit = Students(Sumit.getCPP() * 1.25, Sumit.getDS() * 0.9);

    // Display the values of DS and CPP for Amit and Sumit objects
    std::cout << "Amit - DS: " << Amit.getDS() << ", CPP: " << Amit.getCPP() << std::endl;
    std::cout << "Sumit - DS: " << Sumit.getDS() << ", CPP: " << Sumit.getCPP() << std::endl;

    return 0;
}
