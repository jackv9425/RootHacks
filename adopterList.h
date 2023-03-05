#include "adopter.h"
#include <iostream>
#include <string>
#include <vector>
#pragma once

using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;


class AdopterList{
public:

    //continously 
    AdopterList(); 

    void existingAdopter();
    
    //
    void createAdopter();

    //print names of the adopters
    void printAdopters() const;



private:
    vector<Adopter> list;
};
