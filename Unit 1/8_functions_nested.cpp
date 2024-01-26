/*
    This program demonstrates the use of nested functions in C++
    the wrong way
*/

#include <iostream>

int main() {
    void nestedFunction() {
        std::cout << "This is a nested function." << std::endl;
    }

    nestedFunction(); // Function call

    return 0;
}