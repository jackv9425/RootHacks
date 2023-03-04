#pragma once

#include <string>
#include <iostream>
#include "Adoptee.h";
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Plant {
    public:
    Plant(int ID);
    Plant(int ID, string name);
    Plant(int ID, string NAME, string LATINNAME, string DESCRITPION, double WATERFREQUENCY, int WATERAMOUNT, int SUNPERDAY);
    void setAdoptee(Adoptee *adoptee);
    void setName();
    void setLatinName();
    void setDescription();
    void setDetails();

    private:
    int ID;
    Adoptee *a;
    string name;
    string latinName;
    string description;
    double waterFrequency; // per day
    int waterAmount; // mL
    int sunPerDay; // hours
};