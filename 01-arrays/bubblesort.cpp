// Bubble Sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i <n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j +1]);
                swapped = true;
            }
        }
        // If no swapping, array is sorted (optimization)
        if (!swapped) break;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
    }
    cout << endl;

    return 0;
}


// COMPLEXITIES
// Best : O(n)
// Avg/Worst : O(n^2)
// Space : O(1)