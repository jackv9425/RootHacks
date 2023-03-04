//header file for plantlist object
//Author: Miles G Date: march 4th
#include <iostream>
#include <vector>
#include "adoptee.h"
#include "Plant.h"

using std::vector;

class plantlist{
public:
    plantlist();
    ~plantlist();
    bool addPlant(Plant plant_to_add);
    Plant& movePlant(int id);
    bool removePlant(Plant plant_to_remove);
    void printAvailable();
    void printAdtopted();
    int sizeAvailable();
    int sizePast();

private:
    int size;
    vector<Plant> availablePlants;
    vector<Plant> pastPlants;   
};
