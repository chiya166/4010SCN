#include <iostream>
#include <string>
#include <vector>

class Wallet {
private:
    std::string owner;
    double balance;

public:
    Wallet(const std::string& walletOwner) : owner(walletOwner), balance(0.0) {}

    bool deposit(double amount) {
        if (amount <= 0.0) return false;
        balance += amount;
        return true;
    }

    bool withdraw(double amount) {
        if (amount <= 0.0 || amount > balance) return false;
        balance -= amount;
        return true;
    }

    const std::string& getOwner() const {
    return owner;
}

bool setOwner(const std::string& newOwner) {
    if (newOwner.empty()) {
        return false;
    }

    owner = newOwner;
    return true;
}

double getBalance() const {
    return balance;
}

    

    void display() const {
        std::cout << owner << ": " << balance << "\n";
    }
};

int main() {
    Wallet wallet("Aisha");

    Wallet aisha("Aisha");
    Wallet ben("Ben");

    aisha.deposit(20.0);
    ben.deposit(8.0);
    aisha.withdraw(5.0);
    ben.withdraw(10.0);
    aisha.display();
    ben.display();

    wallet.deposit(20.0);
    wallet.withdraw(5.0);
    wallet.display();

    std::cout << "Owner: " << wallet.getOwner() << "\n";
std::cout << "Balance: " << wallet.getBalance() << "\n";
if (wallet.setOwner("Chen")) {
    std::cout << "Owner changed successfully.\n";
    if (!wallet.setOwner("")) {
    std::cout << "Empty owner rejected.\n";
}

std::cout << "Owner: " << wallet.getOwner() << "\n";
}

std::cout << "Owner: " << wallet.getOwner() << "\n";
    if (!wallet.withdraw(50.0)) {
         std::cout << "Withdrawal not accepted.\n";
}

std::vector<Wallet> wallets;
wallets.push_back(Wallet("Aisha"));
wallets.push_back(Wallet("Ben"));
wallets.push_back(Wallet("Chen"));

bool aishaDeposit = wallets[0].deposit(10.0);
bool benDeposit = wallets[1].deposit(0.0);
bool chenDeposit = wallets[2].deposit(25.0);

for (const Wallet& item : wallets) {
    item.display();
}
int fundedWallets = 0;

for (const Wallet& item : wallets) {
    if (item.getBalance() > 0.0) {
        ++fundedWallets;
    }
}

std::cout << "Funded wallets: " << fundedWallets << "\n";
if (aishaDeposit && !benDeposit && chenDeposit) {
    std::cout << "Deposit tests passed.\n";
}

Wallet testG1("Test");
bool g1 = testG1.deposit(10.0);

std::cout << "G1 deposit result: " << g1 << "\n";
std::cout << "G1 balance: " << testG1.getBalance() << "\n";

Wallet testG2("Test");
bool g2 = testG2.deposit(0.0);

std::cout << "G2 deposit result: " << g2 << "\n";
std::cout << "G2 balance: " << testG2.getBalance() << "\n";

Wallet testG3("Test");
bool g3 = testG3.deposit(-1.0);

std::cout << "G3 deposit result: " << g3 << "\n";
std::cout << "G3 balance: " << testG3.getBalance() << "\n";

Wallet testG4("Test");
testG4.deposit(10.0);
bool g4 = testG4.withdraw(10.0);

std::cout << "G4 withdrawal result: " << g4 << "\n";
std::cout << "G4 balance: " << testG4.getBalance() << "\n";

Wallet testG5("Test");
testG5.deposit(10.0);
bool g5 = testG5.withdraw(10.01);

std::cout << "G5 withdrawal result: " << g5 << "\n";
std::cout << "G5 balance: " << testG5.getBalance() << "\n";
Wallet testG6("Test");

bool g6 = testG6.setOwner("Chen");

std::cout << "G6 setOwner result: " << g6 << "\n";
std::cout << "G6 owner: " << testG6.getOwner() << "\n";
bool g7 = testG6.setOwner("");

std::cout << "G7 setOwner result: " << g7 << "\n";
std::cout << "G7 owner: " << testG6.getOwner() << "\n";

}
