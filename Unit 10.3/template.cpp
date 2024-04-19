#include <iostream>
#include <type_traits>

template <typename T>
class MyClass {
public:
    // Constructor that accepts only integral types
    explicit MyClass(T value) {
        static_assert(std::is_integral<T>::value, "Template parameter must be an integral type");
        data = value;
    }

    // Getter method
    T getValue() const {
        return data;
    }

private:
    T data;
};

int main() {
    // Example usage
    MyClass<int> obj1(5);  // OK, int is an integral type
    std::cout << "obj1 value: " << obj1.getValue() << std::endl;

    // Uncommenting the following line would result in a compile-time error
    // MyClass<float> obj2(3.14);  // Error: float is not an integral type

    return 0;
}
