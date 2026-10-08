#include <iostream>
#include <string>

int main() {
    std::string fullName;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Name badge: " << fullName << "\n";
    std::cout << "Characters: " << fullName.length() << "\n";
    return 0;
}
