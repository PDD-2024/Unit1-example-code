#include <iostream>

int main()
{
    int *p = nullptr;
    int x = *p; // Access violation: trying to access null pointer's content

    int arr[5] = {1, 2, 3, 4, 5};
    int y = arr[5]; // Access violation: index out of bounds (valid indices are 0-4)

    int *p2 = new int[10];
    delete[] p2;
    p2[3] = 42; // Access violation: writing to memory that has been freed

    return 0;
}
