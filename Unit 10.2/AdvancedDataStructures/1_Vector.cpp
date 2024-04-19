#include <iostream>
#include <vector>

int main() {

    // Initializing a vector with elements
    std::vector<int> v = {8, 4, 5, 9};

    // Initializing an empty vector
    std::vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements using indexing
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Iterating over the vector using a for loop
    std::cout << "All elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Initializing a vector with a specific size and default value
    std::vector<int> moreNumbers(5, 100);

    // Modifying elements using indexing
    moreNumbers[2] = 200;
    moreNumbers[4] = 400;

    // Iterating over the vector using a range-based for loop
    std::cout << "All elements: ";
    for (int num : moreNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Clearing the vector
    numbers.clear();
    moreNumbers.clear();

    return 0;
}