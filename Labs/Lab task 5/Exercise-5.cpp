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
    string user_choice;
    cout << choice;
    cout << "\nEnter selection : ";
    cin >> user_choice;

    while (!is_input_valid(user_choice)) {
        cout << "Please eneter a valid choice : choices 1, 2, 3 or 4 !";
        cout << "\nEnter selection : ";
        cin >> user_choice;
    }

    if (user_choice == "1") {

        // user should enter the leagth of square
        float length;
        cout << "Please enter the legth of the square : ";
        cin >> length;
        
        // we output the area of the square
        cout << "area of square is "
             << area_of_square(length);
    }

    else if (user_choice == "2") {
        // user should enter the length and width of rectangle
        float length, width; 
        cout << "Please enter the length of the rectangle : ";
        cin >> length >> width;
        
        // we output the area of the triangle
        cout << "area of square is "
             << area_of_rectangle(length, width);    
    }

    else if (user_choice == "3") {
        // user should enter the leagth of triangle
        float base, height; 
        cout << "Please enter the length of the triangle : ";
        cin >> base >> height;
        
        // we output the area of the triangle
        cout << "area of square is "
             << area_of_triange(base, height);
    }

    else {}

    return 0;
}

bool is_input_valid (string input){
    for (int i = 0; i < 1; i++){
        if ( is_digit(input.at(0)) ){
            return true;
        }

    else
        return false;
    }
}

bool is_digit (char character){
    if ((static_cast<int>(character) < 49) || (static_cast<int>(character) > 53)) {
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