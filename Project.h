#pragma once
#include "Executive.h"
#include "Resources.h"

class Project{
  private:
    Executive *exucutive[1];
    Resources *resources[3];
    char projectid[5];
    char duration[10];
    char location[10];
  public:
    Project();
    Project(const char id[5], const char pduration[10], const char plocation[10], Executive *ex1, Resources *re1, Resources *re2, Resources *re3);
    void addproject();
    void editproject();
    void deleteproject();
    void displayProject();
    void getcost();
    ~Project();
};
