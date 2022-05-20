#include "Tool.h"
#include "Resources.h"
#include <cstring>
#include <iostream>

using namespace std;

Tool::Tool(){
  strcpy(tool_Name, "");
  quantity = 0;
}
Tool::Tool(const char name[20], int tquantity, Resources *res1){
  strcpy(tool_Name, name);
  quantity = tquantity;
  resource[0] = res1;
}
void Tool::addtools(){
  
}
void Tool::edittools(){
  
}
void Tool::deletetools(){
  
}
 void Tool::displayTools(){
   cout << "\n" << endl;
   cout << "Tool ID       - " ;
  for(int count = 0; count < 1; count++){
    resource[count]->printrsources();
  }
   cout << "     Name     - " << tool_Name << endl;
   cout << "     Quantity - " << quantity << endl;
 }
Tool::~Tool(){
   cout << "Deleting Tool" << endl;
}
