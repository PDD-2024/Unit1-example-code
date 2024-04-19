#include <iostream>

struct MyStruct {
    int type;
    union {
        int intValue;
        float floatValue;
        char charValue;
    };
};

int main() {
    MyStruct myStruct;
    myStruct.type = 1;
    myStruct.intValue = 42;

    std::cout << "Type: " << myStruct.type << std::endl;
    std::cout << "Value: " << myStruct.intValue << std::endl;

    return 0;
}