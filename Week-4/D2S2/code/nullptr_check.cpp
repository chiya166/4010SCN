#include <iostream>

int main() {
    int actualScore = 85;
    int* score = &actualScore;
    

    if (score != nullptr) {
        std::cout << *score << '\n';
    } else {
        std::cout << "No score available\n";
    }

    return 0;
}