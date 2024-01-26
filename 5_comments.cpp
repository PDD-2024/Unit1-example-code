/*
    Comments are lines that are ignored by the compiler. 
    They are used to add notes and explanations to the code.
    They are useful for yourself and other programmers to understand what the code does. 
    Comments are also useful to temporarily disable code, for example when debugging a program.
*/

#include <iostream>

int main()
{
    // This is an example of a single-line comment
    std::cout << "Hello World!" << std::endl; // This is also a single-line comment

    /*
    This is an example of a multi-line comment
    This is the second line of the comment
    */

    std::cout << "This line is not commented out" << std::endl; /* This is a multi-line comment as a single-line comment  */

    // std::cout << "This line is commented out" << std::endl;

    /*
     std::cout << "This line is also commented out" << std::endl;
    */

    return 0;
}


