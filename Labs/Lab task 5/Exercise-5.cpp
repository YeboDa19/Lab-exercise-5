#include <iostream>
#include <string>
using namespace std;

//functions for validating user input
bool is_input_valid (string input);
short user_string_to_int (string input);
bool is_digit (char character);

// functins for calculating area
float area_of_rectangle (float legth, float width);
float area_of_square (float legth);
float area_of_triange (float base, float height);

int main () {
    string choice = "Please select the area of the shape to calculate\n"
                    "1. Square\n"
                    "2. Rectangle\n" 
                    "3. Triangle\n"
                    "4. Quit program";
    string user_choice = "";

    do {

    // prompt the user to select the shape for which to calculate the area 
    cout << choice;
    cout << "\nEnter selection : ";
    cin >> user_choice;

    // Deny input if invalid and ask the user to enter a proper input
    while (!is_input_valid(user_choice)) {
        cout << "Your input was : " << user_choice
             << " which is an invalid input"
             << "\nPlease enter a valid input\n"
             << choice
             << "\nEnter selection : ";
        cin >> user_choice;
        cout << endl;
    }

    if (user_choice == "1") {

        // user should enter the leagth of square
        float length;
        cout << "Please enter the legth of the square : "
             << "Length : ";
        cin >> length;
        
        // output the area of the square
        cout << "area of square is "
             << area_of_square(length)
             << "\n\n";
    }

    else if (user_choice == "2") {
        // user should enter the length and width of rectangle
        float length, width; 
        cout << "Please enter the length and width of the rectangle : "
             << "Length : ";
        cin >> length; 
        cout << "\tWidth :";
        cin >> width;
        
        // output the area of the triangle
        cout << "area of square is "
             << area_of_rectangle(length, width)
             << "\n\n";  
    }

    else if (user_choice == "3") {
        // user should enter the leagth of triangle
        float Base, height; 
        cout << "Please enter the Base and height of the rectangle : "
             << "Base : ";
        cin >> Base; 
        cout << "\tWidth :";
        cin >> height;
        
        // output the area of the triangle
        cout << "area of triangle is "
             << area_of_triange(Base, height)
             << "\n\n";
    }

    else {
        // do nothing
    }
    
    } while (user_choice != "4");
    
    return 0;
}

bool is_input_valid (string input){
    bool condition_value;
    if ( is_digit(input.at(0)) && (input.length() == 1) ){
            condition_value = true;
    }

    else {
        condition_value = false;
    }
    return condition_value;
}

bool is_digit (char character){
    if ((static_cast<int>(character) < 49) || (static_cast<int>(character) > 52)) {
        return false;
    }

    else 
        return true;
}

float area_of_rectangle (float length, float width) {
    return length * width;
}

float area_of_square (float length) {
    return length * length;
}

float area_of_triange (float base, float height) {
    return 0.5 * base * height;
}