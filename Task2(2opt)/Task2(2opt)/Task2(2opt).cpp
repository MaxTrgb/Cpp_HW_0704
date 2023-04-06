/*Task2. 2nd option. Implement a function that converts a string to capitalized form.
The task can be implemented using the library "string".
*/

#include <string> // include the string library
#include <iostream> 
using namespace std;

int main() 
{
    while (true) {

        string word;
        cout << "Enter a word to capitalize (type 'exit' to quit): ";
        getline(cin, word); // getline(cin, word) reads an entire line of input, including any whitespace characters

        // Check if the user wants to exit the loop
        if (word == "exit") {

            break;
        }
        // Convert each character of the word to uppercase using toupper() function
        for (int i = 0; i < word.size(); i++) {

            word[i] = toupper(word[i]); // The toupper() function converts the lowercase character to an uppercase character
        }

        // Display the capitalized form of the word
        cout << "Capitalized form: " << word << endl;
    }
}