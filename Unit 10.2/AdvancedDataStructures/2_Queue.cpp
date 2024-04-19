#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> myQueue;

    // Add elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Print the front element of the queue
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Print the back element of the queue
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    // Print the size of the queue
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    // Remove elements from the queue
    myQueue.pop();
    myQueue.pop();

    // Print the front element of the queue after removal
    std::cout << "Front element after removal: " << myQueue.front() << std::endl;

    return 0;
}