#include <iostream>

bool isEligibleForDiscount(int age, bool isStudent) {
    if (age < 18) {
        return false;
    }

    if (isStudent) {
        return true;
    }

    return false;
}

int main() {
    int age = 20; // Example age
    bool isStudent = true; // Example student status

    if (isEligibleForDiscount(age, isStudent)) {
        std::cout << "Eligible for discount." << std::endl;
    } else {
        std::cout << "Not eligible for discount." << std::endl;
    }

    return 0;
}
