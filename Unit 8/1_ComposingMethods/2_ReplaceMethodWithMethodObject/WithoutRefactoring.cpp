#include <iostream>

class BankAccount {
public:
    BankAccount(double balance, double interestRate) : balance(balance), interestRate(interestRate) {}

    double calculateInterest(int years) {
        // Complex calculation involving interest rate and time
        double interest = balance * interestRate * years;
        return interest;
    }

private:
    double balance;
    double interestRate;
};


