#pragma once
class Resources{
  protected:
    char resource_id[5];
  public:
    Resources();
    Resources(const char rid[5]);
    void addresources();
    void deletereouces();
    void editresources();
    void printrsources();
    void bookresources();
    ~Resources();

};
