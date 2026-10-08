#include <iostream>
int square(int number) {
    return number * number;
}
int main() {
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = square(number);
    std::cout << result << "\n";
    return 0;
}



