#include "Project.h" 
#include "Executive.h"
#include <cstring>
#include <iostream>
using namespace std;

Project::Project(){
  
}
Project::Project(const char id[5], const char pduration[10], const char plocation[10], Executive *ex1, Resources *re1, Resources *re2, Resources *re3){
  strcpy(projectid, id);
  strcpy(duration, pduration);
  strcpy(location, plocation);
  exucutive[0] = ex1;
  resources[0] = re1;
  resources[1] = re2;
  resources[2] = re3;
  
}
void Project::displayProject(){
  cout << "Project ID       - " << projectid << endl;
  cout << "        Duration - " << duration << endl;
  cout << "        Location - " << location << endl;
  cout << "Booked by        - " ;
  exucutive[0]->display_executive();
  cout << "Booked Resources   " << endl;
  for(int count = 0; count < 3 ; count ++){
    resources[count]->printrsources();
  }
}
void Project::editproject(){
  
}
void Project::deleteproject(){
  
}
void Project::getcost(){
  resources[0] ;
  resources[1] ;
  resources[2] ;
}

Project::~Project(){
  cout << "Delete Project" << endl;
}
