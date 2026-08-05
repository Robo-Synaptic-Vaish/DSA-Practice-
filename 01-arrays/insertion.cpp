// INSERTION 

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

//Insert at end - O(1)
void insertAtEnd(int arr[], int &n, int value)
{
    arr[n] = value;
    n++;
}

//Insert at beginning - O(n)
void insertAtBeginning(int arr[], int &n, int value)
{
    //Shift all elements to the right from position
    for(int i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;
}

//Insert at specific position - O(n)
void insertAtPosition(int arr[], int &n, int value, int pos)
{
    //Shift elements to the right from position
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
}

int main()
{
    int arr[100] = {10, 25, 7, 42, 18};
    int n = 5;

    cout << "Original: ";
    display(arr, n);

    insertAtEnd(arr, n, 99);
    cout << "After End Insert: ";
    display(arr, n);

    insertAtBeginning(arr, n, 5);
    cout << "After Beginning Insert: ";
    display(arr, n);

    insertAtPosition(arr, n, 50, 3);
    cout << "After Position Insert (index 3): ";
    display(arr, n);

    return 0;
}

// COMPLEXITIES
// END: O(1)
// BEGINNING : O(n)
// POSITION : O(n)