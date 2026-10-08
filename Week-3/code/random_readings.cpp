#include <iostream>
#include <random>
#include <vector>

int main() {

    std::mt19937 generator(1234);
    std::uniform_int_distribution<int> reading(0, 100);

    std::vector<int> readings;

    for (int index = 0; index < 20; ++index) {
        readings.push_back(reading(generator));
    }

    for (int value : readings) {
        std::cout << value << "\n";
    }

    return 0;
}