#include "adoptee.h"
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// constructor
Adoptee::Adoptee(string input_name, int hours)
{
    name = input_name;
    amount_sunlight = hours;
    amount_plants = 0;
    amount_desired = 0;
}

// inserts the name of a desired plant into the list
void Adoptee::desiredPlant(string st)
{
    desired_plants.push_back(st);
    amount_desired++;

}

// adopt: adopts the plant by inserting into the list
void Adoptee::adopt(int id)
{
    Plant p = movePlant(id);
    plants_owned.push_back(p);
    amount_plants++;
}

// based on desired_plants, finds a matching plant and returns it
void Adoptee::findMatch() const
{
    string str;
    cout << "Enter the plant you are looking for:\n";
    cin >> str;
    
    int id = pl.check(str);

    if(id == -1) {
        //do something
    }
    else{
        adopt(id);
    }
    //
}

// returns the name of the adoptee
string Adoptee::getName() const
{
    return name;
}

//returns the amount of sunlight the adoptee can give
int Adoptee::amountSun() const
{
    return amount_sunlight;
}

// return the number of plants this person owns
int Adoptee::amount_owned() const
{
    return amount_plants;
}