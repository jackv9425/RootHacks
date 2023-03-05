// interface for the adoptee class
#include <string>
#include <iostream>
#include <vector>
#pragma once

using std::string;
using std::vector;

class Adopter {
public:
    // METHODS
    // default constructor
    Adopter(string input_name, int phoneNumber);

    // inserts the name of a desired plant into the list via user input
    void desiredPlant();

    // adopts the plant by inserting into the list
    void adopt(int id);

    // based on desired_plants, finds a matching plant and adopts it
    void findMatch();

    // returns the name of the adoptee
    string getName() const;

    //returns the amount of sunlight the adoptee can give
    int getPhone() const;

    // return the number of plants this person owns
    int amount_owned() const;

    // prints all the information of an adoptee
    void info() const;

private:
    string name;
    int phoneNumber;
    vector<Plant> plants_owned;
    vector<string> desired_plants;
    int amount_plants; //number of plants this person owns
    int amount_desired; //number of plants this person wants
};