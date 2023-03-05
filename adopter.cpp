#include "adopter.h"
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// constructor
Adopter::Adopter(string input_name, int phone)
{
    name = input_name;
    phoneNumber = phone;
    amount_plants = 0;
    amount_desired = 0;

}

// inserts the name of a desired plant into the list
void Adopter::desiredPlant()
{
    //user input for the vector
    string str;
    cout << "Enter the plant you are looking for: ";
    cin >> str;
    cout << endl;
    desired_plants.push_back(str);
    amount_desired++;

    //ask user if they want to continue adding plants to the vector
    int x;
    cout << "Enter 1 to continue adding plants you are looking for or 0 to stop: ";
    cin >> x;
    cout << endl;
    if(x == 1) {
        desiredPlant();
    }
    else {
        return;
    }
}

// adopt: adopts the plant by inserting into the list
void Adopter::adopt(int id)
{
    Plant p = pl.movePlant(id);
    plants_owned.push_back(p);
    amount_plants++;
    p.setAdoptee(this); //set plants adopter pointer

}

// based on desired_plants, finds a matching plant and adopts it
void Adopter::findMatch() 
{
    int id;
    for(int i = 0; i < desired_plants.size(); i++){
        id = pl.check(desired_plants[i]);
        if(id != -1) {
            break;
        }
    }

    //plant wasn't found
    if(id == -1) {
        desired_plants.clear(); //clear contents of the vector 
        cout << "We didn't find the plant you are looking for!" << endl;
        cout << "These are the plants we have available: " << endl;
        pl.printAvailable();
        desiredPlant();
        return;
    }

    //plant was found, call adopt
    else {
        adopt(id);
    }

}

// returns the name of the adoptee
string Adopter::getName() const
{
    return name;
}

//returns the amount of sunlight the adoptee can give
int Adopter::getPhone() const
{
    return phoneNumber;
}

// return the number of plants this person owns
int Adopter::amount_owned() const
{
    return amount_plants;
}

void Adopter::info() const
{
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Plants Owned: ";
    for(int i = 0; i < plants_owned.size(); i++) {
        cout << plants_owned[i] << " " << endl;
    }
}