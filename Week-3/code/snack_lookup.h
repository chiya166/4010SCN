#ifndef SNACK_LOOKUP_H
#define SNACK_LOOKUP_H

#include <map>
#include <string>

void printWelcome();
void showLookupResult(const std::map<std::string, double>& prices,
                      const std::string& requestedItem);

#endif
