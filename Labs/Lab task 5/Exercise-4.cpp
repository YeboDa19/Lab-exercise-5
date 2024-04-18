#include <iostream>
#include <string>
using namespace std;

// functions to validate user input
short is_input_valid (string input);
bool is_number (char character);
bool is_valid_number (string input);

int main () {
    // print a message to prompt user to imput a number
    string user_input;
    string message = "Enter an integer value between 5 and 10";
    cout << message << endl;
    cin >> user_input;

    // validate the number enetered by the user
    while (is_input_valid(user_input) != 1) {
        
        if (is_input_valid(user_input) == 0) {
            cout << "Sorry, you entered an invalide number, "
                 << "please try again" << endl;
        }

        else {
            cout << "You entered " << user_input
                 << ". please enter a number between 5 and 10"
                 << endl;
        }

        cin >> user_input;
    }

    // notify the user if a valid input has been entered
    cout << "Your input value(" 
         << user_input
         << ") has been accepted";
    return 0;
}

bool is_number (string input){
    for(int i = 0; i < input.length(); i++ ) {
        if ((static_cast<int>(input.at(i)) < 48) || (static_cast<int>(input.at(i)) > 57)) {
            return false;
        }
    }
        return true;
}

bool is_valid_number (string input) {
    
    short temp;
    if (input.length() > 2) {
        return false;
    }
    else if ((input.length() == 2) && (static_cast<int>(input.at(0)) != 49 ) && (static_cast<int>(input.at(1)) != 48)) {
        return false;
    }
    else if ((input.length() == 1) && (static_cast<int>(input.at(0)) < 53)) {
        return false;
    }
    else {
        return true;
    }
}

short is_input_valid (string input) {
    if(is_number (input)) {
        if(is_valid_number (input)){
            return 1;
        }
        else 
            return -1;
    }

    else
        return 0;
}