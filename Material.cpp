#include "Material.h"
#include <cstring>
#include <iostream>

using namespace std;

Material::Material(){
  
}
Material::Material(const char mtype[10], float price, int mquantity, Resources *mat1){
  strcpy(type, mtype);
  priceperunit = price;
  quantity = mquantity;
  materials[0] = mat1;
  
}
void Material::displaymaterials(){
  cout << "\nMaterial  ID             -";
  for(int count = 0; count < 1; count++){
    materials[count]->printrsources();
  }
  cout << "          Type           -" << type << endl;
  cout << "          Price Per Unit -" << priceperunit << endl;
  cout << "          Quantity       -" << quantity << endl;
}
float Material::getpriceperunit(){
  return priceperunit;
}
int Material::getquantity(){
  return quantity;
}
Material::~Material(){
  cout << "Deleting Material " << endl;
 }
