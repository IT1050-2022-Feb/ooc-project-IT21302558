#include "Resources.h"
#include <cstring>
#include <iostream>

using namespace std;

Resources::Resources(){
  strcpy(resource_id, "");
}
Resources::Resources(const char rid[5]){
  strcpy(resource_id, rid);

}
void addresources(){
  
}
void deletereouces(){
  
}
void editresources(){
  
}
void Resources::printrsources(){
  cout << resource_id << endl;
}
void Resources::bookresources(){
  
}
Resources::~Resources(){
  cout << "Deleting Resource " << endl;
}
