#include <iostream>
#include <string>
using namespace std;

char encodeCharacter(char c) {
    // Check if the character is a lowercase vowel
    if (c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        // For vowels, change to the next letter
        return c + 1;
    }
    if(c == 'a'){
        return 'z';   
    }
    if(c=='z'){
        return 'a';
    }
    
    // Check if the character is an uppercase vowel
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        // For uppercase vowels, change to the next letter
        return c + 1;
    }
    // Check if the character is a lowercase consonant (excluding 'a')
    else if (c >= 'b' && c <= 'z') {
        // For lowercase consonants, change to the previous letter
        return c - 1;
    }
    // Check if the character is an uppercase consonant (excluding 'A')
    else if (c >= 'B' && c <= 'Z') {
        // For uppercase consonants, change to the previous letter
        return c - 1;
    }

    // Return unchanged for characters other than letters
    return c;
}

string encodeString(const string& input) {
    string encodedString = input;

    for (char& c : encodedString) {
        // Apply the encoding to each character
        c = encodeCharacter(c);
    }

    return encodedString;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string encoded = encodeString(input);
    cout << "Encoded string: " << encoded << endl;

    return 0;
}
