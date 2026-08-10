// deletion in c

#include <stdio.h>

void deleteElement(int arr[], int *n, int pos)
{
    //pos is 0-indexed position to be deleted
    for (int i = pos; i <*n - 1; i++)
    {
        arr[i] = arr[i +1];  //shift left
    }
    (*n)--;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Before deletion: ");
    for (int i = 0; i <n; i++)
    printf("%d ", arr[i]);
    printf("\n");

    deleteElement(arr, &n, 2);   //delete element at index 2

    printf("After deletion: ");
    for (int i = 0; i <n; i++)
    printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// why shift left, not right?
// deletion removes a value, so every element after 'pos' moves one 
// step left to fill the gap. this is the oppsite of insertion, 
// where elements shift right to make room.