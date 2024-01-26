/*
    This program demonstrates the use of logical operators in C++
*/

#include <iostream>

int main() {
    bool im_true = true;
    bool im_false = false;

    // Logical AND
    bool logical_and = (im_true && im_false);
    std::cout << "logical_and: " << logical_and << std::endl;

    bool logical_and2 = (im_true && im_true);
    std::cout << "logical_and2: " << logical_and2 << std::endl;

    bool logical_and3 = (im_false && im_false);
    std::cout << "logical_and3: " << logical_and3 << std::endl;

    // Logical OR
    bool logical_or = (im_true || im_false);
    std::cout << "logical_or: " << logical_or << std::endl;

    bool logical_or2 = (im_true || im_true);  
    std::cout << "logical_or2: " << logical_or2 << std::endl;

    bool logical_or3 = (im_false || im_false);
    std::cout << "logical_or3: " << logical_or3 << std::endl;

    // Logical NOT
    bool logical_not = !im_true;
    std::cout << "logical_not: " << logical_not << std::endl;

    bool logical_not2 = !im_false;
    std::cout << "logical_not2: " << logical_not2 << std::endl;

    bool logical_not3 = !(im_true && im_false);
    std::cout << "logical_not3: " << logical_not3 << std::endl;
    
    return 0;
}
