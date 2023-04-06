/*Task7. Find the number of common elements in two arrays */

#include <iostream>
using namespace std;

int main() {

    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE];
    int commonCount = 0;
    
    // Prompt user to enter values for first array
    cout << "Enter the elements of the first array (size " << SIZE << "): ";
    for (int i = 0; i < SIZE; i++) {

        cin >> arr1[i];a
    }

    // Prompt user to enter values for second array
    cout << "Enter the elements of the second array (size " << SIZE << "): ";
    for (int i = 0; i < SIZE; i++) {

        cin >> arr2[i];
    }

    // Check for common elements
    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            if (arr1[i] == arr2[j]) {

                commonCount++;
                break;
            }
        }
    }

    // Output the result
    cout << "The number of common elements between the two arrays is: " << commonCount << endl;

}