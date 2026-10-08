#include "snack_lookup.h"

#include <iomanip>
#include <iostream>

void printWelcome() {
    std::cout << "Welcome to the snack shop lookup.\n";
}

void showLookupResult(const std::map<std::string, double>& prices,
                      const std::string& requestedItem) {
    const auto result = prices.find(requestedItem);

    if (result != prices.end()) {
        std::cout << result->first << " costs "
                  << std::fixed << std::setprecision(2)
                  << result->second << "\n";
    } else {
        std::cout << "Sorry, " << requestedItem
                  << " is not on the menu.\n";
    }
}
