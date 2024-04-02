#include <iostream>

int main() {
    int length = 5;
    int width = 3;

    // Calculate area and perimeter using a single temporary variable
    int temp = length * width;
    std::cout << "Area: " << temp << std::endl;

    temp = 2 * (length + width);
    std::cout << "Perimeter: " << temp << std::endl;

    return 0;
}



