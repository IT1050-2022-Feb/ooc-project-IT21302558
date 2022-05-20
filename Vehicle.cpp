#include "Vehicle.h"
#include <iostream>
#include <cstring>

using namespace std;

Vehicle::Vehicle(){
  
}
Vehicle::Vehicle(const char vtype[10],const char vmodel[15], const char vbrand[15], Resources *VR1){
  strcpy(type, vtype);
  strcpy(model, vmodel);
  strcpy(brand, vbrand);
  vehicle[0] = VR1;
  
}
void Vehicle::displayVehicles(){
  cout << "\nVehicle ID   -" ;
  for(int count = 0; count < 1; count++){
    vehicle[count]->printrsources();
  }
  cout << "        Type  -" << type << endl; 
  cout << "        model -" << model << endl;
  cout << "        Brand -" << brand << endl;
}
void Vehicle::addvehicles(){
  
}
void Vehicle::editvhicles(){
  
}
void Vehicle::deletevehicles(){
  
}
Vehicle::~Vehicle(){
  cout << "Deleting Vehicle" << endl;
}

