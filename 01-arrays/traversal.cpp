//TRAVERSAL 

#include <iostream>
using namespace std;

void traverse(int arr[], int n)
{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 25, 7, 42, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    traverse(arr, n);

    return 0;
}

// TIME COMPLEXITY : O(n)
// SPACE : O(1)