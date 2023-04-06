/*Task3. Implement the function that finds the most repeated character in a string. 
For example, for line "hello world" is the most repeated symbol is "l".
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "With this program you can find the most repeated character in a string." << endl;

    while (true) {
        
        cout << "\nEnter a word (type 'exit' to quit): ";

        // Read the user's input into a string variable called s
        string s;
        getline(cin, s);

        // Check if the user wants to exit the loop
        if (s == "exit") {

            break;
        }
        // Create an array to keep track of the count of each character in the string
        int charCounts[256] = { 0 };

        // Initialize variables to keep track of the most repeated character and its count
        char mostRepeatedChar = '\0';
        int maxCount = 0;

        // Loop through each character in the string
        for (int i = 0; i < s.length(); i++) {

            char c = s[i];

            // Increment the count for the current character
            charCounts[c]++;

            // If the count for the current character is greater than the current max count,
            // update the max count and most repeated character variables
            if (charCounts[c] > maxCount) {

                maxCount = charCounts[c];
                mostRepeatedChar = c;
            }
        }
        // Print out the most repeated character in the string
        cout << "The most repeated character in \"" << s << "\" is '" << mostRepeatedChar << "'" << endl;
    }
}
