/*Task 5. Write a function that removes duplicates in arrays, truncates the array and returns a new one array without duplicates.*/

#include <iostream>
#include <string>
#include <algorithm> // includes the algorithm library

using namespace std;

string removeDuplicates(string word) { // define a function named "removeDuplicates" that takes a string as an argument and returns a string

    string result = "";// create an empty string variable named "result"

    for (int i = 0; i < word.length(); i++) { // loop through each character in the input string "word"

        if (count(word.begin(), word.end(), word[i]) == 1) { // if the current character occurs only once in the string "word"

            result += word[i]; // add the current character to the "result" string
        }
    }
    return result; // return the "result" string with duplicates removed
}

int main() {

    cout << "With this program you can remove duplicates in array.\n\nExample:\nEnter the word: hello\nResult: heo\n";

    while (true) { // enter an infinite loop

        string word;

        // ask the user to enter a word
        cout << "\nEnter the word (type 'exit' to quit): ";

        cin >> word;

        if (word == "exit") { // if the user enters the word "exit"

            return 0;// exit the program
        }

        string result = removeDuplicates(word); // call the "removeDuplicates" function with the input word and store the returned result in a string variable named "result"

        cout << "Result: " << result << endl;// display the result to the user 
    }
}
