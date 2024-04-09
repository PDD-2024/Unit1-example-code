#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Method that withdraws money and returns the new balance
    double withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
            return -1.0; // Indicate failure
        }
        
        balance -= amount;
        return balance;
    }
};

int main() {
    BankAccount account(1000.0); // Initial balance $1000

    double newBalance = account.withdraw(500.0); // Withdraw $500
    if (newBalance != -1.0) {
        std::cout << "New Balance: $" << newBalance << std::endl;
    }

    return 0;
}


