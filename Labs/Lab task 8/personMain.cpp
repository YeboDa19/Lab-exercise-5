#include "Person.h"
#include "Person.cpp"
#include <iostream>

using namespace std;
 int main()
 {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);
    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
 }