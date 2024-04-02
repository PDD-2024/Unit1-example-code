#include <iostream>
#include <string>

class Animal {
private:
    std::string type_code;

public:
    Animal(std::string type_code) : type_code(type_code) {}

    std::string make_sound() {
        if (type_code == "dog") {
            return "Woof!";
        } else if (type_code == "cat") {
            return "Meow!";
        } else if (type_code == "bird") {
            return "Chirp!";
        } else {
            return "Unknown animal";
        }
    }
};

int main() {
    Animal dog("dog");
    std::cout << dog.make_sound() << std::endl;  // Outputs: Woof!

    Animal cat("cat");
    std::cout << cat.make_sound() << std::endl;  // Outputs: Meow!

    Animal bird("bird");
    std::cout << bird.make_sound() << std::endl;  // Outputs: Chirp!

    Animal unknown("frog");
    std::cout << unknown.make_sound() << std::endl;  // Outputs: Unknown animal

    return 0;
}
