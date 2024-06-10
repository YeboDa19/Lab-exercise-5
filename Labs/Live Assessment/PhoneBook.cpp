#include "PhoneBook.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Contact.h"
#include "Contact.cpp"
using namespace std;

    void PhoneBook::addContact()
    {
        string contactFName;
        string contactLName;
        string contactPNum;

        cout << "Enter contact's First Name : ";
        cin >> contactFName;

        cout << "Enter contact's Last Name: ";
        cin >> contactLName;

        cout << "Enter contact's Phone Number : ";
        cin >> contactPNum;
        
        Contact newContact = Contact(contactFName, contactLName, contactPNum);
                   pContacts[numberOfContacts] = newContact;
                   cout << "Contact has been successfully saved!" << endl;
                   numberOfContacts++;
    
    }

    void PhoneBook::saveContacts()
    {

    }

    void PhoneBook::showAllContacts()
    {
        for(int i = 0; i < numberOfContacts; i++)
        {
           cout <<"Contact number " << i << endl
                << pContacts[i].getContactFName() << endl
                << pContacts[i].getContactLName() << endl
                << pContacts[i].getContactPNum() <<endl;
        }
    }

    PhoneBook::PhoneBook()
    {
        pContacts = new Contact[sizeOfContacts];
        numberOfContacts = 0;
    }

    void PhoneBook::Run()
    {
        int userChoice;
        do
        {
            cout << "Options\n"
                 << "1- Add a contact\n"
                 << "2- Show all contacts\n"
                 << "3- Save all contacts to file\n"
                 << "4- quit\n\n"
                 << "What would you like to do ?";
            cin >> userChoice;

        switch (userChoice)
        {
            case 1 : addContact(); break;
            case 2 : showAllContacts(); break;
            case 3 : saveContacts(); break;
            case 4 : break;
        }
        }while(userChoice != 4);
    }