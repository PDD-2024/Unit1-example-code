#include <iostream>

enum Color {
    RED,
    GREEN,
    BLUE
};

enum HttpErrorCode {
    OK = 200,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    FORBIDDEN = 403,
    NOT_FOUND = 404,
    INTERNAL_SERVER_ERROR = 500
};

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    Color color = RED;
    HttpErrorCode errorCode = NOT_FOUND;
    Month month = MARCH;

    std::cout << "Color: ";
    switch (color) {
        case RED:
            std::cout << "Red";
            break;
        case GREEN:
            std::cout << "Green";
            break;
        case BLUE:
            std::cout << "Blue";
            break;
    }
    std::cout << std::endl;

    std::cout << "HTTP Error Code: " << errorCode << std::endl;

    if (month == MARCH) {
        std::cout << "It's March!" << std::endl;
    }

    return 0;
}
