/*
    This program demonstrates the use of constants in C++
*/

#include <iostream>

int main() {
    const int const_variable = 20;
    std::cout << "const_variable: " << const_variable << std::endl;

    // const_variable = 30; // error: assignment of read-only variable 'const_variable'

    // const int const_variable2; // error: uninitialized const 'const_variable'

    return 0;
}

