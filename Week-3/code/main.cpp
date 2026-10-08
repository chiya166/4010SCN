#include "snack_lookup.h"

#include <iostream>
#include <map>
#include <string>

int main() {
    const std::map<std::string, double> prices{
        {"tea", 1.50},
        {"coffee", 2.00},
        {"sandwich", 3.75},
        {"juice", 4.60}

    };

    printWelcome();

    while (true) {
        std::cout << "Enter an item name, or quit to finish: ";

        std::string requestedItem;
        std::getline(std::cin, requestedItem);

        if (requestedItem == "quit") {
            break;
        }

        showLookupResult(prices, requestedItem);
    }

    std::cout << "Goodbye.\n";
    return 0;
}
