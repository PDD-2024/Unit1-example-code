#include <iostream>
#include <cstring>

union Data {
    int i;
    float f;
    char str[20];
};

void printData(Data data) {
    std::cout << "data.i: <" << data.i << ">" << std::endl;
    std::cout << "data.f: <" << data.f << ">" << std::endl;
    std::cout << "data.str: <" << data.str << ">" << std::endl;
}

int main() {
    Data data;
    
    data.i = 10;
    printData(data);
    
    data.f = 3.14;
    printData(data);
    
    strcpy(data.str, "Hello, World!");
    printData(data);
    
    return 0;
}