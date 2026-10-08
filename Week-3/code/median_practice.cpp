#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {

    std::vector<int> values = {9, 2, 7, 4, 5};

    std::sort(values.begin(), values.end());

    double median;

    if (values.size() % 2 == 1) {
        median = values[values.size() / 2];
    }
    else {
        int middle1 = values[values.size() / 2 - 1];
        int middle2 = values[values.size() / 2];

        median = (static_cast<double>(middle1) + middle2) / 2;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Median: " << median << "\n";

    return 0;
}