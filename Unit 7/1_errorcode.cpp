#include <cstdlib>
#include <iostream>

int divide(int a, int b) {
  if (b == 0) {
    std::cerr << "Error: Division by zero!" << std::endl;
    std::cerr << "Exiting with error code 1" << std::endl;
    exit(1);  // Exit the program with error code 1
  }
  return a / b;
}

int main() {
  int num1, num2;
  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  int result = divide(num1, num2);
  std::cout << "Result: " << result << std::endl;

  return 0;
}
