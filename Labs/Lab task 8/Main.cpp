#include <iostream>
#include <string>
#include "Box.h"
#include "Box.cpp"

int main()
{
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;

    // box 1 specification
    box1.SetLength(6.0);
    box1.SetBreadth(7.0);
    box1.SetHeight(5.0);

    // box 2 specification
    box2.SetLength(12.0);
    box2.SetBreadth(13.0);
    box3.SetHeight(10.0);

    // volume of box 1
    volume = box1.GetVolume();
    cout << "Volume of Box1 : "
         << volume << endl;
    
    //volume of box 2
    volume = box2.GetVolume();
    cout << "Volume of box 2 : "
         << volume << endl;

    //Add two objects as follows
    box3 = box1 + box2;

    //volume of box 3
    volume = box3.GetVolume();
    cout << "Volume of box3 : "
         << volume << endl;
         
    return 0;
}