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
 Polygon * pPoly1 = &rect;
 Polygon * pPoly2 = &trgl;
 pPoly1->SetValues(4,5);
 pPoly2->SetValues(4,5);
 pPoly1->PrintArea();
 pPoly2->PrintArea();

return 0;
}