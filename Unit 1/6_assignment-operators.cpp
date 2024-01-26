#include <iostream>

int main() {
    // Assignment operators
    int my_int1 = 2;
    int my_int2 = 2;
    int my_int3 = 5;
    int my_int4 = 3;
    int my_int5 = 8;
    int my_int6 = 10;

    // Assignment
    my_int1 = 4; // my_int1 is now 4
    std::cout << "my_int1: " << my_int1 << std::endl;

    // Addition assignment
    my_int2 += 3; // my_int1 is now 5
    std::cout << "my_int2: " << my_int2 << std::endl;

    // Subtraction assignment
    my_int3 -= 3; // my_int2 is now 2
    std::cout << "my_int3: " << my_int3 << std::endl;

    // Multiplication assignment
    my_int4 *= 3; // my_int4 is now 9
    std::cout << "my_int4: " << my_int4 << std::endl;

    // Division assignment
    my_int5 /= 2; // my_int5 is now 4
    std::cout << "my_int5: " << my_int5 << std::endl;

    // Modulus assignment
    my_int6 %= 3; // my_int6 is now 1
    std::cout << "my_int6: " << my_int6 << std::endl;
    
    return 0;
}
