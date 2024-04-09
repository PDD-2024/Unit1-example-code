#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Method for querying the balance
    double getBalance() const {
        return balance;
    }

    // Method that modifies the balance (withdraw)
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
            return;
        }
        
        balance -= amount;
    }
};

int main() {
    BankAccount account(1000.0); // Initial balance $1000

    account.withdraw(500.0); // Withdraw $500
    std::cout << "New Balance: $" << account.getBalance() << std::endl;

    return 0;
}
