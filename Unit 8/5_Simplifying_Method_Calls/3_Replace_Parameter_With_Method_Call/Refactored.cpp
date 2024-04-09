#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    double calculateArea() const {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5.0, 10.0);

    // Calculate area by directly calling the method on the object
    double area = rectangle.calculateArea();
    std::cout << "Area: " << area << std::endl;

    return 0;
}


