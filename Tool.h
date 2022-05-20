#pragma once
#include "Resources.h"

class Tool : public Resources {
  private:
    Resources *resource[1];
    char tool_Name[20];
    int quantity;

  public:
    Tool();
    Tool(const char name[20], int tquantity, Resources *res1);
    void addtools();
    void edittools();
    void deletetools();
    void displayTools();
    ~Tool();
};
