// interface for the adoptee class
#include <string>
#include <iostream>
#include <vector>
#pragma once

using std::string;
using std::cout;
using std::endl;
using std::vector;

class adoptee() {
public:
    // METHODS
    // default constructor
    adoptee(string input_name, int hours);
    // destructor
    ~adoptee();
    // inserts the name of a desired plant into the list
    void desiredPlant(string st);
    // adopt: adopts the plant by inserting into the list
    void adopt(Plant p);
    // based on desired_plants, finds a matching plant and returns it
    Plant findMatch() const;
    // returns the name of the adoptee
    string getName() const;
    //returns the amount of sunlight the adoptee can give
    int amountSun() const;
    // return the number of plants this person owns
    int amount_owned() const;

private:
    string name;
    vector<Plant> plants_owned;
    vector<string> desired_plants;
    int amount_sunlight;
    int amount_plants; //number of plants this person owns
    int desired_plants; //number of plants this person wants
};