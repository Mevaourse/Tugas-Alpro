#include <iostream>
using namespace std;

// Bubble Sort Descending
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection Sort Descending
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 5, 2, 8, 12, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "Array sorted using Bubble Sort (Descending): ";
    printArray(arr, n);

    int arr2[] = { 5, 2, 8, 12, 1 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    selectionSort(arr2, n2);
    cout << "Array sorted using Selection Sort (Descending): ";
    printArray(arr2, n2);

    return 0;
}
