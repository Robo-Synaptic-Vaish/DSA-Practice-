// selection sort in c

#include <stdio.h>

//Swap function (C doesn't have built-in swap)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i ;   //assume current position holds the minimum
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(&arr[i], &arr[minIdx]);  // pass addresses (call by reference)
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   //correct - prints the value
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   //correct - prints the value
    }
    printf("\n");

    return 0;
}

/*
 * COMPLEXITY ANALYSIS:
 * 
 * Time Complexity:
 * - Best:  O(n²)  - Always scans entire remaining array
 * - Avg:   O(n²)  - Same for any input order  
 * - Worst: O(n²)  - Cannot be optimized
 * 
 * Space Complexity: O(1)
 * 
 * Why O(n²)?
 * - Outer loop: runs (n-1) times
 * - Inner loop: runs (n-i-1) times
 * - Total comparisons: n(n-1)/2
 * - Growth: Quadratic
 * 
 * Advantages:
 * - Simple to implement
 * - Minimal swaps (at most n-1)
 * - In-place sorting
 * 
 * Disadvantages:
 * - Always O(n²) - not adaptive
 * - Not stable (doesn't preserve order of equal elements)
 * - Slow for large datasets
 */