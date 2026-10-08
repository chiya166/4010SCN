#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {

    std::vector<int> values = {12, 5, 9, 5, 20};

    std::cout << "Original: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    std::sort(values.begin(), values.end());

    std::cout << "Ascending: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    std::sort(values.begin(), values.end(), std::greater<int>());

    std::cout << "Descending: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    return 0;
}