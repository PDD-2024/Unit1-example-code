#include <iostream>

// Original class that we can't modify
class Rectangle {
protected:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int getWidth() const { return width; }
    int getHeight() const { return height; }
    int getArea() const { return width * height; }
};

// Local Extension - Wrapper
class Square {
private:
    Rectangle rectangle;
public:
    Square(int side) : rectangle(side, side) {}
    int getArea() const { return rectangle.getArea(); }
};

int main() {
    Square square(5);
    std::cout << "Square Area: " << square.getArea() << std::endl;
    return 0;
}


