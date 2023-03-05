#include <iostream>
#include <string>
#include <vector>
#include "adopterList.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

AdopterList::AdopterList()
{
    
}

//checks if they are an existing customer, finds their user and they can adopt
//creates a new adopter if they arent found 
void AdopterList::existingAdopter()
{
    int exist;
    cout << "Are you an existing customer? Enter 1 if yes or 0 if no: ";
    cin >> exist;
    cout << endl; 

    if(exist == 1) {
        int phone;
        cout << "Enter your phone number: ";
        cin >> phone;
        cout << endl;
        for(int i = 0; i < list.size(); i++) {
            Adopter person = list[i];
            int temp_phone = person.getPhone();
            if(phone == temp_phone) {
                person.desiredPlant();
                person.findMatch();
            }
        }
    }

    else {
        createAdopter();
    }
}

//creates a customer that doesn't exists
void AdopterList::createAdopter()
{
    string str;
    cout << "Enter your name: ";
    cin >> str;
    cout << endl;

    int phone;
    cout << "Enter your phone number: ";
    cin >> phone;
    cout << endl;

    Adopter person = Adopter(str,phone);

    list.push_back(person);

    person.desiredPlant();

    person.findMatch();
}

//print names of the adopters, line by line
void AdopterList::printAdopters() const
{
    for(int i = 0; i < list.size(); i++) {
        //
    }   
}

