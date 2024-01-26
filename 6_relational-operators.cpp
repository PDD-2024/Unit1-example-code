/*
    This program demonstrates the relational operators.
*/

#include <iostream>

int main() {
    // Relational operators
    int var1 = 1;
    int var2 = 2;

    // Equal to
    bool equal_to = (var1 == var2);
    std::cout << "equal_to: " << equal_to << std::endl;

    bool equal_to2 = (var1 == 1);
    std::cout << "equal_to2: " << equal_to2 << std::endl;
    
    // Not equal to
    bool not_equal_to = (var1 != var2);
    std::cout << "not_equal_to: " << not_equal_to << std::endl;

    bool not_equal_to2 = (var1 != 1);
    std::cout << "not_equal_to2: " << not_equal_to2 << std::endl;

    // Greater than
    bool greater_than = (var1 > var2);
    std::cout << "greater_than: " << greater_than << std::endl;

    bool greater_than2 = (var2 > var1);
    std::cout << "greater_than2: " << greater_than2 << std::endl;

    // Less than
    bool less_than = (var1 < var2);
    std::cout << "less_than: " << less_than << std::endl;

    bool less_than2 = (var2 < var1);
    std::cout << "less_than2: " << less_than2 << std::endl;

    // Greater than or equal to
    bool greater_than_or_equal_to = (var1 >= 1);
    std::cout << "greater_than_or_equal_to: " << greater_than_or_equal_to << std::endl;

    bool greater_than_or_equal_to2 = (var1 >= 0);
    std::cout << "greater_than_or_equal_to2: " << greater_than_or_equal_to2 << std::endl;

    bool greater_than_or_equal_to3 = (var1 >= var2);
    std::cout << "greater_than_or_equal_to3: " << greater_than_or_equal_to3 << std::endl;

    // Less than or equal to
    bool less_than_or_equal_to = (var1 <= 1);
    std::cout << "less_than_or_equal_to: " << less_than_or_equal_to << std::endl;

    bool less_than_or_equal_to2 = (var1 <= 2);
    std::cout << "less_than_or_equal_to2: " << less_than_or_equal_to2 << std::endl;

    bool less_than_or_equal_to3 = (var2 <= var1);
    std::cout << "less_than_or_equal_to3: " << less_than_or_equal_to3 << std::endl;

    return 0;
}
