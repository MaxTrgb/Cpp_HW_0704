/*Task6. Implement the inverse merging algorithm of the two sorted arrays. 
Two sorted arrays are placed into one sorted massif. 
An array is created by concatenation two subarrays in reverse order */

#include <iostream>
using namespace std;

// function to merge two sorted subarrays in reverse order
void inverseMerge(int arr[], int l, int m, int r) {

    // find the sizes of the subarrays
    int n1 = m - l + 1;
    int n2 = r - m;
    // create two temporary arrays to hold the subarrays
    int* left = new int[n1];
    int* right = new int[n2];

    // copy the elements from the original array to the temporary arrays
    for (int i = 0; i < n1; i++) {

        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {

        right[j] = arr[m + 1 + j];
    }

    // merge the two subarrays into the original array in reverse order
    int i = n1 - 1, j = n2 - 1, k = r;
    while (i >= 0 && j >= 0) {

        if (left[i] <= right[j]) { 

            arr[k] = left[i];
            i--;
        }
        else {
            arr[k] = right[j];
            j--;
        }
        k--;
    }
    // copy any remaining elements from the left subarray
    while (i >= 0) {

        arr[k] = left[i];
        i--;
        k--;
    }
     // copy any remaining elements from the right subarray
    while (j >= 0) {

        arr[k] = right[j];
        j--;
        k--;
    }
    // free the temporary arrays
    delete[] left;
    delete[] right;
}

// function to recursively sort the original array using inverse merge sort
void inverseMergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        inverseMergeSort(arr, l, m);
        inverseMergeSort(arr, m + 1, r);
        inverseMerge(arr, l, m, r);
    }
}

int main() {

    // initialize arrays
    int arr1[] = { 1, 3, 5, 7, 9 };
    int arr2[] = { 2, 4, 6, 8, 10 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int* arr = new int[n1 + n2];

    // concatenate the two arrays into a single array in reverse order
    for (int i = 0; i < n1; i++) {

        arr[i] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {

        arr[j + n1] = arr2[j];
    }

    // print the original arrays
    cout << "Original arrays:\n";
    cout << "Array 1: ";

    for (int i = 0; i < n1; i++) {

        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "Array 2: ";

    for (int i = 0; i < n2; i++) {

        cout << arr2[i] << " ";
    }
    cout << endl;

    // sort the merged array using inverse merge sort
    inverseMergeSort(arr, 0, n1 + n2 - 1);

    // print merged array
    cout << "\nMerged array: ";
    for (int i = 0; i < n1 + n2; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;

}