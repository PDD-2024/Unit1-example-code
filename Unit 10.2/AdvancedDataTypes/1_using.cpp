#include <iostream>

using myInt = int; // Basic typedef

using myIntArray = int[5]; // Typedef for an array

using myIntPtr = int*; // Typedef for a pointer

using myUInt = unsigned int; // Typedef for unsigned int

using myFuncPtr = void (*)(); // Typedef for function pointer

void myFunction() {
    std::cout << "This is a function pointed by typedef function pointer." << std::endl;
}

int main() {
    myInt num = 10;
    std::cout << "Basic typedef: " << num << std::endl;

    myIntArray arr = {1, 2, 3, 4, 5};
    std::cout << "Typedef for an array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int value = 100;
    myIntPtr ptr = &value;
    std::cout << "Typedef for a pointer: " << *ptr << std::endl;

    myUInt uValue = 500;
    std::cout << "Typedef for unsigned int: " << uValue << std::endl;

    myFuncPtr func = myFunction;
    std::cout << "Typedef for function pointer: ";
    func();

    return 0;
}