// Linear_Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;  //found at index i
        }
    }
    return -1;   //not found
}

int main()
{
    int arr[] = { 10, 25, 7, 42, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element "<< target << " found at indx: " << result <<endl;
    }
    else 
    {
        cout << "Element not found" << endl;
    }

    return 0;
}


// TIME COMPLEXITY: O(n)
// SPACE : O(1)