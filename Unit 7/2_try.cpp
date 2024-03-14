#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

int add(int a, int b) noexcept  {
    return a + b;
}

int main() {
    int num1 = 20, num2 = 5;

    try {
        int result = divide(num1, num2);
        std::cout << "The result is: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}