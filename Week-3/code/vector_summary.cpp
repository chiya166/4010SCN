#include <iostream>
#include <vector>

int main() {
    const std::vector<int> values = {4, 7, 2, 9};
    int total = 0;

    for (const int value : values) {
        std::cout << value << "\n";
        total += value;
    }

    std::cout << "Total: " << total << "\n";

    return 0;
}