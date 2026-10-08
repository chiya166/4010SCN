#include <iostream>
#include <vector>

int main() {
    std::vector<int> marks = {70, 80, 90};

    int total = 0;

    for (int mark : marks) {
        std::cout << "Mark: " << mark << '\n';
        total += mark;
    }

    std::cout << "Total: " << total << '\n';

    return 0;
}