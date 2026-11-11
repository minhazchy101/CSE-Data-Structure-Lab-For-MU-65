#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        /* code */
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            /* code */
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
        cout << "\n";
    }
}
int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    insertionSort(arr, n);

     cout << "Sorted array (Insertion Sort): ";
    printArray(arr, n);
    return 0;
}