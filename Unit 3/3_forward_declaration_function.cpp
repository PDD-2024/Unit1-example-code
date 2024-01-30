#include <iostream>

void multiplyNumbers(int a, int b);

void sumNumbersReference(int a, int b, int &result);

void sumNumbersPointer(int a, int b, int *result);

int main() {

    multiplyNumbers(3,5);

    int result = 0;
    sumNumbersReference(2,7,result);
    std::cout << "Result reference: " << result << std::endl;

    sumNumbersPointer(8,5,&result);
    std::cout << "Result pointer: " << result << std::endl;


    return 0;
}

void multiplyNumbers(int a, int b) {
    int result = a * b;
    std::cout << "Result: " << result << std::endl;
}

void sumNumbersReference(int a, int b, int &result) {
    result = a + b;
}

void sumNumbersPointer(int a, int b, int *result) {
    *result = a + b;
}

