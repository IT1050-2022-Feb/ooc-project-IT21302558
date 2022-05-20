#include "Report.h"
#include "Material.h"
#include "Project.h"
#include <iostream>

using namespace std;

Report::Report(){
  
}
void Report::costreport(int no, Material *m1){
  cout << "\n" << endl;
  m1->displaymaterials();
  cout << "\nTotal  Cost - "<<( m1->getquantity() * m1->getpriceperunit()) << "\n" << endl;
}
void Report::resourcereport(int no, Project *p1){
  p1->displayProject();
}
Report::~Report(){
  cout << "Deleting Report" << endl;
}
