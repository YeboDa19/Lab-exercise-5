#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int vowel_count (string input); // function for counting number of vowels
int word_count (string input); // function for counting number of words
string reverse_string (string input); //function for reversing the characters of a string
string capitalise_second_letter (string input); // function for capitalising the second letter of each word

int main () {

    // open file and put the data into fileData variable
    string fileData;
    ifstream textReader;
    textReader.open("textfile.txt", ios::in);
    
    if (textReader.is_open()) {
        getline(textReader, fileData);
    }

    // print the number of vowels in the text
    cout << "The number of vowels in the text is : "
         << vowel_count(fileData)
         << endl;

    // print the nnumber of words in the text
    cout << "the number of words in the text is : "
         << word_count(fileData)
         << endl;

    // print the text in reversed order
    cout << reverse_string(fileData)
         << endl;

    // print the text with the second letter capitalised
    cout << capitalise_second_letter(fileData)
         << endl;

    return 0;
}

int vowel_count (string input) {
    int vowel_check;
    for (int i = 0; i < input.length(); i++) {
        
        switch (static_cast<int>(input.at(i))) {
            case 65 : vowel_check++; break;
            case 97 : vowel_check++; break;
            case 69 : vowel_check++; break;
            case 73 : vowel_check++; break;
            case 79 : vowel_check++; break;
            case 85 : vowel_check++; break;
            case 101 : vowel_check++; break;
            case 105 : vowel_check++; break;
            case 111 : vowel_check++; break;
            case 117 : vowel_check++; break;
        }
    }
    return vowel_check;
}

int word_count (string input) {
    int word_check = 1;
    for (int i = 0; i < input.length(); i++) {
        if (static_cast<int>(input.at(i)) == 32) {
            word_check++;
        }
    }
    return word_check;
}

string reverse_string (string input) {
    string reversed_string = "";
    for (int i = 1; i <= input.length(); i++) {
       reversed_string = reversed_string + input.at(input.length() - i);
    }
    return reversed_string;
}

string capitalise_second_letter (string input) {
    string capitalised = "" ;
    string string_array [input.length()];
    for (int i = 0; i < input.length(); i++) {
            string_array [i] = input.at(i);
    }

    for (int i = 0; i < input.length(); i++) {
        if(static_cast<int>(input.at(i)) == 32) {
            string_array[i + 2] = toupper(input.at(i + 2));
        }

        else if (i == 1){
            string_array[1] = toupper(input.at(i));
        }

        else {
        }
    }
    
    for (int i = 0; i < input.length(); i++){
        capitalised = capitalised + string_array [i];
    }

    return capitalised;
}