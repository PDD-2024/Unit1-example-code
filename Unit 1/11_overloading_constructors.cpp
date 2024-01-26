#include <iostream>
#include <string>

struct Color {
    int red;
    int green;
    int blue;

    Color(int red, int green, int blue) : red(red), green(green), blue(blue) {}
    Color(std::string hex) {
        // Remove the '#' character if present
        if (hex[0] == '#') {
            hex = hex.substr(1);
        }

        // Convert the hexadecimal string to integers
        int r = std::stoi(hex.substr(0, 2), nullptr, 16);
        int g = std::stoi(hex.substr(2, 2), nullptr, 16);
        int b = std::stoi(hex.substr(4, 2), nullptr, 16);

        // Assign the converted values to the color struct members
        this->red = r;
        this->green = g;
        this->blue = b;
    }

    std::string to_hex() {
        std::string r = std::to_string(this->red);
        std::string g = std::to_string(this->green);
        std::string b = std::to_string(this->blue);

        // Convert the integers to hexadecimal strings
        std::string hex = "(" + r + "," + g + "," + b + ")";

        return hex;
    }
};

int main() {
    Color myColor = Color("#ff0000");
    std::cout << myColor.to_hex() << std::endl;
    
    Color otherColor = Color(255,0,0);
    std::cout << otherColor.to_hex() << std::endl;
    
    return 0;
}
