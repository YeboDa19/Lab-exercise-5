#pragma once
#include "Person.h"
#include <iostream>
#include <string>

Person::Person()
{
    // constructor
}

Person::Person(string newName, float newWeight)
{
    mWeight = newWeight;
}

float Person::operator + (const Person& otherPerson)
{
    Person person;
    person.mWeight = this->mWeight + otherPerson.mWeight;
    person.mAge = this->mAge + otherPerson.mAge;
    return person.mWeight;
}

Person::~Person()
{
    // destructors
}