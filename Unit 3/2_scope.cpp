#include <iostream>

// Global scope
int global_access = 0;
int x = 0;

int add(int a, int b) {
    // Local scope
    int local_access = a + b;
    return local_access;
}

class MyClass {
    // Class scope
    int class_access = 0;

    
    public:
        static int static_class_access;
        MyClass() {
            // Constructor scope
            class_access = 1;
        }

        int add(int a, int b) {
            // Method scope
            int method_access = a + b;
            return method_access;
        }

        int get_class_access() {
            return class_access;
        }
};

int MyClass::static_class_access = 8;

int main() {
    std::cout << "Global access: " << global_access << std::endl;
    std::cout << "Local access: " << add(1, 2) << std::endl;

    MyClass my_class;
    std::cout << "Class method access: " << my_class.add(1, 2) << std::endl;
    std::cout << "Class access: " << my_class.get_class_access() << std::endl;
    
    std::cout << "Static class access: " << MyClass::static_class_access << std::endl;


    int x = 1;
    if(true){
        int x = 2;
        std::cout << "Local x: " << x << std::endl;
        std::cout << "Global x: " << ::x << std::endl;

    }
    std::cout << "Local x: " << x << std::endl;

    return 0;
}
