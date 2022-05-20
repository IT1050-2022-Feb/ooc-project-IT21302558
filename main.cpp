#include <iostream>
#include "Employee.h"
#include "Executive.h"
#include "Department.h"
#include "Resources.h"
#include "Tool.h"
#include "Vehicle.h"
#include "Material.h"
#include "Project.h" 
#include "Report.h"
#include "Booking.h"

using namespace std;

int main() {
  Employee *em1;
  Employee  *em2;
  em1 = new Employee("E01", "Saman Kumara", "198526354V", "No 6, Colombo 7" );
  em2 = new Employee("E02", "Malindu Kumara", "199856234V", "No 5, Kaduwela, Malabe");

  em2->display_employee();

  Executive *manager;
  manager = new Executive("Manager", em1);

  manager->display_executive();

  Department  *IT;
  IT = new Department("IT");

  IT-> add_Employee(em2);

  IT->display_Department();


  Resources *resource1, *resource2, *resource3;
  resource1 = new Resources("T001");
  resource2 = new Resources("V001");
  resource3 = new Resources("M001");
 
  resource1->printrsources();
  
  
  Tool *tool1;
  tool1 = new Tool("Drill", 5, resource1);
  tool1->displayTools();

  Vehicle *vehicle1;
  vehicle1 = new Vehicle("Lorry", "58E", "TATA", resource2);
  vehicle1->displayVehicles();

  Material *mat1;
  mat1 = new Material("Sand", 25000, 45879, resource3);
  mat1->displaymaterials();

  Project *pr1;
  pr1 = new Project("P001", "Year", "Colombo", manager, resource1, resource2, resource3);
  
  Report *report[2];
  report[0] = new Report();
  report[1] = new Report();

  report[0]->costreport(001, mat1);
  report[1]->resourcereport(002, pr1);

  Booking *book1;
  book1 = new Booking();
  
  delete em1;
  delete em2;
  delete manager;
  delete IT;
  delete resource1;
  delete resource2;
  delete resource3;
  delete tool1;
  delete vehicle1;
  delete mat1;
  delete pr1;
  delete report[0];
  delete report[1];
  delete book1;

  return 0; 
}
