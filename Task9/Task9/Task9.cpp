/*Task9. Check if one array contains all elements of another array*/

#include <iostream>

using namespace std;

int main() {

    const int SIZE = 5;
    int array1[SIZE];
    int array2[SIZE];

    // prompt user to enter values for array1
    cout << "Enter values for array1:" << endl;
    for (int i = 0; i < SIZE; i++) {

        cin >> array1[i]; // read input value and store it in array1
    }

    // prompt user to enter values for array2
    cout << "Enter values for array2:" << endl;
    for (int i = 0; i < SIZE; i++) {

        cin >> array2[i]; // read input value and store it in array2
    }

    // check if array2 contains all elements of array1
    bool containsAll = true; 
    for (int i = 0; i < SIZE; i++) {


        bool found = false; 
        for (int j = 0; j < SIZE; j++) {

            if (array1[i] == array2[j]) { 

                found = true;
                array2[j] = -1; 
                break;
            }
        }

        if (!found) {

            // if array1[i] is not in array2

            containsAll = false; 

            break; // no need to check the rest of the elements
        }
    }

    if (containsAll) {

        cout << "Array2 contains all elements of array1." << endl;
    }
    else {

        cout << "Array2 does not contain all elements of array1." << endl;
    }
}
