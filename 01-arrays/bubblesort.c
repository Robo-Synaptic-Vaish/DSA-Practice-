#include <stdio.h>
#include <stdbool.h>   //for bool type

//Swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = false;   //optimization: tracks if any swap occurs

        //Last i elements are already in place
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j +1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        //If no swapping, array is already sorted
        if(!swapped)
        {
            break;   //Early exit- BEST CASE O(n)
        }
    }
}

//Print array elements
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

/**
 * selection_sort.c
 * Selection Sort implementation in C
 * 
 * Time Complexity: O(n²) - Always!
 * Space Complexity: O(1)
 * 
 * Algorithm: 
 * 1. Find minimum element in unsorted part
 * 2. Swap it with first element of unsorted part
 * 3. Repeat for remaining elements
 */
