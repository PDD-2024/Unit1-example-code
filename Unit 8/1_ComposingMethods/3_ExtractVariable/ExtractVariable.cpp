#include <iostream>

using namespace std;

int main() {
    string filePath = "/path/to/a/file/example.txt";

    // Confusing code
    string extension = filePath.substr(filePath.find_last_of(".") + 1);

    // Clear code
    size_t lastDotIndex = filePath.find_last_of(".");
    string extension = filePath.substr(lastDotIndex + 1);

    return 0;
}

