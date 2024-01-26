/*
    This program demonstrates the use of input and output in C++
*/

#include <iostream>
#include <string>

int main() {
    const std::string prompt = "Enter your name: ";
    std::string name; // Declare name variable

    std::cout << prompt; // Name prompt, no newline
    std::cin >> name; // Save input to name
    std::cout << "Hello " << name << "!" << std::endl; // Greet user

    return 0;
}


