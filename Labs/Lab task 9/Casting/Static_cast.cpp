#include <iostream>
#include "Derived.h"
#include "Derived.cpp"
#include "Base.h"
#include "Base.cpp"
using namespace std;
int main ()
{
 Base* pBase = new Base();

 Derived* pDerived = static_cast<Derived*>(pBase);
 delete pBase;
 pBase = nullptr;
 return 0;
}