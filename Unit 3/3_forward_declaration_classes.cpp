#include <iostream>

// Forward declaration of classes

class A;
class B;

// Forward declaration of function foo
void foo(A* a);
void foo(B* b);

// Class A definition
class A {
public:
    A() {

    }
    void hello() {
        std::cout << "Hello from A" << std::endl;
    }

    void helloB(B* b);
};

// Class B definition
class B {
public:
    B() {

    }

    void hello() {
        std::cout << "Hello from B" << std::endl;
    }
};

// Class A method helloB definition
void A::helloB(B* b) {
    b -> hello();
}


int main() {
    // Creating an instance of class A
    A* a = new A();
    // Calling function foo
    foo(a);

    // Creating an instance of class B
    B* b = new B();
    // Calling function foo
    foo(b);

    // Calling method helloB
    a -> helloB(b);

    return 0;
}

// Function foo definition
void foo(A* a) {
    a -> hello();
}

void foo(B* b) {
    b -> hello();
}
