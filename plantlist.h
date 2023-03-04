//header file for plantlist object
//Author: Miles G Date: march 4th
#include <iostream>
#include <vector>
#include "adoptee.h"

using std::vector;

class plantlist{
public:
    plantlist();
    ~plantlist();
    bool addPlant(plant plant_to_add);
    plant& movePlant(int id);
    bool removePlant(plant plant_to_remove);
    void printAvailable();
    void printAdtopted();
    int sizeAvailable();
    int sizePast();

private:
    int size;
    vector<plant> availablePlants;
    vector<plant> pastPlants;   
};
