#include <iostream>
#include <string>
using namespace std;

int main () {
    int rowSize, columnSize;   // i for the row dimension and j for column dimension
    cout << "Enter the row dimension of the 2D array : ";
    cin >> rowSize;
    cout << "Enter the column dimension of the 2D array : ";
    cin >> columnSize;

    double *pRowArray =  new double [rowSize] ;
    double *pColumnArray = new double [columnSize];
    
    for (int j = 1; j <= columnSize; j++)
    {
        pColumnArray [j] = j;
        for (int i = 1; i <= rowSize; i++)
        {
            pRowArray[i] = i + j;
        }
    }

    for (int j = 1; j <= columnSize; j++)
    {
        for (int i = 1; i <= rowSize; i++)
        {
            cout << "element at index [" << j << "][" << i << "] : "
                 << pRowArray[i]
                 << "\n";  
        }
        cout << "\n\n";
    }
    return 0;
}