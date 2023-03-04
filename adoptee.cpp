#include "adoptee.h"
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

// default constructor
adoptee::adoptee(string input_name, int hours)
{
    name = input_name;
    amount_sunlight = hours;
    //vectors here

    amount_plants = 0;
    desired_plants = 0;
}

// destructor
adoptee::~adoptee()
{

}

// inserts the name of a desired plant into the list
void adoptee::desiredPlant(string st)
{

}

// adopt: adopts the plant by inserting into the list
void adoptee::adopt(Plant p)
{

}

// based on desired_plants, finds a matching plant and returns it
Plant adoptee::findMatch() const
{

}

// returns the name of the adoptee
string adoptee::getName() const
{

}

//returns the amount of sunlight the adoptee can give
int adoptee::amountSun() const
{

}

// return the number of plants this person owns
int adoptee::amount_owned() const
{

}