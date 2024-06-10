#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //create and open a txt file
    ifstream myfile;
    myfile.open("example.txt");
    string line;
    if(myfile.is_open()) {
         while(getline(myfile, line)) {
            cout << line << endl;
         }
    }
    else
        cerr << "Error...!!!" << endl;

    //close the txt file
    myfile.close();
    return 0;
}