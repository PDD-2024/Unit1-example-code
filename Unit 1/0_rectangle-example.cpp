/*
    * Example of a Rectangle class in C++
*/

#include <iostream>

// Definition of the Rectangle class in C++
class Rectangle {
public:
    // Attributes
    float length;
    float width;

    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Method to calculate the area
    float calculateArea() {
        return length * width;
    }
};

int main() {
    int number = 136;
    char ch = 'l';
    bool my_bool = true;

    // Create a Rectangle object
    Rectangle myRectangle(5.0, 3.0);

    // Calculate and display the area
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    return 0;
}
