#pragma once

#include "Plant.h"

Plant::Plant(int id) {
    ID = id;
    a = nullptr;
    setName();
    setLatinName();
    setDescription();
    setDetails();
}

Plant::Plant(int id, string nameS) {
    ID = id;
    name = nameS;
    a = nullptr;
    setLatinName();
    setDescription();
    setDetails();
}


// Called by interface
// MAKE SURE TO UPDATE PLANT LIST
void Plant::setAdoptee(Adoptee *adoptee) {
    if (a) {
        a->removePlant();
    }
    a = adoptee;
    a->setPlant();
}

void Plant::setName() {
    if (name != "") {
        cout << "This plant's previous name was:" << endl;
        cout << name << endl;
    }
    cout << "Please write a new name of this particular plant." << endl;
    cin >> name;
}

void Plant::setLatinName() {
    if (latinName != "") {
        cout << "This plant's previous type species was: " << endl;
        cout << latinName << endl;
    }
    cout << "Please write a new type species of this particular plant." << endl;
    cin >> latinName;
}

void Plant::setDescription() {
    if (description!= "") {
        cout << "This plant's previous description was:" << endl;
        cout << description << endl;
    }
    cout << "Please write a new description of this particular plant." << endl;
    cin >> description;
}

void Plant::setDetails() {
    cout << "How often does this plant need to be watered per day?" << endl;
    cin >> waterFrequency;
    cout << "How much water should be used per watering (in mL)?" << endl;
    cin >> waterAmount;
    cout << "How many hours of sun does this plant require per day?" << endl;
    cin >> sunPerDay; 
}

int Plant::getID(){
    return ID;
}