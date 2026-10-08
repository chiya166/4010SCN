#include <iostream>
#include <map>
#include <string>

int main() {

    std::map<std::string, int> capacity = {
        {"Lab A", 24},
        {"Lab B", 32},
        {"Studio", 18}
    };

    std::string room;

    std::cout << "Enter room name: ";
    std::getline(std::cin, room);

    auto it = capacity.find(room);

    if (it != capacity.end()) {
        std::cout << "Capacity: " << it->second << "\n";
    }
    else {
        std::cout << "Sorry, room not found.\n";
    }

    return 0;
}