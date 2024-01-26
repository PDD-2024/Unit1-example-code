/*
    This program demonstrates the use of a structure to calculate the area of a rectangle in C
*/

#include <stdio.h>

// Definition of a structure instead of a class
struct Rectangle {
    float length;
    float width;
};

// Function to calculate the area
float calculateArea(struct Rectangle* r) {
    return r->length * r->width;
}

int main() {
    // Create a Rectangle structure
    struct Rectangle myRectangle = {5.0, 3.0};

    // Calculate and display the area
    printf("Area of the rectangle: %f\n", calculateArea(&myRectangle));

    return 0;
}
