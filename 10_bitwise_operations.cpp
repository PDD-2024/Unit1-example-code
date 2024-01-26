#include <iostream>
#include <bitset>

int main(){

    // Bitwise AND operation
    /*
        5 -> 101
        3 -> 011
    */
    int result = 5 & 3;
    /*
        & -> 001
        001 -> 1
    */
    std::cout<< "Result for 5 & 3 operation -> " << result << std::endl;

    // Bitwise OR operation
    /*
        5 -> 101
        3 -> 011
    */
    result = 5 | 3;
    /*
        | -> 111
        111 -> 7
    */
    std::cout<< "Result for 5 | 3 operation -> " << result << std::endl;

    // Bitwise XOR operation
    /*
        5 -> 101
        3 -> 011
    */
    result = 5 ^ 3;
    /*
        ^ -> 110
        110 -> 6
    */
    std::cout<< "Result for 5 ^ 3 operation -> " << result << std::endl;

    // Bitwise NOT operation
    /*
        5 -> 101
    */
    result = ~5;
    /*
        ~ -> 010
        010 -> 2 (Is it supposed to be 2?)
    */
    std::cout<< "Result for ~5 operation -> " << result << std::endl;
    std::cout << "Binary result for ~5 operation -> "  << std::bitset<8*sizeof(int)>(result) << std::endl;
    

    // Bitwise left shift operation
    /*
        5 -> 101
    */
    result = 5 << 1;
    /*
        << -> 1010
        1010 -> 10
    */
    std::cout<< "Result for 5 << 1 operation -> " << result << std::endl;

    // Bitwise right shift operation
    /*
        5 -> 101
    */
    result = 5 >> 1;
    /*
        >> -> 10
        10 -> 2
    */
    std::cout<< "Result for 5 >> 1 operation -> " << result << std::endl;

    /*
        -5 -> 11111111111111111111111111111011
    */
    result = -5 >> 1;
    /*
        >> -> 11111111111111111111111111111011
    */
    std::cout<< "Result for -5 >> 1 operation -> " << result << std::endl;
    std::cout << "Binary result for -5 >> 1 operation -> "  << std::bitset<8*sizeof(int)>(result) << std::endl;
    std::cout << "Binary value for -5 -> "  << std::bitset<8*sizeof(int)>(-5) << std::endl;

}

