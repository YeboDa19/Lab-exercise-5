#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //create and open a txt file
    ofstream myfile;
    myfile.open("example.txt");

    if(myfile.is_open()) {
         myfile << "Good kid m.a.a.d city"
                << endl << "the art of peer pressure"
                << endl;
    }
    else
        cerr << "Error...!!!" << endl;

    //close the txt file
    myfile.close();
    return 0;
}