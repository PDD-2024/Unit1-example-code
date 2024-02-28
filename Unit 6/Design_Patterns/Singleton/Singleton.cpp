#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    
    // Private constructor to prevent instantiation
    Singleton() {}
    
public:
    // Static method to get the instance of the Singleton class
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    public:
    void printID() {
        std::cout << "Singleton ID: " << this << std::endl;
    }
    
    // Other member functions of the Singleton class
    // ...
};

// Initialize the static instance variable
Singleton* Singleton::instance = nullptr;

int main() {
    // Get the instance of the Singleton class
    Singleton* singleton = Singleton::getInstance();

    // Print the memory address of the Singleton instance
    singleton->printID();

    // Get another instance of the Singleton class
    Singleton* anotherSingleton = Singleton::getInstance();

    // Print the memory address of the Singleton instance
    anotherSingleton->printID();

    return 0;
}
