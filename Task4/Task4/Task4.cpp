/*Task4. Implement a function that finds all unique characters in a string.*/
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // Output explanation of program to user
    cout << "With this program you can find all unique characters in a string.\n";

    while (true) {
        // Declare variables for input word and character count
        string word;
        unordered_map<char, int> counts; // unordered_map is a container class that stores key-value pairs

        // user  input word
        cout << "\nEnter a word (type 'exit' to quit): ";
        getline(cin, word);

        // Exit program if user enters "exit"
        if (word == "exit") {

            return 0;
        }

        // Count the occurrence of each character in the input word
        for (char c : word) {

            if (!isspace(c)) { // isspace takes a single argument, which is a character, and returns true if the character is a white-space character and false otherwise.
                counts[c]++;
            }
        }

        // Output unique characters in input word
        cout << "The unique characters in \"" << word << "\" are: ";
        for (char c : word) {

            if (!isspace(c) && counts[c] == 1) {

                cout << c;

                // Reset the count of the character to 0 to prevent duplicate output
                counts[c] = 0;
            }
        }
        cout << endl;
    }
}