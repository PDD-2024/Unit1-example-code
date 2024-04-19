#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft = 0, int in = 0) {
        feet = ft;
        inches = in;
    }

    void display() {
        std::cout << "Feet: " << feet << " Inches: " << inches << std::endl;
    }
};

class Length {
private:
    int meters;

public:
    Length(int m = 0) {
        meters = m;
    }

    operator Distance() {
        int ft = meters / 0.3048; // Conversion from meters to feet
        int in = (meters / 0.3048 - ft) * 12; // Conversion from meters to inches
        return Distance(ft, in);
    }
};

int main() {
    Length len(10);
    Distance dist = len; // Implicit conversion from Length to Distance
    dist.display();

    return 0;
}