/*
    This file contains examples of control structures in C++.
*/

#include <iostream>

int main()
{
    // If-else statements
    bool my_bool = true; // or false
    if (my_bool)
    {
        std::cout << "my_bool is true" << std::endl;
    }
    else
    {
        std::cout << "my_bool is false" << std::endl;
    }

    std::cout << std::endl; // empty line

    // If-else-if statements
    int my_int = 1;
    if (my_int == 0)
    {
        std::cout << "my_int is 0" << std::endl;
    }
    else if (my_int == 1)
    {
        std::cout << "my_int is 1" << std::endl;
    }
    else
    {
        std::cout << "my_int is not 0 or 1" << std::endl;
    }

    std::cout << std::endl; // empty line

    // Ternary operator
    int ternary_int = 1;
    bool ternary_bool = (ternary_int == 0) ? true : false;
    std::cout << "ternary_bool: " << ternary_bool << std::endl;

    std::cout << std::endl; // empty line

    // While loop
    bool while_condition = true;
    int i = 0;
    while (while_condition)
    {
        std::cout << "while loop iteration: " << i << std::endl;
        i++;
        if (i == 5)
        {
            while_condition = false;
        }
    }
    std::cout << "while loop finished, i -> " << i << std::endl;

    std::cout << std::endl; // empty line

    // Do-while loop
    int z = 0;
    do
    {
        std::cout << "do-while loop iteration: " << z << std::endl;
        z++;
    } while (z < -200);
    std::cout << "do-while loop finished, z -> " << z << std::endl;

    std::cout << std::endl; // empty line

    // For loop
    int stop_iteration = 5;
    for (int x = 0; x < stop_iteration; x++)
    {
        std::cout << "for loop iteration: " << x << std::endl;
    }
    std::cout << "for loop finished, x -> " << stop_iteration << std::endl;

    std::cout << std::endl; // empty line

    // Switch statement, and break
    int variable = 1;
    switch (variable)
    {
    case 0:
        std::cout << "variable is 0" << std::endl;
        break;
    case 1:
        std::cout << "variable is 1" << std::endl;
        break;
    case 2:
    case 3:
        std::cout << "variable is 2 or 3" << std::endl;
        break;
    default:
        std::cout << "variable is not 0, 1, 2 or 3" << std::endl;
    }

    std::cout << std::endl; // empty line

    // Continue
    for (int x = 0; x < 6; x++)
    {
        if (x == 3)
        {
            continue;
        }
        std::cout << "continue loop iteration: " << x << std::endl;
    }

    return 0;
}
