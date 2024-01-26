/*
    This program demonstrates the use of arithmetic operators in C++
*/

#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 7;

    // Addition
    int sum = num1 + num2;
    std::cout << "sum: " << sum << std::endl;

    // Subtraction
    int difference = num1 - num2;
    std::cout << "difference: " << difference << std::endl;

    // Multiplication
    int product = num1 * num2;
    std::cout << "product: " << product << std::endl;

    // Division
    int quotient = num1 / num2;
    std::cout << "quotient: " << quotient << std::endl;

    // Modulus
    int remainder = num1 % num2;
    std::cout << "remainder: " << remainder << std::endl;

    // Prefix increment and postfix increment
    int num3 = 1;
    std::cout << "num3: " << num3 << std::endl;
    int prefixIncrement = ++num3;
    std::cout << "prefixIncrement: " << prefixIncrement << std::endl;

    std::cout << "num3: " << num3 << std::endl;

    int postfixIncrement = num3++;
    std::cout << "postfixIncrement: " << postfixIncrement << std::endl;
    std::cout << "num3: " << num3 << std::endl;

    // Prefix decrement and postfix decrement
    int num4 = 1;
    std::cout << "num4: " << num4 << std::endl;
    int prefixDecrement = --num4;
    std::cout << "prefixDecrement: " << prefixDecrement << std::endl;

    std::cout << "num4: " << num4 << std::endl;

    int postfixDecrement = num4--;
    std::cout << "postfixDecrement: " << postfixDecrement << std::endl;
    std::cout << "num4: " << num4 << std::endl;



    return 0;
}
