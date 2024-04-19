#include <iostream>

// Example 1: Enum class with int underlying type
enum class Color {
    RED,
    GREEN,
    BLUE
};

// Example 2: Enum class with char underlying type
enum class Direction : char {
    NORTH = 'N',
    EAST = 'E',
    SOUTH = 'S',
    WEST = 'W'
};

int main() {
    // Example 1: Enum class with int underlying type
    Color color = Color::GREEN;
    if (color == Color::GREEN) {
        std::cout << "Color is green" << std::endl;
    }

    // Example 2: Enum class with char underlying type
    Direction direction = Direction::NORTH;
    if (direction == Direction::NORTH) {
        std::cout << "Direction is north" << std::endl;
    }

    return 0;
}