/*Task2. Implement a function that converts a string to capitalized form. 
The task can be implemented using the library "string".
*/

#include <string> // include the string library
#include <iostream> 
using namespace std; 

int main() {

    // declare an array of strings
    string arr[] = { "hello", "world" };

    // calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // print the original array 
    for (int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;

    // convert the strings to capitalized form using nested loops
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < arr[i].size(); j++) { // arr[i].size() returns the length of the string, which is the number of characters in the string

            arr[i][j] = toupper(arr[i][j]); //The toupper() function converts the lowercase character to an uppercase character
        }
    }

    // print the capitalized form of the array 
    cout << "Capitalized form: " << endl;
    for (int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }
}