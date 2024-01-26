#include <iostream>

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl; // Blank line
}

void array_declaration(){
        // Array declaration
    int int_array[5] = {1, 2, 3, 4, 5};
    print_array(int_array, 5);

    int int_array2[] = {1, 2, 3, 4, 5};
    print_array(int_array2, 5);

    int int_array3[5] = {1, 2};
    print_array(int_array3, 5);

    int int_array4[5];
    print_array(int_array4, 5);
    for (int i = 0; i < 5; i++) {
        int_array4[i] = i + 1;
    }
    print_array(int_array4, 5);

    // int int_array5[]; // Error: array size missing in ‘int_array5’
}

void accesing_array_elements() {
    int int_array[5] = {1, 2, 3, 4, 5};
    // Accessing array elements
    std::cout << int_array[0] << std::endl;
    std::cout << int_array[1] << std::endl;

    // Assigning values to array elements
    int_array[0] = 10;
    int_array[1] = 20;
    std::cout << int_array[0] << std::endl;
    std::cout << int_array[1] << std::endl;

    // Assigning characters to integer array
    int_array[2] = '5';
    std::cout << int_array[2] << std::endl;

    // Assigning boolean to integer array
    int_array[3] = true;
    std::cout << int_array[3] << std::endl;

    // Assigning float to integer array
    int_array[4] = 5.5;
    std::cout << int_array[4] << std::endl;

    // Assigning string to integer array
    // int_array[5] = "Hello"; // Error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

}

void array_segmenation_fault(){
    int int_array4[5];
    print_array(int_array4, 5);
    for (int i = 0; i < 5; i++) {
        int_array4[i] = i + 1;
    }
    print_array(int_array4, 5);
    print_array(int_array4, 10000); // Segmentation fault (core dumped)
}

int main() {
    array_declaration();
    accesing_array_elements();
    // array_segmenation_fault(); // Uncomment to see the error

    return 0;
}
