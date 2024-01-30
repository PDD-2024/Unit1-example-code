#include <iostream>

int main() {
    // auto keyword is used to declare a variable with a deduced type

    // Lambda functions with no parameters
    auto printMessage = []() {
        std::cout << "I am a lambda function" << std::endl;
    };

    printMessage();

    // Lambda functions with parameters
    auto multiply = [](int a, int b) {
        return a * b;
    };

    std::cout << "Multiply with parameters result: " << multiply(2, 3) << std::endl;

    // Lambda functions using variables out of scope
    int a = 10;

    auto multiplyByA = [a](int c) {
        return a * c;
    };

    std::cout << "Using variables out of scope result: " << multiplyByA(2) << std::endl;

    /*//  This will not work becouse "a" is not in scope, it is not in the capture list
    auto multiplyByA = [](int c) {
        return a * c; // This will not work becouse "a" is not in scope
    };
    */

    /* //This will not work becouse "a" is passed by value
    auto multiplyByA = [a](int c) {
        a = 2; // This will not change the value of "a" becouse it is passed by value
        return a * c;
    };
    */

    // Lambda functions using variables by reference and changing them
    auto multiplyByAReferenceAndChange = [&a](int c) {
        a = 20;
        return a * c;
    };
    
    std::cout << "Multiply changing a reference value: " << multiplyByAReferenceAndChange(2) << std::endl;

    // Multiple variables in capture list
    int b = 10;
    int c = 20;

    auto multiplyByMultipleVariables = [b, &c](int d) {
        c = 30;
        return b * c * d;
    };

    std::cout << "Multiply by multiple variables: " << multiplyByMultipleVariables(2) << std::endl;

    // Capture all variables by reference
    auto multiplyByAllVariablesByReference = [&](int d) {
        c = 2;
        return a * b * c * d;
    };

    std::cout << "Multiply by all variables by reference: " << multiplyByAllVariablesByReference(2) << std::endl;

    // Capture all variables by value
    auto multiplyByAllVariablesByValue = [=](int d) {
        return a * b * c * d;
    };

    std::cout << "Multiply by all variables by value: " << multiplyByAllVariablesByValue(2) << std::endl;


    
    return 0;
}
