#include <iostream>

int main() {
    int total = 0;

    for (int count = 1; count <= 3; count++) {
        int number = 0;

        std::cout << "Enter number " << count << ": ";
        std::cin >> number;

        total = total + number;
    }

    std::cout << "Total: " << total << "\n";

    return 0;
}