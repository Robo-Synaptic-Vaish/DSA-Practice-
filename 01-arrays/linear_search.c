// linear search in c

#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        return i;   //found, return index
    }
    return -1;   // not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;

    int result = linearSearch(arr, n, key);

    if(result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}

// works on ANY array - sorted or unsorted
// Best case: Ω(1) - key is at index 0
// Worst case: O(n) - key is at the end, or not present at all
// so overall commplexity = O(n)