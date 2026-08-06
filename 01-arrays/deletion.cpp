// DELETION

#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Delete from end - O(1)
void deleteFromEnd(int arr[], int &n)
{
    n--;  //just reduce size
}

//Delete from beginning - O(n)
void deleteFromBeginning(int arr[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}

//Delete from specific position - O(n)
void deleteFromPosition(int arr[], int &n, int pos)
{
    for (int i = pos; i < - 1; i++)
    {
        arr[i] = arr[i +1];
    }
    n--;
}

int main()
{
    int arr[100] = {10, 25, 7, 42, 18, 99, 5, 50};
    int n = 8;

    cout << "Original: ";
    display(arr, n);

    deleteFromEnd(arr, n);
    cout << "After End Delete: ";
    display(arr, n);

    deleteFromBeginning(arr, n);
    cout << "After beginning Delete: ";
    display(arr, n);

    deleteFromPosition(arr, n, 2);
    cout << "After Position Delete (index 2): ";
    display(arr, n);

    return 0;
}

//COMPLEXITIES 
// 1. End: O(1)
// 2. Beginning: O(n)
// 3. Position: O(n)