// TRAVERSAL IN C 

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

//demonstrates :
// 1. Memory representation - array elements sit in contiguous
// memory, so arr[i] is computed as base_address + i * size_of_element
// so, array access is O(1) - direct math no searching needed.
// 2. Traversal - visiting each element in sequence