#include <iostream>

int main() {
    int* pointer = nullptr;

    if (pointer != nullptr) {
        std::cout << *pointer << '\n';
    } else {
        std::cout << "Pointer is not currently pointing to a value\n";
    }

    return 0;
}
