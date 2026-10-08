#include <iostream>
int cube(int number) {
    return number * number * number;
}
int main() {
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;


    std::cout << "cube = " << cube(number) << "\n";
    return 0;
}



