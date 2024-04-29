#include <iostream>
using namespace std;

int main () {
    int numbersArray[5];

    int* pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numbersArray;
    *numbersArray = 10;

    /*increment the pointer using pointer arithemetic
    to assign the address of the second element to the ppointer*/
    pPointer++;
    *pPointer = 20; //assign value to second elemt

    //assign the adress of the third element to the pointer
    pPointer = &numbersArray[2];
    *pPointer = 30; //assign a value to the third element

    /*assign the address of the fourth element tothe pointer
    using pointer arithemetic*/
    pPointer = numbersArray + 3;
    *pPointer = 40; // assign a value to the fourth element

    //assign the address to the first element to the pointer
    pPointer = numbersArray;

    /* assign a value to the fifith element using iindirection and 
    pointer arithemetic*/
    *(pPointer + 4) = 50;

    //iterate and output all the elements in the array
    for (int n = 0; n< 5; n++)
    {
        cout << numbersArray[n] << ", ";
    }
    
    return 0;
}