#pragma once
#include "Material.h"
#include "Project.h"

class Report{
  private:
    int report_no;
  public:
    Report();
    void costreport(int no, Material *m1);
    void resourcereport(int no, Project *p1);
    ~Report();
};
