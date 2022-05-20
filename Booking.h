#include "Project.h"
#include "Resources.h"

class Booking{
  private:
    Resources *resource[1];
    Project *project[1];
    char bookingID[5];
    char startdate[10];
    char enddate[10];
  public:
    Booking();
    void bookresources();
    void adddetails();
    void delete_bookeditems();
    void deletebookedresources();
    ~Booking();
};
