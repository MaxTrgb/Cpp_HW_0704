/*Task1. Implement a function that replaces all occurrences of a substring in a string with another substring. 
For example, for the string "hello world", replacing the substring "llo" with "y" should return the string "hey world".*/

#include <iostream>
#include <string>
#include <cstring> // include cstring header for strlen function

using namespace std;

int main() {

    cout << "With this program you can replace letters in any word or phrase.\n";
    cout << "\nExample:\nEnter a string: hello world\nEnter the substring to be replaced : ello\nEnter the new substring : ey\nOriginal string : hello world\nModified string : hey world\n";
    cout << endl;

    string str;  // original string
    string oldSub;  // substring to be replaced
    string newSub;  // new substring

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the substring to be replaced: ";
    getline(cin, oldSub);

    cout << "Enter the new substring: ";
    getline(cin, newSub);

    const int strLen = str.length();  // length of original string
    const int oldSubLen = oldSub.length();  // length of substring to be replaced
    const int newSubLen = newSub.length();  // length of new substring

    cout << "Original string: " << str << endl;  // print original string

    const int maxLen = strLen - oldSubLen + newSubLen;  // calculate maximum length of modified string
    char* result = new char[maxLen + 1];  // allocate memory for result string

    int resultIndex = 0;  // index for result string

    for (int i = 0; i < strLen; i++) {  // iterate over characters in original string

        bool isMatch = true;
        for (int j = 0; j < oldSubLen; j++) {  // check if current substring matches substring to be replaced

            if (str[i + j] != oldSub[j]) {

                isMatch = false;
                break;
            }
        }
        if (isMatch) {  // if current substring matches, append new substring to result string

            for (int j = 0; j < newSubLen; j++) {

                result[resultIndex++] = newSub[j];  // add new substring characters to result string
            }
            i += oldSubLen - 1;  // skip over old substring in original string
        }
        else {  // if current substring does not match, append current character to result string

            result[resultIndex++] = str[i];  // add current character to result string
        }
    }

    result[resultIndex] = '\0';  // add null terminator to result string

    cout << "Modified string: " << result << endl;  // print modified string

    delete[] result;  // free memory allocated for result string
    
}