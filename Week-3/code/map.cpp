#include <iostream>
#include <map>
#include <string>

int main() {

    std::map<std::string, double> prices;

    prices["tea"] = 1.50;
    prices["coffee"] = 3.00;
    prices["waffle"] = 6.00;

    std::cout << prices["waffle"] << "\n";
    std::cout << prices["waffle"] << "\n";


   


    return 0;
}