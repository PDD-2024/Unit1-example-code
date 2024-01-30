// main.cpp
#include "5_header.h"
#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

IntHolder::IntHolder(int numbersInput[])
{
    numbers = new int[10];
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = numbersInput[i];
    }
}

int IntHolder::getInt(int index)
{
    return numbers[index];
}


int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    IntHolder intHolder = IntHolder(numbers);
    std::cout << "Number at index 5: " << intHolder.getInt(5) << std::endl;
    std::cout << "Sum of 4 and 3: " << sum(intHolder.getInt(4), intHolder.getInt(3)) << std::endl;
    return 0;
}