/*
    This program shows how to use functions in C++.
*/

#include <iostream>

void printHelloWorld() {
    std::cout << "Hello World!" << std::endl;
}

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    // Call the printHelloWorld function
    printHelloWorld();
    
    return a + b;
}

int main() {

    // Call the sum function and store the result in a variable
    int result = sum(5, 3);

    // Print the result
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}


