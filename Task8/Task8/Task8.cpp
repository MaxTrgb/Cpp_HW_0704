/*Task8. Write a function that checks if an array is palindrome */

#include <iostream>
using namespace std;

// This function checks if an array is a palindrome
bool isPalindrome(int arr[], int size) {

    for (int i = 0; i < size / 2; i++) {

        // Compare elements from opposite ends of the array
        if (arr[i] != arr[size - i - 1]) {

            // If they don't match, the array is not a palindrome
            return false;
        }
    }

    // If all elements match, the array is a palindrome
    return true;
}

int main() {
    // Print a message to explain what the program does
    cout << "With this program you can find out if an array is a palindrome." << endl;

    // Loop indefinitely to allow the user to check multiple arrays
    while (true) {

        // Create an array to hold 6 integer values
        int arr[6];

        // Prompt the user to enter 6 values for the array
        cout << "\nEnter 6 values for the array: ";

        // Read in the 6 values from the user
        for (int i = 0; i < 6; i++) {

            cin >> arr[i];
        }
        // Check if the array is a palindrome using the isPalindrome function
        if (isPalindrome(arr, 6)) {

            // If it is a palindrome, print a message indicating so
            cout << "The array is a palindrome." << endl;
        }
        else {

            // If it is not a palindrome, print a message indicating so
            cout << "The array is not a palindrome." << endl;
        }
        // Prompt the user to continue or exit the program
        cout << "To continue press 1, for exit press 2: ";

        int choice;
        cin >> choice;

        // If the user chooses to exit, break out of the loop and terminate the program
        if (choice == 2) {

            break;
        }
    }
}
