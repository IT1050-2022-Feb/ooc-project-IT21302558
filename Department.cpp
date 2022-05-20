#include <iostream>
#include <cstring>
#include "Department.h"

using namespace std;

Department::Department(const char dname[10]){
  strcpy(department_name, dname);
}
void Department::add_Employee(Employee *emp1){
   em[0] = emp1;
}
void Department::add_Department(){
  
}
void Department::delete_Department(){
  
}
void Department::display_Department(){
  cout << "\n" <<department_name << " Department" << endl;
  for(int count = 0; count < 1; count++){
     em[count]->display_employee();
  }
}
Department::~Department(){
  cout << "\nDeleting Department - " << department_name << endl;
}
