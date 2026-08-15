#include <stdio.h>
#include <stdlib.h>

// Basic merge 
void mergeBasic(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i= 0; j = 0; k = 0;

    while(i<n1 && j<n2)
    {
        if (arr1[i] <= arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }
    while ( i < n1) result [k++] = arr1[i++];
    while (j < n2) result[k++] = arr2[j++];
}

//Merge returning size
int mergeWithSize(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i = 0 ,j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        result[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }

    while(i < n1) result[k++] = arr1[i++];
    while(j < n2) result[k++] = arr2[j++];

    return k;
}

//merge using pointers
int* mergePointers(int arr1[], int n1, int arr2[], int n2)
{
    int *result = (int*)malloc((n1 +n2) * sizeof(int));
    if(!result) return NULL;

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2)
    {
        result[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }

    while (i < n1) result[k++] = arr1[i++];
    while (j <n2) result[k++] = arr2[j++];

    return result;
}

//helper
void printArray(int arr[], int n)
{
    for(int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//main
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: "); printArray(arr1, n1);
    printf("Array 2: "); printArray(arr2, n2);

    //version1
    int result1[n1 + n2];
    mergeBasic(arr1, n1, arr2, n2, result1);
    printf("Merged (Basic): "); printArray(result1, n1 + n2);

    //version2
    int result2[n1 +n2];
    int size = mergeWithSize(arr1, n1, arr2, n2, result2);
    printf("Merged (With Size): "); printArray(result2, size);

    //version3
    int *result3 = mergePointers(arr1, n1, arr2, n2);
    printf("Merged (Pointers): ");printArray(result3, n1 + n2);
    free(result3);

    return 0;
}