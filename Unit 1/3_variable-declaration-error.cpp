/*
    This program demonstrates the errors that can occur when declaring variables
    the wrong way.
*/

#include <iostream>

int main() {
    int var1 = 0;
    bool var1 = true; // error: redeclaration of 'int var1'


    bool int = 3; // error: expected unqualified-id before 'int'
    
    return 0;
}


