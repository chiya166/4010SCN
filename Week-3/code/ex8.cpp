#include <iostream>
#include <vector>

int main() {

    std::vector<int> marks = {60, 70, 80};

    for (auto it = marks.begin(); it != marks.end(); ++it) {
        std::cout << *it << "\n";
    }

    return 0;
}