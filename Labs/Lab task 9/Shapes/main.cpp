#include <iostream>
#include "Polygon.h"
#include "Polygon.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
using namespace std;

int main() {
 Rectangle rect;
 Triangle trgl;
 rect.SetValues(4,5);
 trgl.SetValues (4,5);
 cout << rect.Area() << '\n';
 cout << trgl.Area() << '\n';
 return 0;
}