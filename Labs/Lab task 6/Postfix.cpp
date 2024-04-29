#include <iostream>
using namespace std;

int main() {
    int x = 3;

    //the value of x is incremented after the initial value of x is used in the expression
    // hence the value assigned to y is the value of x before it was increased.
    int y = x++;
    cout << "x: " << x << endl; // x will be 4
    cout << "y: " << y << endl; // y will be 4
    return 0;
}