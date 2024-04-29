#include <iostream>
using namespace std;

int main () {
    // declare pointer and initialise it
    // so that it doesnt store random adress
    int* pPointer = nullptr;

    int  intergerVar = 5;

    // assign pointer to adress of object
    pPointer = &intergerVar;

    //output the value of intergerVar
    cout << "intergerVar: " << intergerVar <<endl;

    //output the address of intergerVar
    cout << "Address of intergerVar: " << &intergerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    //output the adress of pPoinyter
    cout << "address of pPointer: " << &pPointer << endl;
    
    return 0;
}