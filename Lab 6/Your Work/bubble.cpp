#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool swapped;

    for (int i = 0; i < n-1; i++)
    {
        /* code */
        swapped = false;

        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if(arr[j] > arr[j+1] ){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    
}

void printArry(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
         cout << arr[i] << " ";
         cout << "\n";
    }
    
}


int main(){
     int arr[] = {64, 34, 25, 12, 22, 11, 90};
     int n = sizeof(arr)/ sizeof(arr[0]);
     cout << "Unsorted array: ";
    printArry(arr, n);
    bubbleSort(arr, n);
     cout << "sorted array: ";
    printArry(arr, n);
    return 0;
}