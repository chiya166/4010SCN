#include <iostream>
#include <vector>

int main() {

    std::vector<int> marks = {60, 70, 80, 90, 100};

    int total = 0;


    for (int mark : marks) {
    total += mark;

    }

    std::cout << "Total: " << total << "\n";

    double average = static_cast<double>(total) / marks.size(); 

    std::cout << "Average: " << average << "\n";

    return 0;


}
