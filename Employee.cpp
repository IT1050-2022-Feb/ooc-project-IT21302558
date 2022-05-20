#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee() {
	strcpy(employee_ID , "");
	strcpy(name , "");
	strcpy(nic , "");
	strcpy(address , "");
}
Employee::Employee(const char e_id[4], const char e_name[20], const char e_nic[10], const char e_address[25]){
	strcpy(employee_ID , e_id);
	strcpy(name , e_name);
	strcpy(nic , e_nic);
	strcpy(address , e_address);
}
void Employee::display_employee(){
  cout << "\n" << endl;
  cout << "ID      -"  << employee_ID << endl; 
  cout << "Name    -" << name << endl; 
  cout << "NIC     -" << nic << endl; 
  cout << "Address -" << address << endl; 
}
void Employee::addemployee(){
  
}
void Employee::deleteemployee(){
      
}
void Employee::editemployee(){
  
}
Employee::~Employee() {
	cout << "\nDeleting employee - " << employee_ID << endl;
  
}
