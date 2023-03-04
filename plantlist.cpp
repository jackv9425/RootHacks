//Implementation of the plant list
//Author: Miles G Date: March 4th
#include "plantlist.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

plantlist::plantlist(){
    size = 0;
}


plantlist::~plantlist(){

}

bool plantlist::addPlant(plant plant_to_add){
    auto iter_available = std::find(availablePlants.begin(),availablePlants.end(), plant_to_add);
    auto iter_past = std::find(pastPlants.begin(),pastPlants.end(), plant_to_add);
    if(iter_available != availablePlants.end() && iter_past != pastPlants.end()){
        availablePlants.emplace_back(plant_to_add);
        return true;
    }
    else{
        return false;
    }

}

bool plantlist::removePlant(plant plant_to_remove){

}

plant& plantlist::movePlant(int find_ID){
    auto iter = std::find_if(availablePlants.begin(),availablePlants.end(), [&](const plant& obj){
        return obj.ID.compare(find_ID) == 0;    
    });
    if(iter != availablePlants.end()){
        pastPlants.emplace_back(availablePlants.at(iter));
        plant* ret_plant = pastPlants.at(pastPlants.back());
        availablePlants.erase(iter);
        return ret_plant;
    }
    else{
        return nullptr;
    }
    
}

void plantlist::printAvailable(){
    
}

void plantlist::printAdtopted(){
    
}


int plantlist::sizeAvailable(){
    
}

int plantlist::sizePast(){
    
}


