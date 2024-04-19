#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(10);

    // Print the elements of the set
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the set
    int searchElement = 8;
    if (mySet.find(searchElement) != mySet.end()) {
        std::cout << searchElement << " exists in the set." << std::endl;
    } else {
        std::cout << searchElement << " does not exist in the set." << std::endl;
    }

    // Remove an element from the set
    int removeElement = 2;
    mySet.erase(removeElement);

    // Print the updated elements of the set
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}