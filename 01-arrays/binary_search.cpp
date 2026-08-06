// binary_search
// ONLY sorted arrays!

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;  //prevents overflow

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;   //search right half
        }
        else 
        {
            right = mid - 1;  //search left half
        }
    }
    return -1;   //not found
}

int main()
{
    // Array MUST be sorted!
    int arr[] = {7, 10, 18, 25, 42, 55, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element "<<target<<" found at index: "<< result<<endl;
    }
    else 
    {
        cout << "Element not found" << endl;
    }

    return 0;
}


// TIME COMPLEXITY : O(long n)
// SPACE : O(1)
