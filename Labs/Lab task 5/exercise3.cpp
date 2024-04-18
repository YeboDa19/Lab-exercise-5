#include <iostream>
#include <string>
using namespace std;

int main () {
    string string_array [8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    char B = 'B';

    for (int i = 0; i < 8; i++){
        if(string_array[i].at(0) == B){
            cout << string_array[i]
                 << endl;
        }
    }

    return 0;
}