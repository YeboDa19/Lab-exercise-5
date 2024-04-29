#include <iostream>
#include <string>
using namespace std;

int main () {

    int *pInt = new int(0);  // allocate memory for the integer
    string *pString = new string(""); // allocate memory for the string

    cout << "Enter an integer value : "; // prompt user to enter an interger
    cin >> *pInt;
    cout << "Enter a string : "; // prompt the user to enter a string
    cin >> *pString;

    cout << "Your integer number is : " << *pInt // display the intger the user entered
         << endl
         << "Your string is : " << *pString; // dispaly the string the user entered
    return 0;
}