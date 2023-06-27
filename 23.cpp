#include <iostream>
#include <string>

class StringConcat {
private:
    std::string concatenatedString;

public:
    StringConcat() : concatenatedString("") {}

    StringConcat(const std::string& str) : concatenatedString(str) {}

    StringConcat operator+(const StringConcat& other) const {
        StringConcat result;
        result.concatenatedString = concatenatedString + other.concatenatedString;
        return result;
    }

    void displayConcatenatedString() const {
        std::cout << "Concatenated String: " << concatenatedString << std::endl;
    }
};

int main() {
    StringConcat str1("Hello, ");
    StringConcat str2("world!");
    StringConcat str3(" How ");
    StringConcat str4("are you?");

    StringConcat result = str1 + str2 + str3 + str4;
    result.displayConcatenatedString();

    return 0;
}
