// INSERTION IN C

#include <stdio.h>

void insert(int arr[], int *n, int pos, int value)
{
    //pos is 0-indexed position where value should go
    for (int i = *n; i > pos; i--)
    {
        arr[i] = arr[i-1];   //shift right 
    }
    arr[pos] = value;
    (*n)++;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Before insertion: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    printf("\n");

    insert(arr, &n, 2, 99);   //insert 99 at index 2

    printf("After insertion: ");
    for (int i = 0; i <n; i++)
    printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// why int *n?
// we pass 'n' by pointer because insertion changes the array's size
// and C passes arguments by value by default - we need the pointer 
// to actually update n in main().