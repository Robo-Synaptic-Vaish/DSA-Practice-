// binary search in c

#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;   //avoids overflow vs (low+high)/2

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;    // search right half
        else
            high = mid - 1;   // search left half
    }
    return -1;   // not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};    // must be sorted
    int n = 7;
    int key = 50;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else 
        printf("Element %d not found\n", key);

    return 0;
}

// requires SORTED array
// Best case: Ω(1) - key is exactly at the middle
// Worst case: O(log n) - range keeps halving until 1 element left 
// so overall complexity = O(log n).