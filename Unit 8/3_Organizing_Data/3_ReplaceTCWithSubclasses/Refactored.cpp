#include <iostream>
#include <memory>

// Abstract base class
class Animal {
public:
    virtual std::string makeSound() const = 0;
    virtual ~Animal() {}
};

// Concrete subclasses
class Dog : public Animal {
public:
    std::string makeSound() const override {
        return "Woof!";
    }
};

class Cat : public Animal {
public:
    std::string makeSound() const override {
        return "Meow!";
    }
};

class Bird : public Animal {
public:
    std::string makeSound() const override {
        return "Chirp!";
    }
};

// Factory method to create instances based on type code
std::unique_ptr<Animal> createAnimal(const std::string& typeCode) {
    if (typeCode == "dog") {
        return std::make_unique<Dog>();
    } else if (typeCode == "cat") {
        return std::make_unique<Cat>();
    } else if (typeCode == "bird") {
        return std::make_unique<Bird>();
    } else {
        return nullptr; // Or handle unknown type code accordingly
    }
}

int main() {
    // Example usage
    std::unique_ptr<Animal> dog = createAnimal("dog");
    if (dog) {
        std::cout << dog->makeSound() << std::endl; // Outputs: Woof!
    }

    std::unique_ptr<Animal> cat = createAnimal("cat");
    if (cat) {
        std::cout << cat->makeSound() << std::endl; // Outputs: Meow!
    }

    std::unique_ptr<Animal> bird = createAnimal("bird");
    if (bird) {
        std::cout << bird->makeSound() << std::endl; // Outputs: Chirp!
    }

    return 0;
}
