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
Adopter::Adopter(string input_name, int hours)
{
    name = input_name;
    amount_sunlight = hours;
    amount_plants = 0;
    amount_desired = 0;
}

// inserts the name of a desired plant into the list
void Adopter::desiredPlant()
{
    //user input for the vector
    string str;
    cout << "Enter the plant you are looking for:\n";
    cin >> str;
    desired_plants.push_back(str);
    amount_desired++;

    //ask user if they want to continue adding plants to the vector
    int x;
    cout << "Enter 1 to continue adding plants you are looking for or 0 to stop:\n";
    cin >> x;
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
}

// based on desired_plants, finds a matching plant and adopts it
void Adopter::findMatch() const
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
        cout << "We didn't find the plant you are looking for!" << endl;
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
int Adopter::amountSun() const
{
    return amount_sunlight;
}

// return the number of plants this person owns
int Adopter::amount_owned() const
{
    return amount_plants;
}

void Adopter::info() const
{
    cout << "Name: " << name << endl;
    cout << "Amout of sunlight: " << amount_sunlight << endl;
    cout << "Plants Owned: ";
    for(int i = 0; i < plants_owned.size(); i++) {
        cout << plants_owned[i] << " " << endl;
    }
}