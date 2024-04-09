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
};

class AreaCalculator {
public:
    double calculateArea(double width, double height) const {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5.0, 10.0);
    AreaCalculator calculator;

    // Calculate area by passing width and height as parameters
    double area = calculator.calculateArea(rectangle.getWidth(), rectangle.getHeight());
    std::cout << "Area: " << area << std::endl;

    return 0;
}
