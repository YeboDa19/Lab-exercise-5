#include <iostream>
#include <string>
#include "Circle.h"
#include "Circle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
#include "Square.h"
#include "Square.cpp"
#include "Area.h"
#include "Area.cpp"

using namespace std;
using namespace shapes;

int main() {
    short userChoice;
    do {

        // prompt the user to choose a shape
        cout << "Choose the Shape you want to calculate area for"
             << "\n1. Square"
             << "\n2. Triangle"
             << "\n3. Circle"
             << "\n4. Quit" << endl;
        cin >> userChoice;
        
        /*prompt the user to enter the dimension of chosen shape
        The calculate the area of the shape based on the dimensions*/
        
        // Area output if the shape is a circle
        if (userChoice == 1)
        {
            float sideLength;
            cout << "Enter the side length : ";
            cin >> sideLength;
            Square square = Square(sideLength);
            cout << "The Area of the Square is "
                 << Area::calculateSquareArea(square)
                 << endl;
        }
        
        // Area output if the area is a triangle
        else if (userChoice == 2)
        {
            float base, height;
            cout << "Enter the Triangle's base and height : ";
            cin >> base >> height;
            Triangle triangle = Triangle(base, height);
            cout << "The Area of the Triangle is "
                 << Area::calculateTriangleArea(triangle)
                 << endl;
        }

        //Area output if the shape is a circle
        else if (userChoice == 3)
        {
            float radius;
            cout << "Enter the radius : ";
            cin >> radius;
            Circle circle = Circle(radius);
            cout << "The Area of the circle is "
                 << Area::calculateCircleArea(circle)
                 << endl;
        }


        // letting the user quit
        else if (userChoice == 4)
        {
            // let the user quit
        }

        else
        {
            cout << "Please enter a valid input"
                 << endl;
        }
    
    } while(userChoice != 4);
    
    return 0;
}
