#pragma once
#include "Employee.h"
class Department{
  private:
    Employee *em[1];
    char department_name[10];

  public:
    Department(const char dname[10]);
    void add_Employee(Employee *emp1);
    void add_Department();
    void delete_Department();
    void display_Department();
    ~Department();

};
