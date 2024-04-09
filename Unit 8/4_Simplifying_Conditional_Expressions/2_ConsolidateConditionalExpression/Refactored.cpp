#include <iostream>

bool isDateValid(int year, int month) {
    return ((year >= 1900 && year <= 2100) && (month >= 1 && month <= 12));
}

int main() {
    int year = 2024; // Example year
    int month = 13; // Example month

    if (isDateValid(year, month)) {
        std::cout << "Date is valid." << std::endl;
    } else {
        std::cout << "Date is invalid." << std::endl;
    }

    return 0;
}


