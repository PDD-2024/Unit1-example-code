/*
    This program shows the minimum and maximum values of different data types
    and the size of different data types.
*/

#include <string> // for string data type
#include <iostream> // for cout and endl
#include <climits> // limits of integer data types
#include <cfloat> // limits of float data types



int main() {
    // Minimum and maximum values of different data types
    // Integer
    std::cout << "Minimum value of int: " << INT_MIN << std::endl;
    std::cout << "Maximum value of int: " << INT_MAX << std::endl;

    // Float
    std::cout << "Minimum value of float: " << FLT_MIN << std::endl;
    std::cout << "Maximum value of float: " << FLT_MAX << std::endl;

    // Double
    std::cout << "Minimum value of double: " << DBL_MIN << std::endl;
    std::cout << "Maximum value of double: " << DBL_MAX << std::endl;

    // Boolean
    std::cout << "Minimum value of bool: " << false << std::endl;
    std::cout << "Maximum value of bool: " << true << std::endl;

    // Char
    std::cout << "Minimum value of char: " << CHAR_MIN << std::endl;
    std::cout << "Maximum value of char: " << CHAR_MAX << std::endl;

    std::cout << std::endl; // empty line

    int my_integer = 136;
    float my_float = 23.16;
    double my_double = 219.16;
    bool my_bool = true;
    char my_character = 'l';
    std::string my_string = "asd@&%-*/";

    // Size of different data types
    std::cout << "Size of int: " << sizeof(my_integer) << std::endl;
    std::cout << "Size of float: " << sizeof(my_float) << std::endl;
    std::cout << "Size of double: " << sizeof(my_double) << std::endl;
    std::cout << "Size of bool: " << sizeof(my_bool) << std::endl;
    std::cout << "Size of char: " << sizeof(my_character) << std::endl;
    std::cout << "Size of string: " << sizeof(my_string) << std::endl;



    return 0;
}
