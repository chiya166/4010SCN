#include <iostream>
#include <map>
#include <string>

int main() {

    std::map<std::string, int> grades;

    grades["Ali"] = 75;
    grades["Sara"] = 82;
    grades["ahmad"] = 68;

    for (const auto& student : grades) {
    std::cout << student.first << ": " << student.second << "\n";
}

std::string name;

std::cout << "Enter a name: ";
std::cin >> name;

auto it = grades.find(name);

if (it != grades.end()) {
    std::cout << "Mark: " << it->second << "\n";
}
else {
    std::cout << "Sorry, that student was not found.\n";
}

    return 0;
}