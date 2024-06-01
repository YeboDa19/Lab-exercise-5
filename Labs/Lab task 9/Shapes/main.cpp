#include <iostream>
#include "Polygon.h"
#include "Polygon.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Triangle.h"
#include "Triangle.cpp"

using namespace std;
int main()
{
 Polygon* pPoly1 = new Rectangle(4,5);
 Polygon* pPoly2 = new Triangle(4,5);
 pPoly1->PrintArea();
 pPoly2->PrintArea();
 delete pPoly1;
 delete pPoly2;

return 0;
}