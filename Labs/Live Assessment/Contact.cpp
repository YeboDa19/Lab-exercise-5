#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;

    // accessor methods
    string Contact::getContactFName()
    {
        return contactFName;
    }

    void Contact::setContactFName(string contactFName)
    {
        this->contactFName = contactFName;
    }

    string Contact::getContactLName()
    {
        return contactLName;
    }

    void Contact::setContactLName(string contactLName)
    {
        this->contactLName = contactLName;
    }

    string Contact::getContactPNum()
    {
        return contactPNum;
    }

    void Contact::setContactPNum(string contactPNum)
    {
        this->contactPNum = contactPNum;
    }

    // constructors
    Contact::Contact()
    {
        contactPNum = "";
        contactLName = "";
        contactFName = "";
    }

    Contact::Contact(string contactFName, string contactLName, string contactPNum)
    {
        this->contactFName = contactFName;
        this->contactLName = contactLName;
        this->contactPNum = contactPNum;
    }