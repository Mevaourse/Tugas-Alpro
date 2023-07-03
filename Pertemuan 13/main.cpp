#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Metode pengurutan

// Bubble Sort
void bubbleSort(vector<int>& arr, int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}

// Selection Sort
void selectionSort(vector<int>& arr, int n) {
    if (n == 1)
        return;

    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx])
            max_idx = i;
    }

    swap(arr[max_idx], arr[n - 1]);
    selectionSort(arr, n - 1);
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Metode pencarian

// Binary Search
int binarySearch(vector<int>& arr, int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        return binarySearch(arr, mid + 1, right, target);
    }

    return -1;
}

// Linear Search
int linearSearch(vector<int>& arr, int left, int right, int target) {
    if (left > right)
        return -1;

    if (arr[left] == target)
        return left;

    if (arr[right] == target)
        return right;

    return linearSearch(arr, left + 1, right - 1, target);
}

// Fungsi bantuan untuk menampilkan array
void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    vector<int> arr1 = {63, 24, 8, 2, 11};
    vector<int> arr2 = {24, 5, 42, 32, 1};
    int n = arr.size();

    auto startProgram = high_resolution_clock::now();  // Mengukur waktu awal program

    // Sorting
    cout << "Bubble Sort"<<endl;
    cout << "Array sebelum pengurutan: "<<endl;
    printArray(arr);

    // Bubble Sort
    bubbleSort(arr, n);
    cout<< "array Setelah diurutkan"<<endl;
    printArray(arr);

    // Selection Sort

    cout<< "SelectionSort"<<endl;
    cout<<"Array sebelum pengurutan: "<<endl;
    printArray(arr1);
    selectionSort(arr1, n);
    cout << "array Setelah diurutkan"<<endl;
    printArray(arr1);

    // Merge Sort
    cout<<"MergeSort"<<endl;
    cout <<"Array sebelum pengurutan: "<<endl;
    printArray(arr2);
    mergeSort(arr2, 0, n - 1);

    cout << "aray setelah diurutkan: "<<endl;
    printArray(arr2);

    // Pencarian
    int target = 22;

    // Binary Search

    cout << "Binary search"<<endl;
    cout << "Array yang akan digunakan "<<endl;

    printArray(arr);
    int binaryResult = binarySearch(arr, 0, n - 1, target);

    if (binaryResult != -1)
        cout << "Angka " << target << " ditemukan (binary search) pada indeks " << binaryResult << endl;
    else
        cout << "Angka " << target << " tidak ditemukan (binary search)." << endl;

    // Linear Search
    cout << "Linear search"<<endl;
    cout << "Array yang akan digunakan "<<endl;
    printArray(arr1);
    int linearResult = linearSearch(arr1, 0, n - 1, target);

    if (linearResult != -1)
        cout << "Angka " << target << " ditemukan (linear search) pada indeks " << linearResult << endl;
    else
        cout << "Angka " << target << " tidak ditemukan (linear search)." << endl;

    auto stopProgram = high_resolution_clock::now();  // Mengukur waktu akhir program

    auto duration = duration_cast<microseconds>(stopProgram - startProgram);  // Menghitung total waktu eksekusi program

    // Total time complexity
    cout << "Total waktu eksekusi program: " << duration.count() << " mikrodetik" << endl;

    // Total space complexity
    size_t space = sizeof(arr) + sizeof(n) + sizeof(target) + sizeof(binaryResult) + sizeof(linearResult);
    cout << "Total space penggunaan program: " << space << " bytes" << endl;

    return 0;
}
