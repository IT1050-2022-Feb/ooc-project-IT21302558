#pragma once
#include "Resources.h"

class Vehicle : public Resources{
  private:
    Resources *vehicle[1];
    char type[10];
    char model[15];
    char brand[15];
  public:
    Vehicle();
    Vehicle(const char vtype[10],const char vmodel[15], const char vbrand[15], Resources *VR1);
    void addvehicles();
    void editvhicles();
    void deletevehicles();
    void displayVehicles();  
    ~Vehicle();

};
