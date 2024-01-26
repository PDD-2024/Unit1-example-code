/*
    This program demonstrates the correct way to declare variables.
*/

#include <iostream>

int main() {
    int var1 = 0;
    std::cout << "var1: " << var1 << std::endl;

    int var2;
    std::cout << "var2: " << var2 << std::endl;
    var2 = 1;
    std::cout << "var2: " << var2 << std::endl;

    int var3 = 2, var4 = 3;
    std::cout << "var3: " << var3 << std::endl;
    std::cout << "var4: " << var4 << std::endl;

    int var5, var6;
    var5 = 4;
    var6 = 5;
    std::cout << "var5: " << var5 << std::endl;
    std::cout << "var6: " << var6 << std::endl;

    int var7, var8 = 6;
    std::cout << "var7: " << var7 << std::endl;
    std::cout << "var8: " << var8 << std::endl;

    return 0;
}
