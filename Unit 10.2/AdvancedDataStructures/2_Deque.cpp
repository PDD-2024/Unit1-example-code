#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Adding elements to the front and back of the deque
    myDeque.push_front(10);
    myDeque.push_back(20);
    myDeque.push_front(5);
    myDeque.push_back(15);

    // Accessing elements in the deque
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    // Removing elements from the front and back of the deque
    myDeque.pop_front();
    myDeque.pop_back();

    // Checking if the deque is empty
    if (myDeque.empty()) {
        std::cout << "Deque is empty" << std::endl;
    } else {
        std::cout << "Deque is not empty" << std::endl;
    }

    // Printing all elements in the deque
    std::cout << "Elements in the deque: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}