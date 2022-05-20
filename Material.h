#pragma once
#include "Resources.h"

class Material : public Resources{
  private:
    Resources *materials[1];
    char type[10];
    float priceperunit;
    int quantity;
  public:
    Material();
    Material(const char mtype[10], float price, int quantity, Resources *mat1);
    void displaymaterials();
    float getpriceperunit();
    int getquantity();
    ~Material();
};
