// Merge two sorted arrays

#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i = 0, j = 0, k = 0;

    //Compare and merge
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else 
        {
            result[k++] = arr2[j++];
        }
    }

    //Compare and merge
    while ( i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }

    //Copy remaining elements from arr1 (if any)
    while ( i < n1)
    {
        result[k++] = arr1[i++];
    }

    //Copy remaining elements from arr2 (if any)
    while ( i < n1)
    {
        result[k++] = arr1[i++];
    }

    //Copy remaining elements from arr2 (if any)
    while ( j < n2)
    {
        result[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[] = {2, 5, 8, 12};
    int arr2[] = {3, 6, 9, 15};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, result);

    cout << "Merged array: ";
    for(int i = 0; i < n1 + n2; i++)
    {
        cout<<result[i]<<" ";
    }
    cout << endl;

    return 0;
}