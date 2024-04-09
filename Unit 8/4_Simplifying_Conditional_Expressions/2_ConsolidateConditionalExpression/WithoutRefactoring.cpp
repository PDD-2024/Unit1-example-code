#include <iostream>

int main()
{
    int year = 2024; // Example year
    int month = 13;  // Example month

    bool isValid = true;

    if (year < 1900 || year > 2100)
    {
        std::cout << "Invalid year." << std::endl;
        isValid = false;
    }

    // Check if month is valid
    if (month < 1 || month > 12)
    {
        std::cout << "Invalid month." << std::endl;
        isValid = false;
    }

    if (isValid)
    {
        std::cout << "Date is valid." << std::endl;
    }
    else
    {
        std::cout << "Date is invalid." << std::endl;
    }

    return 0;
}
