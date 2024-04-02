#include <iostream>

class BankAccount {
public:
    BankAccount(double balance, double interestRate) : balance(balance), interestRate(interestRate) {}

    double calculateInterest(int years) {
        InterestCalculator calculator(*this, years);
        return calculator.calculate();
    }

private:
    double balance;
    double interestRate;
};

class InterestCalculator {
public:
    InterestCalculator(const BankAccount& account, int years) : account(account), years(years) {}

    double calculate() {
        // Complex calculation involving interest rate and time
        double interest = account.balance * account.interestRate * years;
        return interest;
    }

private:
    const BankAccount& account;
    int years;
};


