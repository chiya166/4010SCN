#include <iostream>

int main() {
    int value = 25;
    int* pointer = &value;

    std::cout << "Value: " << value << '\n';
    std::cout << "Address: " << &value << '\n';
    std::cout << "Pointer stores: " << pointer << '\n';
    std::cout << "Dereferenced: " << *pointer << '\n';

    return 0;
} 