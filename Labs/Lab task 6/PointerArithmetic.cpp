#include <iostream>
using namespace std;

int main () {

    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign adress of the first element to pointer
    pPointer = numbersArray;

    //output the  adress of the first lement
    cout << "Address at pPointer: " <<pPointer << endl;
    cout << "Address of numbersArray[0]: " << numbersArray << endl;

    //output the first value of the second element using pointer and indidrection
    cout << "Value at pointer: " << *pPointer << endl;

    //This outputs the value of the second element
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;
    
    //assign adress of the first element to pointer
    pPointer = numbersArray;

    // This outputs the value of the first element
    pPointer = numbersArray;
    cout << "value at pPointer++: " << *(pPointer++) << endl;
    
    return 0;
}