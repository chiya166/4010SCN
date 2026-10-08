#include <iostream>
#include <string>

int main() {
    std::string message;
    int repeats;

    std::cout << "Enter a one-word message: ";
    std::cin >> message;

    std::cout << "How many times? ";
    std::cin >> repeats;

    for (int count = 1; count <= repeats; count++) {
        std::cout << message << "\n";
    }

    return 0;
}