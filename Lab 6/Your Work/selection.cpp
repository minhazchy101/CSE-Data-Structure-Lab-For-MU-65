#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        int min_inx = i;

        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (arr[j] < arr[min_inx]){
                min_inx = j;
                }
        }

        if (min_inx != i)
        {
            swap(arr[min_inx], arr[i]);
        }
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

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array (Selection Sort): ";
    printArray(arr, n);
    return 0;
}