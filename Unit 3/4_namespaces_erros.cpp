#include <iostream>

using namespace std;

int cout() {
    cout << "I am a also defined as cout" << endl;
    return 0;
}

int main() {
    std::cout << "Hello, World!" << endl;
    cout();
    return 0;
}

