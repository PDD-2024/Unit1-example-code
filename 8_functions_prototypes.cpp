/*
    This program demonstrates the use of function prototypes in C++
*/

#include <iostream>

// Function prototype
int sum(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 10;
    int result = sum(num1, num2);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}
