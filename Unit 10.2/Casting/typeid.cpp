#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main() {
    Base* basePtr = new Derived();
    std::cout << "basePtr type: " << typeid(*basePtr).name() << std::endl;

    delete basePtr;

    return 0;
}


