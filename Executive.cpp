#include "Executive.h"
#include <iostream>
#include <cstring>

using namespace std;

Executive::Executive() {
	strcpy(position , "");
}
Executive::Executive(const char post[10], Employee *employee1) {
	strcpy(position, post);
  emp[0] = employee1;
}  
void Executive::addexecutive(){
  
}
void Executive::deleteexecutive(){
  
}
void Executive::display_executive(){
  cout <<  "\n" << position;
  for(int count = 0; count < 1; count++){
    emp[count]->display_employee();
  }
}
Executive::~Executive(){
	cout << "\nDeleting Executive - " << employee_ID << endl;
}
