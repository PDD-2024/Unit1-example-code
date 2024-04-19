#include <iostream>
#include <list>

int main() {
    std::list<int> myList; // Creating an empty list of integers

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Accessing elements in the list
    std::cout << "First element: " << myList.front() << std::endl;
    std::cout << "Last element: " << myList.back() << std::endl;

    // Iterating over the list
    std::cout << "List elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing elements from the list
    myList.pop_back();

    // Checking if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty" << std::endl;
    } else {
        std::cout << "List is not empty" << std::endl;
    }

    return 0;
}